#ifndef FUNCTIONALCPP__FUNCTION_POINTER__HPP
#define FUNCTIONALCPP__FUNCTION_POINTER__HPP

#include "func.hpp"

namespace functionalcpp { namespace function_pointer {
using namespace functionalcpp::function;

template<typename TR, typename T0> struct func_pointer1{
    typedef TR(*function_type)(T0);

    function_type function_pointer;

    func_pointer1(function_type fp) : function_pointer(fp){}

    TR apply(T0 v0){
        return function_pointer(v0);
    }
};

template<typename T>
struct function : Func1<T, int, int>
{
    function(Func1<T, int, int> func) : Func1<T, int, int>(func){}
};

template<typename T>
function<T> mkfunction(T func){
    return function<T>(func);
}

/**
 * Convert from a Function Pointer to a Func.
 * If you wish to import the fp function into your global namespace it's
 * suggested that you ONLY import fp with the following.
 * using function_pointer::fp;
 *
 * @example
 *  int abc(){
 *      return 0;
 *  }
 *  ...
 *  Func<int> func = fp(abc);
 *
 * @see Func0<T> for more information regarding Func classes
 * @see FuncPointer0<T> for information regarding function pointer adaption
 */
template<typename TR, typename T0>
function<func_pointer1<TR, T0> >
fp(TR(*fp)(T0)){
    return mkfunction(
        func_pointer1<TR, T0>(fp)
    );
}

}} // namespace functionalcpp::function_pointer

#endif // FUNCTIONALCPP__FUNCTION_POINTER__HPP
