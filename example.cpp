#include <typeinfo>
#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

#include "functions.hpp"
#include "operators.hpp"
#include "signature_utils.hpp"

namespace functionalcpp { namespace signatures {

namespace details{

template<typename A, typename B, size_t BLen>
struct concat_right{
    typedef typename pop_front<B>::parameter_type T;
    typedef typename pop_front<B>::type B2;
    typedef typename push_back<A, T>::type A2;
    typedef typename concat_right<A2, B2, BLen-1>::type type;
};
template<typename A, typename B>
struct concat_right<A, B, 0>{
    typedef A type;
};

template<typename A, typename B, size_t ALen>
struct concat_left{
    typedef typename pop_back<A>::parameter_type T;
    typedef typename pop_back<A>::type A2;
    typedef typename push_front<B, T>::type B2;
    typedef typename concat_right<A2, B2, ALen-1>::type type;
};
template<typename A, typename B>
struct concat_left<A, B, 0>{
    typedef B type;
};
template<typename A, typename B, bool Left>
struct concat{
    typedef typename concat_right<A, B, B::parameters>::type type;
};
template<typename A, typename B>
struct concat<A, B, true>{
    typedef typename concat_left<A, B, A::parameters>::type type;
};

}

/*
 * Concatenates parameter lists for two different signatures.
 * eg.
 *  concat<
 *      signature<R, A, B, C>
 *      signature<R, D, E>
 *  >::type == signature<R, A, B, C, D, E>
 *
 * The return type will either be the return type of A or B, chosen based on the
 * number of parameters in A and B. It is recommended that you only call concat
 * on signatures with identical return types OR you do an additional step that
 * sets the return type after calling concat.
 */
template<typename A, typename B>
struct concat{
    typedef typename details::concat<A, B, A::parameters < B::parameters>::type type;
};

template<typename A, typename B>
struct merge_concat{
    typedef typename details::concat<A, B, A::parameters < B::parameters>::type type;
};

} }

#include "lambda_expression.hpp"

namespace functionalcpp { namespace lambda_expression {
// At the moment the return types aren't properly computed, I haven't yet decided
// on how I want to do it
typedef int TEMPORARY_RETURN_TYPE;

template<typename Condition, typename Left, typename Right>
struct if_expression : expression_body<if_expression<Condition, Left, Right> >{
    static const size_t positional_args = Condition::positional_args + Left::positional_args + Right::positional_args;

    Condition condition;
    Left left;
    Right right;

    if_expression(Condition condition, Left left, Right right) :
        condition(condition), left(left), right(right){}

    template<typename T>
    TEMPORARY_RETURN_TYPE operator()(const T& args){
        if(condition(args)){
            return left(args::position_add<Condition>(args));
        }

        return right(args::position_add<Condition::positional_args + Left::positional_args>(args));
    }
};

template<typename Condition, typename Left, typename Right>
struct select_helper{
    // Expression types for all the components of the select_expression
    typedef typename expression_traits<Condition>::expression condition_expression;
    typedef typename expression_traits<Left>::expression left_expression;
    typedef typename expression_traits<Right>::expression right_expression;

    // select_expression expression type
    typedef if_expression<condition_expression, left_expression, right_expression> expression;

    // Signatures types for all the components of the select_expression
    typedef typename expression_traits<Condition>::signature condition_signature;
    typedef typename expression_traits<Left>::signature left_signature;
    typedef typename expression_traits<Right>::signature right_signature;

    // select_expression signature type
    // TODO: Create a merge struct that is variadic
    typedef typename signatures::merge_concat<
        typename signatures::merge_concat<
            condition_signature, left_signature
        >::type, right_signature
    >::type signature;

    // helpers used in the select function
    typedef lambda_expression::expression<expression, signature> return_type;

    static return_type create(Condition condition, Left left, Right right){
        return return_type(
            expression(make_expression(condition), make_expression(left), make_expression(right))
        );
    }
};

template<typename Condition, typename Left, typename Right>
typename select_helper<Condition, Left, Right>::return_type
select(Condition condition, Left left, Right right){
    return select_helper<Condition, Left, Right>::create(condition, left, right);
};

} }

using namespace functionalcpp::placeholder;
using namespace functionalcpp::lambda_expression;

template<typename T>
void testFn(T fn){
    std::cout << fn(10, 1, 25, 10) << std::endl;
}

int main(){
    testFn(lambda/ select(_ > _, _, 20) + _);

    return 0;
}
// Expression<ExpressionTree, ParameterVector>

// Sum of two functions A and B should be max(sum(positional argumnets), specified arguments...)
// A     = _, _, _
// B     = _, _
// A + B = 5 Arguments, 5 positional.
//
// A     = _0
// B     = _, _, _
// A + B = 3 Arguments, 1 (positional & specified), 2 positional
//
// A     = _4
// B     = _, _, _
// A + B = 5 Arguments, 3 positional, 1 skipped, 1 specified
//
// A     = _3
// B     = _1
// A + B = 4 Arguments, 1 skipped, 1 specified, 1 skipped, 1 specified

// It's in early access, please see my kick scammer
// Operators other than + and > will be added as future DLC
