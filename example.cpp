#include "lambda_expression.hpp"
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using namespace functionalcpp::lambda_expression;
using namespace functionalcpp::placeholder;

int main(){
    std::vector<int> vec;

    // Easy to use, FuncN<ReturnType, Paramter1Type, Parameter2Type, ...>
    // Where N is the number of parameters
    Func0<int> return_10 = lambda/ 10;

    // You're rude and want to ignore parameters, that's fine by me
    Func1<int, int> ignore_parameter = lambda/ 4;

    // Want to actually do something useful?
    Func1<int, int> bam_now_youre_adding_numbers = lambda/ _ + 5;

    // Works in other places too
    transform(vec.begin(), vec.end(), vec.begin(), lambda/ _ + 2);

    // If you're rude? Still works in other places
    transform(vec.begin(), vec.end(), vec.begin(), lambda/ 5);

    // Bet it's not typesafe tho right?
    // WRONG.
    // Func1<int, std::string> abc = lambda/ _ + 3;
    // THAT WOULD HAVE FAILED.
    
    // Variables?
    int x = 10;
    Func1<int, int> wow = lambda/ _ + x;

    // What happens if I change x?
    // The value of x is captured when you make the lambda
    // Don't want that?
    // This is broken, I may fix it... probably won't
    //Func1<int, int> such_references = lambda/ _ + ref(x);
    
    // How about something other than adding?
    Func1<bool, int> even_more_useful = lambda/ _ + 3 > 6;

    // It's in early access, please see my kick scammer
    // Operators other than + and > will be added as future DLC

    return 0;
}
