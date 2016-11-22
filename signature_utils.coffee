require 'template'

MAX_LENGTH = 16
def = '__'

out """
#ifndef FUNCTIONALCPP__SIGNATURE_UTILS__HPP
#define FUNCTIONALCPP__SIGNATURE_UTILS__HPP

#include "functions.hpp"
#include "tmp.hpp"

namespace functionalcpp { namespace signatures {

namespace details {
    template<size_t Length, typename Signature, typename T> struct set_return_type_impl;
    template<size_t Length, typename Signature, typename T> struct push_back_impl;
    template<size_t Length, typename Signature, typename T> struct push_front_impl;
    template<size_t Length, typename Signature> struct pop_back_impl;
    template<size_t Length, typename Signature> struct pop_front_impl;
};

template<size_t N, typename Signature> struct get;
template<size_t N, typename Signature, typename T> struct set;
template<typename Signature, typename T> struct set_return_type{
    typedef typename details::set_return_type_impl<Signature::parameters, Signature, T>::type type;
};

template<typename Signature, typename T> struct push_back{
    typedef typename details::push_back_impl<Signature::parameters, Signature, T>::type type;
};
template<typename Signature, typename T> struct push_front{
    typedef typename details::push_front_impl<Signature::parameters, Signature, T>::type type;
};
template<typename Signature> struct pop_back{
    typedef typename details::pop_back_impl<Signature::parameters, Signature>::parameter_type parameter_type;
    typedef typename details::pop_back_impl<Signature::parameters, Signature>::type type;
};
template<typename Signature> struct pop_front{
    typedef typename details::pop_front_impl<Signature::parameters, Signature>::parameter_type parameter_type;
    typedef typename details::pop_front_impl<Signature::parameters, Signature>::type type;
};


template<size_t N, typename Signature, typename T> struct get_or{
    typedef typename tmp::select<
        N < Signature::parameters,
        tmp::type<get<N, Signature> >,
        __
    >::type type;
};
"""

for i in [0...MAX_LENGTH]
    out """
        template<typename Signature>
        struct get<{0}, Signature>{
            typedef typename Signature::parameter{0}_type type;
        };
        """,
        i

out """
namespace details{
"""

for i in [0...MAX_LENGTH]
    out """
        template<typename S, typename T>
        struct push_back_impl<{0}, S, T>{
            typedef functions::signature<typename S::return_type{1}, T> type;
        };
        template<typename S, typename T>
        struct push_front_impl<{0}, S, T>{
            typedef functions::signature<typename S::return_type{1}, T> type;
        };
        template<typename S>
        struct pop_back_impl<{0}, S>{
            typedef typename S::parameter{0}_type parameter_type;
            typedef functions::signature<typename S::return_type{2}> type;
        };
        template<typename S>
        struct pop_front_impl<{0}, S>{
            typedef typename S::parameter0_type parameter_type;
            typedef functions::signature<typename S::return_type{3}> type;
        };
        """,
        i
        list [0...i], ", typename S::parameter{0}_type", ""
        list [0...i-1], ", typename S::parameter{0}_type", ""
        list [1...i], ", typename S::parameter{0}_type", ""

out """
};
"""

for i in [0...MAX_LENGTH]
    args = [0...MAX_LENGTH]
        .map (x)-> if x == i then "T" else "typename get_or<#{x}, Signature, __>::type"
        .join ", "

    out """
        template<typename Signature, typename T>
        struct set<{0}, Signature, T>{
            typedef functions::signature<
                typename Signature::return_type,
                {1}
            > type;
        };
        """,
        i
        args

out """
}} // namespace functionalcpp::signatures

#endif // FUNCTIONALCPP__SIGNATURE_UTILS__HPP
"""
