#ifndef FUNCTIONALCPP__LAMBDA_EXPRESSION__HPP
#define FUNCTIONALCPP__LAMBDA_EXPRESSION__HPP

#include "functions.hpp"
#include "placeholder.hpp"
#include "tuple.hpp"
#include "operators.hpp"
#include "signature_utils.hpp"


namespace functionalcpp{ namespace lambda_expression {

namespace args{
    /*
     * Container that holds various things for expression functions
     *  - Type safe tuple of arguments
     *  - Current positional argument (Manipulated at compile time)
     *
     * You should try to use one of the helper classes/functions in this
     * namespace before hacking onto/using argcontainer directly.
     */
    template<typename TArguments, size_t TPosition>
    struct argcontainer
    {
        argcontainer(TArguments arguments) : arguments(arguments){}

        typedef TArguments arguments_type;
        static const size_t position = TPosition;
        arguments_type arguments;
    };

    // position_add ////////////////////////////////////////////////////////////

    /*
     * Adds to the position field of a given argcontainer
     *
     * Used by positional placeholder expressions to determine which argument
     * a placeholder refers to
     *
     * You can use position_add in the following ways.
     *
     * Directly add to position
     *      position_add<3>(args); // adds 3 to position field of args
     *
     * Add the number of positional arguments in an expression to the position
     *      position_add<T>(args); // adds the number of positional arguments
     *                             // in the expression T to position field
     *
     * The type of argcontainer will change, it's best to just directly call
     * something template function with the new argcontainer.
     */
    template<typename TExpression, typename T>
    argcontainer<
        typename T::arguments_type,
        T::position + TExpression::positional_args
    >
    position_add(const T& args)
    {
        return argcontainer<
            typename T::arguments_type,
            T::position + TExpression::positional_args
        >(
            args.arguments
        );
    };

    /*
     * @see position_add
     */
    template<size_t N, typename T>
    argcontainer<
        typename T::arguments_type,
        T::position + N
    >
    position_add(const T& args)
    {
        return argcontainer<
            typename T::arguments_type,
            T::position + N
        >(
            args.arguments
        );
    };

    // value ///////////////////////////////////////////////////////////////////

    /*
     * Returns the value of the Nth argument with type safety
     * Piggybacks off tuples::get
     *
     * args = make(tuples::create('A', 41.5f, 32));
     * char c = value<0>(args);
     * char c = value<1>(args);
     */
    template<size_t N, typename T>
    typename tuples::get<N, typename T::arguments_type>::type
    value(const T& args)
    {
        return tuples::get<N, typename T::arguments_type>::value(args.arguments);
    }

    // get::type ///////////////////////////////////////////////////////////////

    /*
     * Get the type of the Nth argument
     * Unlike value, you must explicitly specify the argcontainer type.
     * Piggybacks off tuples::get
     */
    template<size_t N, typename T>
    struct get{
        typedef typename tuples::get<N, typename T::arguments_type>::type type;

        static type value(const T& args)
        {
            return tuples::get<N, typename T::arguments_type>::value(args.arguments);
        }
    };

    // make ////////////////////////////////////////////////////////////////////

    /*
     * Make a default argcontainer and fill it with a tuple of arguments
     *
     * args = make(tuples::create(10, 'h'));
     */
    template<typename T>
    argcontainer<T, 0>
    make(const T& args){
        return argcontainer<T, 0>(args);
    }
}

template<typename TSelf>
struct expression_body
{
    int apply(){
        return apply_tuple(
            tuples::create()
        );
    }

    template<typename T0> int apply(T0 a0){
        return apply_tuple(
            tuples::create(a0)
        );
    }

    template<typename T0, typename T1> int apply(T0 a0, T1 a1){
        return apply_tuple(
            tuples::create(a0, a1)
        );
    }

    template<typename T0, typename T1, typename T2> int apply(T0 a0, T1 a1, T2 a2){
        return apply_tuple(
            tuples::create(a0, a1, a2)
        );
    }

    template<typename T0, typename T1, typename T2, typename T3> int apply(T0 a0, T1 a1, T2 a2, T3 a3){
        return apply_tuple(
            tuples::create(a0, a1, a2, a3)
        );
    }

