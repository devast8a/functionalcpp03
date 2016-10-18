#include <iostream>
#include <vector>
#include <algorithm>

#include "placeholder.hpp"
#include "lambda_expression.hpp"

using namespace functionalcpp::placeholder;
using namespace functionalcpp::lambda_expression;

template<class T> void myfunc(T f){
    std::cout << f(10, 20, 30, 40, 50, 60) << std::endl;
}

template<class T> void myfunc2(T f){
    std::cout << f(10, 20) << std::endl;
}

int main(){
    myfunc(lambda/ _ + _ + _ + _ + _ + _);
    myfunc2(lambda/ _ * 30 + 1 + _);
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
