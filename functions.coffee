require 'template'

MAX_SIGNATURE_SIZE = 16

out """
#ifndef FUNCTIONALCPP__FUNCTIONS__HPP
#define FUNCTIONALCPP__FUNCTIONS__HPP

#include "function_signature.hpp"

namespace functionalcpp { namespace functions {

/*
 * Function bodies contain the implementation of a function object.
 */
namespace bodies{
"""

for i in [0..MAX_SIGNATURE_SIZE]
    out """
        template<typename TR{1}> struct dfunc{0}_body : signatures::fsig{0}<TR{2}>{
            virtual TR apply({3}) = 0;
        };

        template<typename TFunc, typename TR{1}> struct dfunc{0}_body_adapter : dfunc{0}_body<TR{2}>{
            TFunc func;

            dfunc{0}_body_adapter(TFunc func) : func(func){}

            inline TR apply({3}){
                return func.apply({4});
            }
        };

        """,
        i
        list [0...i], ", typename T{0}", ""
        list [0...i], ", T{0}", ""
        list [0...i], "T{0} a{0}"
        list [0...i], "a{0}"

out """
} // namespace bodies

"""

for i in [0..MAX_SIGNATURE_SIZE]
    out """
        template<typename TR{1}> struct dfunc{0} : signatures::fsig{0}<TR{2}>{
            bodies::dfunc{0}_body<TR{2}>& func;

            inline TR operator()({3}){
                return func.apply({4});
            }

            dfunc{0}(bodies::dfunc{0}_body<TR{2}>& func) : func(func){}
        };

        template<typename TFunc, typename TR{1}> struct func{0} : signatures::fsig{0}<TR{2}>{
            typedef TFunc function_type;
            TFunc function;

            func{0}(TFunc function) : function(function){}

            inline TR operator()({3}){
                return function.apply({4});
            }

            operator dfunc{0}<TR{2}>(){
                return dfunc{0}<TR{2}>(
                    *new bodies::dfunc{0}_body_adapter<TFunc, TR{2}>(function)
                );
            }
        };

        """,
        i,
        list [0...i], ", typename T{0}", ""
        list [0...i], ", T{0}", ""
        list [0...i], "T{0} a{0}"
        list [0...i], "a{0}"

out """
namespace details {
template<size_t TParams, typename TFunc, typename TSig> struct d_func_traits{};
"""

for i in [0..MAX_SIGNATURE_SIZE]
    out """
        template<typename TFunc, typename TSig> struct d_func_traits<{0}, TFunc, TSig>{
            typedef func{0}<TFunc, typename TSig::return_type{1}> function_type;
            typedef dfunc{0}<typename TSig::return_type{1}> dfunction_type;
        };
        """,
        i
        list [0...i], ", typename TSig::parameter{0}_type", ""

out """
} // namespace details

template<typename TFunc, typename TSig> struct func_selector{
    typedef typename details::d_func_traits<TSig::parameters, TFunc, TSig>::function_type type;
};
template<typename TSig> struct dfunc_selector{
    typedef typename details::d_func_traits<TSig::parameters, void, TSig>::dfunction_type type;
};

template<typename T>
struct function : func_selector<T, T>::type
{
    function(T function) :
        func_selector<T, T>::type(function){}
};

template<typename T>
function<T> mkfunction(T func){
    return function<T>(func);
}

}} // namespace functionalcpp::functions

#endif // FUNCTIONALCPP__FUNCTIONS__HPP
"""
