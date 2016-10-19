#ifndef FUNCTIONALCPP__LAMBDA_EXPRESSION__HPP
#define FUNCTIONALCPP__LAMBDA_EXPRESSION__HPP

#include "func.hpp"
#include "placeholder.hpp"
#include "tuple.hpp"
#include "operators.hpp"


namespace functionalcpp{ namespace lambda_expression {

using namespace functionalcpp::function;
using namespace functionalcpp::tupleNS;
using namespace functionalcpp::placeholder;
using namespace functionalcpp::operators;

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
template<typename TConstant> struct ConstantExpr{
    static const size_t positional_args = 0;

    const TConstant value;
    ConstantExpr(TConstant value) : value(value){}

    template<size_t N, typename TArgs> TConstant evaluate(const TArgs&) const{
        return value;
    }
};

struct PositionalArgExpr{
    static const size_t positional_args = 1;

    template<size_t N, typename TArgs> typename get<N, TArgs>::type evaluate(const TArgs& args) const{
        return get<N, TArgs>::value(args);
    }
};

template<size_t N> struct SpecificArgExpr{
    static const size_t positional_args = 0;

    template<size_t _IGNORE, typename TArgs> typename get<N, TArgs>::type evaluate(const TArgs& args) const{
        return get<N, TArgs>::value(args);
    }
};

template<typename TLeft, typename TRight, typename TOperator> struct BinaryExpr{
    const TLeft left;
    const TRight right;

    static const size_t positional_args = TLeft::positional_args + TRight::positional_args;

    BinaryExpr(const TLeft left, const TRight right) :
        left(left), right(right){}

    template<size_t N, typename TArgs> int evaluate(const TArgs& args) const{
        binary_operator<TOperator, any, int, int>::evaluate(
            left.template evaluate<N, TArgs>(args),
            right.template evaluate<N + TLeft::positional_args, TArgs>(args)
        );
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
template<typename TExpression, typename TFunc> struct Expression :
    FuncN<Expression<TExpression, TFunc>, TFunc>
{
    const TExpression expression;
    typedef TExpression expression_type;
    typedef TFunc function_type;

    Expression(TExpression expression) : expression(expression){}

    template<typename TR, typename TArgs> TR apply_tuple(const TArgs& args) const{
        return expression.template evaluate<0, TArgs>(
            args
        );
    }
};

/*******************************************************************************
 * Operator definitions
 ******************************************************************************/

// Lambda Keyword //////////////////////////////////////////////////////////////
struct LambdaKeyword {} lambda;

Expression<
    PositionalArgExpr,
    FuncSig1<int, int>
>
operator /(LambdaKeyword, const PlaceholderPositional&){
    return Expression<
        PositionalArgExpr,
        FuncSig1<int, int>
    >(
        PositionalArgExpr()
    );
}

template<typename TExpression, typename TFunc>
Expression<TExpression, TFunc>
operator /(LambdaKeyword, const Expression<TExpression, TFunc>& rhs){
    return rhs;
}

template<typename TConstant>
Expression<
    ConstantExpr<TConstant>,
    FuncSig0<TConstant>
>
operator /(LambdaKeyword, const TConstant& constant){
    return Expression<
        ConstantExpr<TConstant>,
        FuncSig0<TConstant>
    >(
        ConstantExpr<TConstant>(constant)
    );
}

// Other operators /////////////////////////////////////////////////////////////
template<typename TWrapper>
Expression<
    BinaryExpr<typename TWrapper::expression_type, PositionalArgExpr, add>,
    typename FuncSigMerge<typename TWrapper::function_type, FuncSig1<int, int> >::type
>
operator +(const TWrapper& wrapper, const PlaceholderPositional&){
    return Expression<
        BinaryExpr<typename TWrapper::expression_type, PositionalArgExpr, add>,
        typename FuncSigMerge<typename TWrapper::function_type, FuncSig1<int, int> >::type
    >(
        BinaryExpr<typename TWrapper::expression_type, PositionalArgExpr, add>(
            wrapper.expression, PositionalArgExpr()
        )
    );
}

template<typename TWrapper, typename TConstant>
Expression<
    BinaryExpr<typename TWrapper::expression_type, ConstantExpr<TConstant>, add>,
    typename TWrapper::function_type
>
operator +(const TWrapper& wrapper, const TConstant& constant){
    return Expression<
        BinaryExpr<typename TWrapper::expression_type, ConstantExpr<TConstant>, add>,
        typename TWrapper::function_type
    >(
        BinaryExpr<typename TWrapper::expression_type, ConstantExpr<TConstant>, add>(
            wrapper.expression, ConstantExpr<TConstant>(constant)
        )
    );
}

template<typename TWrapper>
Expression<
    BinaryExpr<typename TWrapper::expression_type, PositionalArgExpr, mul>,
    typename FuncSigMerge<typename TWrapper::function_type, FuncSig1<int, int> >::type
>
operator *(const TWrapper& wrapper, const PlaceholderPositional&){
    return Expression<
        BinaryExpr<typename TWrapper::expression_type, PositionalArgExpr, mul>,
        typename FuncSigMerge<typename TWrapper::function_type, FuncSig1<int, int> >::type
    >(
        BinaryExpr<typename TWrapper::expression_type, PositionalArgExpr, mul>(
            wrapper.expression, PositionalArgExpr()
        )
    );
}

template<typename TWrapper, typename TConstant>
Expression<
    BinaryExpr<typename TWrapper::expression_type, ConstantExpr<TConstant>, mul>,
    typename TWrapper::function_type
>
operator *(const TWrapper& wrapper, const TConstant& constant){
    return Expression<
        BinaryExpr<typename TWrapper::expression_type, ConstantExpr<TConstant>, mul>,
        typename TWrapper::function_type
    >(
        BinaryExpr<typename TWrapper::expression_type, ConstantExpr<TConstant>, mul>(
            wrapper.expression, ConstantExpr<TConstant>(constant)
        )
    );
}
}} // namespace functionalcpp::lambda_expression

#endif // FUNCTIONALCPP__LAMBDA_EXPRESSION__HPP