    template<typename T>
    int apply_tuple(const T& args){
        return static_cast<TSelf&>(*this)(
            args::make(args)
        );
    }
};

template<typename TConstant>
struct constant_expression : expression_body<constant_expression<TConstant> >
{
    static const size_t positional_args = 0;
    typedef TConstant return_type;

    const TConstant value;
    constant_expression(TConstant value) : value(value){}

    template<typename T>
    TConstant operator()(const T&){
        return value;
    }
};

#include "placeholder.hpp"

struct placeholder_positional_expression : expression_body<placeholder_positional_expression>
{
    static const size_t positional_args = 1;
    // Don't know what to do with the return type here
    
    template<typename T>
    typename args::get<T::position, T>::type
    operator()(const T& args){
        return args::value<T::position>(args);
    }
};

using namespace operators;

template<typename TOperator, typename TLeft, typename TRight>
struct binary_operator_expression : expression_body<binary_operator_expression<TOperator, TLeft, TRight> >
{
    static const size_t positional_args = TLeft::positional_args + TRight::positional_args;
    // Don't know what to do with the return type here
    
    TLeft left;
    TRight right;
    binary_operator_expression(TLeft left, TRight right) : left(left), right(right){}
    
    template<typename T>
    int
    operator()(const T& args){
        return binary_operator<TOperator, any, int, int>::evaluate(
            left(args), right(args::position_add<TLeft>(args))
        );
    }
};

template<typename TExpression, typename TSignature>
struct expression : functions::function_wrapper<TExpression, TSignature>{
    expression(TExpression expression) :
        functions::function_wrapper<TExpression, TSignature>(expression)
    {};
};

template<typename T>
struct expression_traits{
    typedef constant_expression<T> expression;
    typedef functions::signature<T> signature;
    static const bool implicit = false;
    static expression make(T arg){
        return expression(arg);
    }
};

template<> struct expression_traits<placeholder::PlaceholderPositional>{
    typedef placeholder_positional_expression expression;
    typedef functions::signature<int, int> signature;
    static const bool implicit = true;
    static expression make(placeholder::PlaceholderPositional){
        return expression();
    }
};

template<typename TExpression, typename TSignature>
struct expression_traits<expression<TExpression, TSignature> >{
    typedef TExpression expression;
    typedef TSignature signature;
    static const bool implicit = true;
    static expression make(lambda_expression::expression<TExpression, TSignature> arg){
        return arg.callable;
    }
};

template<typename T>
typename expression_traits<T>::expression
make_expression(T value){
    return expression_traits<T>::make(value);
};

struct LambdaKeyword {} lambda;

template<typename T>
expression<
    typename expression_traits<T>::expression,
    typename expression_traits<T>::signature
>
operator/ (const LambdaKeyword&, T rhs){
    return expression<
        typename expression_traits<T>::expression,
        typename expression_traits<T>::signature
    >(make_expression(rhs));
}

#include "operators.hpp"

template<typename TOperator, typename TLeft, typename TRight>
struct binary_operator_impl{
    static const bool enabled = expression_traits<TLeft>::implicit || expression_traits<TRight>::implicit;

    typedef typename expression_traits<TLeft>::expression  left_expression;
    typedef typename expression_traits<TLeft>::signature   left_signature;
    typedef typename expression_traits<TRight>::expression right_expression;
    typedef typename expression_traits<TRight>::signature  right_signature;
    typedef binary_operator_expression<TOperator,left_expression,right_expression> expression;
    typedef typename signatures::merge_concat<left_signature, right_signature>::type signature;

    typedef lambda_expression::expression<expression, signature> return_type;

    static return_type create(TLeft left, TRight right){
        return return_type(
            expression(make_expression(left), make_expression(right))
        );
    };
};

#define BIN(SYMBOL, OPERATOR)                                                                  \
    template<typename TLeft, typename TRight>                                                 \
    typename binary_operator_impl<operators::OPERATOR, TLeft, TRight>::return_type            \
    operator SYMBOL(TLeft left, TRight right){                                                \
        return binary_operator_impl<operators::OPERATOR, TLeft, TRight>::create(left, right); \
    }

BIN(+, add);
BIN(-, sub);
BIN(*, mul);
BIN(/, div);

BIN(>, lt);
BIN(<, gt);
#undef BIN

}} // namespace functionalcpp::lambda_expression

#endif // FUNCTIONALCPP__LAMBDA_EXPRESSION__HPP
