#ifndef FUNCTIONALCPP__FUNCTION_POINTER__HPP
#define FUNCTIONALCPP__FUNCTION_POINTER__HPP

namespace functionalcpp { namespace function_pointer {

/**
 * Wraps a function pointer as a Func object
 */
template<typename TR> struct FuncPointer0 :
    FuncImpl0<FuncPointer0<TR>, TR>
{
    TR(*const function_pointer)();

    FuncPointer0(TR(*fp)()) : function_pointer(fp){}

    TR evaluate() const{
        return function_pointer();
    }
};

/**
 * @see FuncPointer0
 */
template<typename TR, typename T1> struct FuncPointer1 :
    FuncImpl1<FuncPointer1<TR, T1>, TR, T1>
{
    TR(*const function_pointer)(T1);

    FuncPointer1(TR(*fp)(T1)) : function_pointer(fp){}

    TR evaluate(T1 arg1) const{
        return function_pointer(arg1);
    }
};

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
template<typename TR> FuncPointer0<TR> fp(TR(*fp)()){
    return FuncPointer0<TR>(fp);
}

template<typename TR, typename T1> FuncPointer1<TR,T1> fp(TR(*fp)(T1)){
    return FuncPointer1<TR, T1>(fp);
}

}} // namespace functionalcpp::function_pointer

#endif // FUNCTIONALCPP__FUNCTION_POINTER__HPP
