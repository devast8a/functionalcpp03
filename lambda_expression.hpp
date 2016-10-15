#ifndef FUNCTIONALCPP__LAMBDA_EXPRESSION__HPP
#define FUNCTIONALCPP__LAMBDA_EXPRESSION__HPP

#include "func.hpp"
#include "placeholder.hpp"
#include "tuple.hpp"


namespace functionalcpp{ namespace lambda_expression {

using namespace functionalcpp::function;
using namespace functionalcpp::tupleNS;

/*******************************************************************************
 * Expression implementations
 * TArgs is a type safe tuple (see tuple), containing the arguments given to the
 * lambda expression when being called.
 *
 * evaluate() is probably the perfect place to work out return value types etc
 *
 * Perhaps we remove all ancillary information from Expressions, like
 * GetArg's TType and N, or BinaryExpression's evaluate return type
 * Then populate this information only when evaluate is called.
 ******************************************************************************/
template<class TConstant> struct Constant{
    const TConstant value;
    Constant(TConstant value) : value(value){}

    template<class TArgs> TConstant evaluate(const TArgs&) const{
        return value;
    }
};

template<class TType, int N> struct GetArg{
    template<class TArgs> TType evaluate(const TArgs& args) const{
        return get<N>::from(args);
    }
};

template<class TLeft, class TRight> struct BinaryExpression{
    const TLeft left;
    const TRight right;

    BinaryExpression(const TLeft left, const TRight right) :
        left(left), right(right){}

    template<class TArgs> int evaluate(const TArgs& args) const{
        return left.evaluate(args) + right.evaluate(args);
    }
};

/*******************************************************************************
 * Expression wrappers,
 * These guys keep track of the signature of the Lambda expression as a whole
 * without mixing it with the expression tree itself.
 *
 * The idea being that we can pick up our expression and arbitrarily modify the
 * signature of the lambda without modifying the expression tree itself. This is
 * desirable because:
 * - We want any expression to be able to take an arbitrary number of arguments
 *   which requires a ton of boilerplate.
 * - We want to be able to update the signature of our expression at anytime,
 *   say as the result of a binary expression, modifying the entire expression
 *   tree every time we need to update the signature is tedious, error prone,
 *   and slow.
 ******************************************************************************/
template<class TExpression, class TR> struct Expression0 : Func0<TR>{
    const TExpression expression;
    typedef TExpression expression_type;

    Expression0(TExpression expression) : expression(expression){}

    TR apply(){
        return expression.evaluate(
            tuple::create()
        );
    }

    TR operator()(){
        return expression.evaluate(
            tuple::create()
        );
    }
};

template<class TExpression, class TR, class T0> struct Expression1 : Func1<TR, T0>{
    const TExpression expression;
    typedef TExpression expression_type;

    Expression1(TExpression expression) : expression(expression){}

    TR operator()(const T0& v0){
        return expression.evaluate(
            tuple::create(v0)
        );
    }

    template<typename T1> TR operator()(const T0& v0, const T1&){
        return expression.evaluate(
            tuple::create(v0)
        );
    }

    TR apply(const T0& v0){
        return expression.evaluate(
            tuple::create(v0)
        );
    }
};

template<class TExpression, class TR, class T0, class T1> struct Expression2{
    const TExpression expression;
    typedef TExpression expression_type;

    Expression2(TExpression expression) : expression(expression){}

    TR operator()(const T0& v0, const T1& v1){
        return expression.evaluate(
            tuple::create(v0, v1)
        );
    }
};

/*******************************************************************************
 * Operator definitions
 ******************************************************************************/

// Lambda Keyword //////////////////////////////////////////////////////////////
struct LambdaKeyword {} lambda;

Expression1<GetArg<int, 0>, int, int>
operator /(LambdaKeyword, const placeholder::PlaceholderPositional&){
    return Expression1<GetArg<int, 0>, int, int>(
        GetArg<int, 0>()
    );
}

template<class TConstant>
Expression0<Constant<TConstant>, TConstant>
operator /(LambdaKeyword, const TConstant& constant){
    return Expression0<Constant<TConstant>, TConstant>(
        Constant<TConstant>(constant)
    );
}

// Other operators /////////////////////////////////////////////////////////////
template<class TLeft>
// TODO: Work out a method of incrementing expression objects
Expression2<BinaryExpression<
    typename TLeft::expression_type,
    GetArg<int, 1>
// TODO: Again how do we handle return types?
>, int, int, int>
operator +(const TLeft left, const placeholder::PlaceholderPositional&){
    return Expression2<BinaryExpression<
        typename TLeft::expression_type,
        GetArg<int, 1>
    >, int, int, int>(
        BinaryExpression<
            typename TLeft::expression_type,
            GetArg<int, 1>
        >(
            left.expression,
            GetArg<int, 1>()
        )
    );
}

template<class TLeft, class TConstant>
// TODO: Work out a method of incrementing transition objects
Expression1<BinaryExpression<
    typename TLeft::expression_type,
    Constant<TConstant>
// TODO: Again how do we handle return types?
>, int, int>
operator +(const TLeft left, const TConstant right){
    return Expression1<BinaryExpression<
        typename TLeft::expression_type,
        Constant<TConstant>
    >, int, int>(
        BinaryExpression<
            typename TLeft::expression_type,
            Constant<TConstant>
        >(
            left.expression,
            Constant<TConstant>(right)
        )
    );
}



}} // namespace functionalcpp::lambda_expression

#endif // FUNCTIONALCPP__LAMBDA_EXPRESSION__HPP
