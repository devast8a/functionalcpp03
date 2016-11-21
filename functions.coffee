require 'template'

MAX_LENGTH = 16
def = '__'

out """
#ifndef FUNCTIONALCPP__FUNCTIONS__HPP
#define FUNCTIONALCPP__FUNCTIONS__HPP

#include "tmp.hpp"

struct #{def}{};
namespace functionalcpp { namespace functions {
// signature //////////////////////////////////////////////////////////////////
"""

for i in [MAX_LENGTH..0]
    out """
        template<typename TR{0}>
        struct signature{1}
        {
            static const size_t parameters = {2};
            static const bool returns_value = tmp::not_void<TR>::value;
            typedef TR return_type;
            {3}
        };
        """,
        variadic i, MAX_LENGTH, def, "T{0}"
        variadic i, MAX_LENGTH, def, "T{0}", "<TR, {0}>"
        i
        list [0...i], "typedef T{0} parameter{0}_type;", "\n"

out """
namespace bodies{

// bodies::dfunction_body /////////////////////////////////////////////////////
"""

for i in [MAX_LENGTH..0]
    out """
        template<typename TR{0}>
        struct dfunction_body{1} : signature<TR{2}>
        {
            virtual TR apply({3});
        };

        """,
        variadic i, MAX_LENGTH, def, "T{0}"
        variadic i, MAX_LENGTH, def, "T{0}", "<TR, {0}>"
        list [0...i], ", T{0}", ""
        list [0...i], "T{0} a{0}"

out """

// bodies::dfunction_body_adapter /////////////////////////////////////////////
"""

for i in [MAX_LENGTH..0]
    out """
        template<typename TCallable, typename TR{0}>
        struct dfunction_body_adatper{1} : dfunction_body<TR{2}>
        {
            TCallable callable;

            dfunction_body_adatper(TCallable callable) : callable(callable){}

            inline TR apply({3}){
                return callable.apply({4});
            }
        };

        """,
        variadic i, MAX_LENGTH, def, "T{0}"
        variadic i, MAX_LENGTH, def, "T{0}", "<TCallable, TR, {0}>"
        list [0...i], ", T{0}", ""
        list [0...i], "T{0} a{0}"
        list [0...i], "a{0}"

out """
} // namespace bodies

// dfunction //////////////////////////////////////////////////////////////////
"""

for i in [MAX_LENGTH..0]
    out """
        template<typename TR{0}>
        struct dfunction{1} : signature<TR{2}>
        {
            typedef bodies::dfunction_body<TR{2}> body_type;

            body_type& body;

            dfunction(body_type& body) : body(body){}

            inline TR operator()({3}){
                return body.apply({4});
            }
        };

        """,
        variadic i, MAX_LENGTH, def, "T{0}"
        variadic i, MAX_LENGTH, def, "T{0}", "<TR, {0}>"
        list [0...i], ", T{0}", ""
        list [0...i], "T{0} a{0}"
        list [0...i], "a{0}"

out """
// function ///////////////////////////////////////////////////////////////////
"""

for i in [MAX_LENGTH..0]
    out """
        template<typename TCallable, typename TR{0}>
        struct function{1} : signature<TR{2}>
        {
            typedef TCallable callable_type;
            TCallable callable;

            function(TCallable callable) : callable(callable){}

            inline TR operator()({3}){
                return callable.apply({4});
            }

            inline operator dfunction<TR{2}>(){
                return dfunction<TR{2}>(
                    *new bodies::dfunction_body_adatper<TCallable, TR{2}>(callable)
                );
            }
        };

        """,
        variadic i, MAX_LENGTH, def, "T{0}"
        variadic i, MAX_LENGTH, def, "T{0}", "<TCallable, TR, {0}>"
        list [0...i], ", T{0}", ""
        list [0...i], "T{0} a{0}"
        list [0...i], "a{0}"

out """
namespace details{

// details::function_selector /////////////////////////////////////////////////

template<typename TCallable, typename TSignature, size_t TParameters>
struct function_selector;

"""

for i in [MAX_LENGTH..0]
    out """
        template<typename TCallable, typename TSignature>
        struct function_selector<TCallable, TSignature, {0}>{
            typedef function<TCallable, typename TSignature::return_type{1}> function_type;
        };
        """,
        i
        list [0...i], ", typename TSignature::parameter{0}_type", ""

out """
}; // namespace details

// function_selector //////////////////////////////////////////////////////////

template<typename TCallable, typename TSignature>
struct function_selector{
    typedef typename details::function_selector<TCallable, TSignature, TSignature::parameters>::function_type function_type;
};

// function_wrapper ///////////////////////////////////////////////////////////
template<typename TCallable, typename TSignature>
struct function_wrapper : function_selector<TCallable, TSignature>::function_type{
    typedef typename function_selector<TCallable, TSignature>::function_type function_type;

    function_wrapper(TCallable callable) : function_type(callable){
    }
};

}} // namespace functionalcpp::functions

#endif // FUNCTIONALCPP__FUNCTIONS__HPP
"""
