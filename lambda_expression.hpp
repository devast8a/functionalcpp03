#ifndef FUNCTIONALCPP__LAMBDA_EXPRESSION__HPP
#define FUNCTIONALCPP__LAMBDA_EXPRESSION__HPP

#include "func.hpp"
#include "placeholder.hpp"
#include "operators.hpp"

namespace functionalcpp{ namespace lambda_expression {

// TODO remove this using namespace
using namespace functionalcpp::function;

/**
 * LambdaKeyword, where magic happens.
 */
struct LambdaKeyword {} lambda;

/**
 * A function which returns a constant value
 */
template<typename TConstant> struct Constant :
    FuncImpl0<Constant<TConstant>, TConstant>
{
    const TConstant value;

    Constant(TConstant value) : value(value){}

    TConstant evaluate() const{
        return value;
    }
};

/**
 * Select argument one from a function with one argument.
 */
template<typename T1> struct Arg1From1 :
    FuncImpl1<Arg1From1<T1>, T1, T1>
{
    T1 evaluate(T1 a1) const{
        return a1;
    }
};

/**
 * Dereference the given variable
 */
template<typename T> struct Dereference :
    FuncImpl0<Dereference<T>, T>
{
    const T* reference;

    Dereference(T* reference) : reference(reference){}

    T evaluate() const{
        return *reference;
    }
};


/**
 * Implements binary operations
 *
 * The actual binary operation is implemented by TOperator
 * TLeft and TRight are expressions for the right and left hand sides,
 * will be something like TConstant<...> or BinaryOperator<...>
 *
 * Essentially they'll be something that inherits from FuncImplX
 *
 * evaluate taking an int and only the left hand side being given arguments
 * are problems that are talked about in problems.md
 */
template<typename TOperator, typename TLeft, typename TRight>
struct BinaryOperator :
    FuncImpl1<
        BinaryOperator<TOperator, TLeft, TRight>,
        typename TOperator::return_type,
        // This is just a dummy value for now, pretty much we shouldn't be taking any value?
        typename TRight::return_type
    >
{
    TLeft left;
    TRight right;

    BinaryOperator(TLeft left, TRight right) :
        left(left),
        right(right){}

    typename TOperator::return_type evaluate(int input){
        return TOperator::evaluate(
            left(input),
            right()
        );
    }
};

/**
 * Horrendous mess that implements the > operator
 */
template<typename TLeft, typename TConstant>
BinaryOperator<
    operators::gt<
        bool,   // Assume for now that > always returns bool
        typename TLeft::return_type,
        TConstant
    >,
    TLeft,
    Constant<TConstant>
>
operator > (TLeft left, TConstant right){
    return BinaryOperator<
        operators::gt<
            bool,
            typename TLeft::return_type,
            TConstant
        >,
        TLeft,
        Constant<TConstant>
    >
    (
        left,
        Constant<TConstant>(right)
    );
}

/**
 * Horrendous mess that implements the + operator
 */
template<typename TLeft, typename TConstant>
BinaryOperator<
    operators::add<
        typename TLeft::return_type,
        typename TLeft::return_type,
        TConstant
    >,
    TLeft,
    Constant<TConstant>
>
operator + (TLeft left, TConstant right){
    return BinaryOperator<
        operators::add<
            typename TLeft::return_type,
            typename TLeft::return_type,
            TConstant
        >,
        TLeft,
        Constant<TConstant>
    >
    (
        left,
        Constant<TConstant>(right)
    );
}

/*****************************************************************************
 * The following operators implement the / part in the "lambda/" keyword
 *
 * By using an operator after our "keyword" we get a few neat things
 * - We don't have to delimit the other end of our expression
 * - We may not need to wrap literals in our expression as lambda/ will convert
 *   things to the right of it to lambda expressions.
 ****************************************************************************/

template<typename TConstant> Constant<TConstant> operator /(LambdaKeyword, TConstant constant){
    return Constant<TConstant>(constant);
}

Arg1From1<int> operator /(LambdaKeyword, placeholder::PlaceholderPositional){
    return Arg1From1<int>();
}

// Stop lambda/ operator from attempting to wrap already valid expressions with Constant
template<typename T> Dereference<T> operator /(LambdaKeyword, Dereference<T> right){
    return right;
}

template<typename T> Constant<T> operator /(LambdaKeyword, Constant<T> right){
    return right;
}

/*****************************************************************************
 * Other functions that are exported as part of lambda_expression
 ****************************************************************************/
template<typename T> Dereference<T> ref(T& reference){
    return Dereference<T>(&reference);
}
template<typename T> Constant<T> val(T value){
    return Constant<T>(value);
}

}} // namespace functionalcpp::lambda_expression

#endif // FUNCTIONALCPP__LAMBDA_EXPRESSION__HPP
