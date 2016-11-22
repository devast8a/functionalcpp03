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
template<typename Signature>
struct get<0, Signature>{
    typedef typename Signature::parameter0_type type;
};
template<typename Signature>
struct get<1, Signature>{
    typedef typename Signature::parameter1_type type;
};
template<typename Signature>
struct get<2, Signature>{
    typedef typename Signature::parameter2_type type;
};
template<typename Signature>
struct get<3, Signature>{
    typedef typename Signature::parameter3_type type;
};
template<typename Signature>
struct get<4, Signature>{
    typedef typename Signature::parameter4_type type;
};
template<typename Signature>
struct get<5, Signature>{
    typedef typename Signature::parameter5_type type;
};
template<typename Signature>
struct get<6, Signature>{
    typedef typename Signature::parameter6_type type;
};
template<typename Signature>
struct get<7, Signature>{
    typedef typename Signature::parameter7_type type;
};
template<typename Signature>
struct get<8, Signature>{
    typedef typename Signature::parameter8_type type;
};
template<typename Signature>
struct get<9, Signature>{
    typedef typename Signature::parameter9_type type;
};
template<typename Signature>
struct get<10, Signature>{
    typedef typename Signature::parameter10_type type;
};
template<typename Signature>
struct get<11, Signature>{
    typedef typename Signature::parameter11_type type;
};
template<typename Signature>
struct get<12, Signature>{
    typedef typename Signature::parameter12_type type;
};
template<typename Signature>
struct get<13, Signature>{
    typedef typename Signature::parameter13_type type;
};
template<typename Signature>
struct get<14, Signature>{
    typedef typename Signature::parameter14_type type;
};
template<typename Signature>
struct get<15, Signature>{
    typedef typename Signature::parameter15_type type;
};
namespace details{
template<typename S, typename T>
struct push_back_impl<0, S, T>{
    typedef functions::signature<typename S::return_type, T> type;
};
template<typename S, typename T>
struct push_front_impl<0, S, T>{
    typedef functions::signature<typename S::return_type, T> type;
};
template<typename S>
struct pop_back_impl<0, S>{
    typedef typename S::parameter0_type parameter_type;
    typedef functions::signature<typename S::return_type, typename S::parameter0_type> type;
};
template<typename S>
struct pop_front_impl<0, S>{
    typedef typename S::parameter0_type parameter_type;
    typedef functions::signature<typename S::return_type, typename S::parameter1_type> type;
};
template<typename S, typename T>
struct push_back_impl<1, S, T>{
    typedef functions::signature<typename S::return_type, typename S::parameter0_type, T> type;
};
template<typename S, typename T>
struct push_front_impl<1, S, T>{
    typedef functions::signature<typename S::return_type, typename S::parameter0_type, T> type;
};
template<typename S>
struct pop_back_impl<1, S>{
    typedef typename S::parameter1_type parameter_type;
    typedef functions::signature<typename S::return_type> type;
};
template<typename S>
struct pop_front_impl<1, S>{
    typedef typename S::parameter0_type parameter_type;
    typedef functions::signature<typename S::return_type> type;
};
template<typename S, typename T>
struct push_back_impl<2, S, T>{
    typedef functions::signature<typename S::return_type, typename S::parameter0_type, typename S::parameter1_type, T> type;
};
template<typename S, typename T>
struct push_front_impl<2, S, T>{
    typedef functions::signature<typename S::return_type, typename S::parameter0_type, typename S::parameter1_type, T> type;
};
template<typename S>
struct pop_back_impl<2, S>{
    typedef typename S::parameter2_type parameter_type;
    typedef functions::signature<typename S::return_type, typename S::parameter0_type> type;
};
template<typename S>
struct pop_front_impl<2, S>{
    typedef typename S::parameter0_type parameter_type;
    typedef functions::signature<typename S::return_type, typename S::parameter1_type> type;
};
template<typename S, typename T>
struct push_back_impl<3, S, T>{
    typedef functions::signature<typename S::return_type, typename S::parameter0_type, typename S::parameter1_type, typename S::parameter2_type, T> type;
};
template<typename S, typename T>
struct push_front_impl<3, S, T>{
    typedef functions::signature<typename S::return_type, typename S::parameter0_type, typename S::parameter1_type, typename S::parameter2_type, T> type;
};
template<typename S>
struct pop_back_impl<3, S>{
    typedef typename S::parameter3_type parameter_type;
    typedef functions::signature<typename S::return_type, typename S::parameter0_type, typename S::parameter1_type> type;
};
template<typename S>
struct pop_front_impl<3, S>{
    typedef typename S::parameter0_type parameter_type;
    typedef functions::signature<typename S::return_type, typename S::parameter1_type, typename S::parameter2_type> type;
};
template<typename S, typename T>
struct push_back_impl<4, S, T>{
    typedef functions::signature<typename S::return_type, typename S::parameter0_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type, T> type;
};
template<typename S, typename T>
struct push_front_impl<4, S, T>{
    typedef functions::signature<typename S::return_type, typename S::parameter0_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type, T> type;
};
template<typename S>
struct pop_back_impl<4, S>{
    typedef typename S::parameter4_type parameter_type;
    typedef functions::signature<typename S::return_type, typename S::parameter0_type, typename S::parameter1_type, typename S::parameter2_type> type;
};
template<typename S>
struct pop_front_impl<4, S>{
    typedef typename S::parameter0_type parameter_type;
    typedef functions::signature<typename S::return_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type> type;
};
template<typename S, typename T>
struct push_back_impl<5, S, T>{
    typedef functions::signature<typename S::return_type, typename S::parameter0_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type, typename S::parameter4_type, T> type;
};
template<typename S, typename T>
struct push_front_impl<5, S, T>{
    typedef functions::signature<typename S::return_type, typename S::parameter0_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type, typename S::parameter4_type, T> type;
};
template<typename S>
struct pop_back_impl<5, S>{
    typedef typename S::parameter5_type parameter_type;
    typedef functions::signature<typename S::return_type, typename S::parameter0_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type> type;
};
template<typename S>
struct pop_front_impl<5, S>{
    typedef typename S::parameter0_type parameter_type;
    typedef functions::signature<typename S::return_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type, typename S::parameter4_type> type;
};
template<typename S, typename T>
struct push_back_impl<6, S, T>{
    typedef functions::signature<typename S::return_type, typename S::parameter0_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type, typename S::parameter4_type, typename S::parameter5_type, T> type;
};
template<typename S, typename T>
struct push_front_impl<6, S, T>{
    typedef functions::signature<typename S::return_type, typename S::parameter0_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type, typename S::parameter4_type, typename S::parameter5_type, T> type;
};
template<typename S>
struct pop_back_impl<6, S>{
    typedef typename S::parameter6_type parameter_type;
    typedef functions::signature<typename S::return_type, typename S::parameter0_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type, typename S::parameter4_type> type;
};
template<typename S>
struct pop_front_impl<6, S>{
    typedef typename S::parameter0_type parameter_type;
    typedef functions::signature<typename S::return_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type, typename S::parameter4_type, typename S::parameter5_type> type;
};
template<typename S, typename T>
struct push_back_impl<7, S, T>{
    typedef functions::signature<typename S::return_type, typename S::parameter0_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type, typename S::parameter4_type, typename S::parameter5_type, typename S::parameter6_type, T> type;
};
template<typename S, typename T>
struct push_front_impl<7, S, T>{
    typedef functions::signature<typename S::return_type, typename S::parameter0_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type, typename S::parameter4_type, typename S::parameter5_type, typename S::parameter6_type, T> type;
};
template<typename S>
struct pop_back_impl<7, S>{
    typedef typename S::parameter7_type parameter_type;
    typedef functions::signature<typename S::return_type, typename S::parameter0_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type, typename S::parameter4_type, typename S::parameter5_type> type;
};
template<typename S>
struct pop_front_impl<7, S>{
    typedef typename S::parameter0_type parameter_type;
    typedef functions::signature<typename S::return_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type, typename S::parameter4_type, typename S::parameter5_type, typename S::parameter6_type> type;
};
template<typename S, typename T>
struct push_back_impl<8, S, T>{
    typedef functions::signature<typename S::return_type, typename S::parameter0_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type, typename S::parameter4_type, typename S::parameter5_type, typename S::parameter6_type, typename S::parameter7_type, T> type;
};
template<typename S, typename T>
struct push_front_impl<8, S, T>{
    typedef functions::signature<typename S::return_type, typename S::parameter0_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type, typename S::parameter4_type, typename S::parameter5_type, typename S::parameter6_type, typename S::parameter7_type, T> type;
};
template<typename S>
struct pop_back_impl<8, S>{
    typedef typename S::parameter8_type parameter_type;
    typedef functions::signature<typename S::return_type, typename S::parameter0_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type, typename S::parameter4_type, typename S::parameter5_type, typename S::parameter6_type> type;
};
template<typename S>
struct pop_front_impl<8, S>{
    typedef typename S::parameter0_type parameter_type;
    typedef functions::signature<typename S::return_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type, typename S::parameter4_type, typename S::parameter5_type, typename S::parameter6_type, typename S::parameter7_type> type;
};
template<typename S, typename T>
struct push_back_impl<9, S, T>{
    typedef functions::signature<typename S::return_type, typename S::parameter0_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type, typename S::parameter4_type, typename S::parameter5_type, typename S::parameter6_type, typename S::parameter7_type, typename S::parameter8_type, T> type;
};
template<typename S, typename T>
struct push_front_impl<9, S, T>{
    typedef functions::signature<typename S::return_type, typename S::parameter0_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type, typename S::parameter4_type, typename S::parameter5_type, typename S::parameter6_type, typename S::parameter7_type, typename S::parameter8_type, T> type;
};
template<typename S>
struct pop_back_impl<9, S>{
    typedef typename S::parameter9_type parameter_type;
    typedef functions::signature<typename S::return_type, typename S::parameter0_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type, typename S::parameter4_type, typename S::parameter5_type, typename S::parameter6_type, typename S::parameter7_type> type;
};
template<typename S>
struct pop_front_impl<9, S>{
    typedef typename S::parameter0_type parameter_type;
    typedef functions::signature<typename S::return_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type, typename S::parameter4_type, typename S::parameter5_type, typename S::parameter6_type, typename S::parameter7_type, typename S::parameter8_type> type;
};
template<typename S, typename T>
struct push_back_impl<10, S, T>{
    typedef functions::signature<typename S::return_type, typename S::parameter0_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type, typename S::parameter4_type, typename S::parameter5_type, typename S::parameter6_type, typename S::parameter7_type, typename S::parameter8_type, typename S::parameter9_type, T> type;
};
template<typename S, typename T>
struct push_front_impl<10, S, T>{
    typedef functions::signature<typename S::return_type, typename S::parameter0_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type, typename S::parameter4_type, typename S::parameter5_type, typename S::parameter6_type, typename S::parameter7_type, typename S::parameter8_type, typename S::parameter9_type, T> type;
};
template<typename S>
struct pop_back_impl<10, S>{
    typedef typename S::parameter10_type parameter_type;
    typedef functions::signature<typename S::return_type, typename S::parameter0_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type, typename S::parameter4_type, typename S::parameter5_type, typename S::parameter6_type, typename S::parameter7_type, typename S::parameter8_type> type;
};
template<typename S>
struct pop_front_impl<10, S>{
    typedef typename S::parameter0_type parameter_type;
    typedef functions::signature<typename S::return_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type, typename S::parameter4_type, typename S::parameter5_type, typename S::parameter6_type, typename S::parameter7_type, typename S::parameter8_type, typename S::parameter9_type> type;
};
template<typename S, typename T>
struct push_back_impl<11, S, T>{
    typedef functions::signature<typename S::return_type, typename S::parameter0_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type, typename S::parameter4_type, typename S::parameter5_type, typename S::parameter6_type, typename S::parameter7_type, typename S::parameter8_type, typename S::parameter9_type, typename S::parameter10_type, T> type;
};
template<typename S, typename T>
struct push_front_impl<11, S, T>{
    typedef functions::signature<typename S::return_type, typename S::parameter0_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type, typename S::parameter4_type, typename S::parameter5_type, typename S::parameter6_type, typename S::parameter7_type, typename S::parameter8_type, typename S::parameter9_type, typename S::parameter10_type, T> type;
};
template<typename S>
struct pop_back_impl<11, S>{
    typedef typename S::parameter11_type parameter_type;
    typedef functions::signature<typename S::return_type, typename S::parameter0_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type, typename S::parameter4_type, typename S::parameter5_type, typename S::parameter6_type, typename S::parameter7_type, typename S::parameter8_type, typename S::parameter9_type> type;
};
template<typename S>
struct pop_front_impl<11, S>{
    typedef typename S::parameter0_type parameter_type;
    typedef functions::signature<typename S::return_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type, typename S::parameter4_type, typename S::parameter5_type, typename S::parameter6_type, typename S::parameter7_type, typename S::parameter8_type, typename S::parameter9_type, typename S::parameter10_type> type;
};
template<typename S, typename T>
struct push_back_impl<12, S, T>{
    typedef functions::signature<typename S::return_type, typename S::parameter0_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type, typename S::parameter4_type, typename S::parameter5_type, typename S::parameter6_type, typename S::parameter7_type, typename S::parameter8_type, typename S::parameter9_type, typename S::parameter10_type, typename S::parameter11_type, T> type;
};
template<typename S, typename T>
struct push_front_impl<12, S, T>{
    typedef functions::signature<typename S::return_type, typename S::parameter0_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type, typename S::parameter4_type, typename S::parameter5_type, typename S::parameter6_type, typename S::parameter7_type, typename S::parameter8_type, typename S::parameter9_type, typename S::parameter10_type, typename S::parameter11_type, T> type;
};
template<typename S>
struct pop_back_impl<12, S>{
    typedef typename S::parameter12_type parameter_type;
    typedef functions::signature<typename S::return_type, typename S::parameter0_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type, typename S::parameter4_type, typename S::parameter5_type, typename S::parameter6_type, typename S::parameter7_type, typename S::parameter8_type, typename S::parameter9_type, typename S::parameter10_type> type;
};
template<typename S>
struct pop_front_impl<12, S>{
    typedef typename S::parameter0_type parameter_type;
    typedef functions::signature<typename S::return_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type, typename S::parameter4_type, typename S::parameter5_type, typename S::parameter6_type, typename S::parameter7_type, typename S::parameter8_type, typename S::parameter9_type, typename S::parameter10_type, typename S::parameter11_type> type;
};
template<typename S, typename T>
struct push_back_impl<13, S, T>{
    typedef functions::signature<typename S::return_type, typename S::parameter0_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type, typename S::parameter4_type, typename S::parameter5_type, typename S::parameter6_type, typename S::parameter7_type, typename S::parameter8_type, typename S::parameter9_type, typename S::parameter10_type, typename S::parameter11_type, typename S::parameter12_type, T> type;
};
template<typename S, typename T>
struct push_front_impl<13, S, T>{
    typedef functions::signature<typename S::return_type, typename S::parameter0_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type, typename S::parameter4_type, typename S::parameter5_type, typename S::parameter6_type, typename S::parameter7_type, typename S::parameter8_type, typename S::parameter9_type, typename S::parameter10_type, typename S::parameter11_type, typename S::parameter12_type, T> type;
};
template<typename S>
struct pop_back_impl<13, S>{
    typedef typename S::parameter13_type parameter_type;
    typedef functions::signature<typename S::return_type, typename S::parameter0_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type, typename S::parameter4_type, typename S::parameter5_type, typename S::parameter6_type, typename S::parameter7_type, typename S::parameter8_type, typename S::parameter9_type, typename S::parameter10_type, typename S::parameter11_type> type;
};
template<typename S>
struct pop_front_impl<13, S>{
    typedef typename S::parameter0_type parameter_type;
    typedef functions::signature<typename S::return_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type, typename S::parameter4_type, typename S::parameter5_type, typename S::parameter6_type, typename S::parameter7_type, typename S::parameter8_type, typename S::parameter9_type, typename S::parameter10_type, typename S::parameter11_type, typename S::parameter12_type> type;
};
template<typename S, typename T>
struct push_back_impl<14, S, T>{
    typedef functions::signature<typename S::return_type, typename S::parameter0_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type, typename S::parameter4_type, typename S::parameter5_type, typename S::parameter6_type, typename S::parameter7_type, typename S::parameter8_type, typename S::parameter9_type, typename S::parameter10_type, typename S::parameter11_type, typename S::parameter12_type, typename S::parameter13_type, T> type;
};
template<typename S, typename T>
struct push_front_impl<14, S, T>{
    typedef functions::signature<typename S::return_type, typename S::parameter0_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type, typename S::parameter4_type, typename S::parameter5_type, typename S::parameter6_type, typename S::parameter7_type, typename S::parameter8_type, typename S::parameter9_type, typename S::parameter10_type, typename S::parameter11_type, typename S::parameter12_type, typename S::parameter13_type, T> type;
};
template<typename S>
struct pop_back_impl<14, S>{
    typedef typename S::parameter14_type parameter_type;
    typedef functions::signature<typename S::return_type, typename S::parameter0_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type, typename S::parameter4_type, typename S::parameter5_type, typename S::parameter6_type, typename S::parameter7_type, typename S::parameter8_type, typename S::parameter9_type, typename S::parameter10_type, typename S::parameter11_type, typename S::parameter12_type> type;
};
template<typename S>
struct pop_front_impl<14, S>{
    typedef typename S::parameter0_type parameter_type;
    typedef functions::signature<typename S::return_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type, typename S::parameter4_type, typename S::parameter5_type, typename S::parameter6_type, typename S::parameter7_type, typename S::parameter8_type, typename S::parameter9_type, typename S::parameter10_type, typename S::parameter11_type, typename S::parameter12_type, typename S::parameter13_type> type;
};
template<typename S, typename T>
struct push_back_impl<15, S, T>{
    typedef functions::signature<typename S::return_type, typename S::parameter0_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type, typename S::parameter4_type, typename S::parameter5_type, typename S::parameter6_type, typename S::parameter7_type, typename S::parameter8_type, typename S::parameter9_type, typename S::parameter10_type, typename S::parameter11_type, typename S::parameter12_type, typename S::parameter13_type, typename S::parameter14_type, T> type;
};
template<typename S, typename T>
struct push_front_impl<15, S, T>{
    typedef functions::signature<typename S::return_type, typename S::parameter0_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type, typename S::parameter4_type, typename S::parameter5_type, typename S::parameter6_type, typename S::parameter7_type, typename S::parameter8_type, typename S::parameter9_type, typename S::parameter10_type, typename S::parameter11_type, typename S::parameter12_type, typename S::parameter13_type, typename S::parameter14_type, T> type;
};
template<typename S>
struct pop_back_impl<15, S>{
    typedef typename S::parameter15_type parameter_type;
    typedef functions::signature<typename S::return_type, typename S::parameter0_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type, typename S::parameter4_type, typename S::parameter5_type, typename S::parameter6_type, typename S::parameter7_type, typename S::parameter8_type, typename S::parameter9_type, typename S::parameter10_type, typename S::parameter11_type, typename S::parameter12_type, typename S::parameter13_type> type;
};
template<typename S>
struct pop_front_impl<15, S>{
    typedef typename S::parameter0_type parameter_type;
    typedef functions::signature<typename S::return_type, typename S::parameter1_type, typename S::parameter2_type, typename S::parameter3_type, typename S::parameter4_type, typename S::parameter5_type, typename S::parameter6_type, typename S::parameter7_type, typename S::parameter8_type, typename S::parameter9_type, typename S::parameter10_type, typename S::parameter11_type, typename S::parameter12_type, typename S::parameter13_type, typename S::parameter14_type> type;
};
};
template<typename Signature, typename T>
struct set<0, Signature, T>{
    typedef functions::signature<
        typename Signature::return_type,
        T, typename get_or<1, Signature, __>::type, typename get_or<2, Signature, __>::type, typename get_or<3, Signature, __>::type, typename get_or<4, Signature, __>::type, typename get_or<5, Signature, __>::type, typename get_or<6, Signature, __>::type, typename get_or<7, Signature, __>::type, typename get_or<8, Signature, __>::type, typename get_or<9, Signature, __>::type, typename get_or<10, Signature, __>::type, typename get_or<11, Signature, __>::type, typename get_or<12, Signature, __>::type, typename get_or<13, Signature, __>::type, typename get_or<14, Signature, __>::type, typename get_or<15, Signature, __>::type
    > type;
};
template<typename Signature, typename T>
struct set<1, Signature, T>{
    typedef functions::signature<
        typename Signature::return_type,
        typename get_or<0, Signature, __>::type, T, typename get_or<2, Signature, __>::type, typename get_or<3, Signature, __>::type, typename get_or<4, Signature, __>::type, typename get_or<5, Signature, __>::type, typename get_or<6, Signature, __>::type, typename get_or<7, Signature, __>::type, typename get_or<8, Signature, __>::type, typename get_or<9, Signature, __>::type, typename get_or<10, Signature, __>::type, typename get_or<11, Signature, __>::type, typename get_or<12, Signature, __>::type, typename get_or<13, Signature, __>::type, typename get_or<14, Signature, __>::type, typename get_or<15, Signature, __>::type
    > type;
};
template<typename Signature, typename T>
struct set<2, Signature, T>{
    typedef functions::signature<
        typename Signature::return_type,
        typename get_or<0, Signature, __>::type, typename get_or<1, Signature, __>::type, T, typename get_or<3, Signature, __>::type, typename get_or<4, Signature, __>::type, typename get_or<5, Signature, __>::type, typename get_or<6, Signature, __>::type, typename get_or<7, Signature, __>::type, typename get_or<8, Signature, __>::type, typename get_or<9, Signature, __>::type, typename get_or<10, Signature, __>::type, typename get_or<11, Signature, __>::type, typename get_or<12, Signature, __>::type, typename get_or<13, Signature, __>::type, typename get_or<14, Signature, __>::type, typename get_or<15, Signature, __>::type
    > type;
};
template<typename Signature, typename T>
struct set<3, Signature, T>{
    typedef functions::signature<
        typename Signature::return_type,
        typename get_or<0, Signature, __>::type, typename get_or<1, Signature, __>::type, typename get_or<2, Signature, __>::type, T, typename get_or<4, Signature, __>::type, typename get_or<5, Signature, __>::type, typename get_or<6, Signature, __>::type, typename get_or<7, Signature, __>::type, typename get_or<8, Signature, __>::type, typename get_or<9, Signature, __>::type, typename get_or<10, Signature, __>::type, typename get_or<11, Signature, __>::type, typename get_or<12, Signature, __>::type, typename get_or<13, Signature, __>::type, typename get_or<14, Signature, __>::type, typename get_or<15, Signature, __>::type
    > type;
};
template<typename Signature, typename T>
struct set<4, Signature, T>{
    typedef functions::signature<
        typename Signature::return_type,
        typename get_or<0, Signature, __>::type, typename get_or<1, Signature, __>::type, typename get_or<2, Signature, __>::type, typename get_or<3, Signature, __>::type, T, typename get_or<5, Signature, __>::type, typename get_or<6, Signature, __>::type, typename get_or<7, Signature, __>::type, typename get_or<8, Signature, __>::type, typename get_or<9, Signature, __>::type, typename get_or<10, Signature, __>::type, typename get_or<11, Signature, __>::type, typename get_or<12, Signature, __>::type, typename get_or<13, Signature, __>::type, typename get_or<14, Signature, __>::type, typename get_or<15, Signature, __>::type
    > type;
};
template<typename Signature, typename T>
struct set<5, Signature, T>{
    typedef functions::signature<
        typename Signature::return_type,
        typename get_or<0, Signature, __>::type, typename get_or<1, Signature, __>::type, typename get_or<2, Signature, __>::type, typename get_or<3, Signature, __>::type, typename get_or<4, Signature, __>::type, T, typename get_or<6, Signature, __>::type, typename get_or<7, Signature, __>::type, typename get_or<8, Signature, __>::type, typename get_or<9, Signature, __>::type, typename get_or<10, Signature, __>::type, typename get_or<11, Signature, __>::type, typename get_or<12, Signature, __>::type, typename get_or<13, Signature, __>::type, typename get_or<14, Signature, __>::type, typename get_or<15, Signature, __>::type
    > type;
};
template<typename Signature, typename T>
struct set<6, Signature, T>{
    typedef functions::signature<
        typename Signature::return_type,
        typename get_or<0, Signature, __>::type, typename get_or<1, Signature, __>::type, typename get_or<2, Signature, __>::type, typename get_or<3, Signature, __>::type, typename get_or<4, Signature, __>::type, typename get_or<5, Signature, __>::type, T, typename get_or<7, Signature, __>::type, typename get_or<8, Signature, __>::type, typename get_or<9, Signature, __>::type, typename get_or<10, Signature, __>::type, typename get_or<11, Signature, __>::type, typename get_or<12, Signature, __>::type, typename get_or<13, Signature, __>::type, typename get_or<14, Signature, __>::type, typename get_or<15, Signature, __>::type
    > type;
};
template<typename Signature, typename T>
struct set<7, Signature, T>{
    typedef functions::signature<
        typename Signature::return_type,
        typename get_or<0, Signature, __>::type, typename get_or<1, Signature, __>::type, typename get_or<2, Signature, __>::type, typename get_or<3, Signature, __>::type, typename get_or<4, Signature, __>::type, typename get_or<5, Signature, __>::type, typename get_or<6, Signature, __>::type, T, typename get_or<8, Signature, __>::type, typename get_or<9, Signature, __>::type, typename get_or<10, Signature, __>::type, typename get_or<11, Signature, __>::type, typename get_or<12, Signature, __>::type, typename get_or<13, Signature, __>::type, typename get_or<14, Signature, __>::type, typename get_or<15, Signature, __>::type
    > type;
};
template<typename Signature, typename T>
struct set<8, Signature, T>{
    typedef functions::signature<
        typename Signature::return_type,
        typename get_or<0, Signature, __>::type, typename get_or<1, Signature, __>::type, typename get_or<2, Signature, __>::type, typename get_or<3, Signature, __>::type, typename get_or<4, Signature, __>::type, typename get_or<5, Signature, __>::type, typename get_or<6, Signature, __>::type, typename get_or<7, Signature, __>::type, T, typename get_or<9, Signature, __>::type, typename get_or<10, Signature, __>::type, typename get_or<11, Signature, __>::type, typename get_or<12, Signature, __>::type, typename get_or<13, Signature, __>::type, typename get_or<14, Signature, __>::type, typename get_or<15, Signature, __>::type
    > type;
};
template<typename Signature, typename T>
struct set<9, Signature, T>{
    typedef functions::signature<
        typename Signature::return_type,
        typename get_or<0, Signature, __>::type, typename get_or<1, Signature, __>::type, typename get_or<2, Signature, __>::type, typename get_or<3, Signature, __>::type, typename get_or<4, Signature, __>::type, typename get_or<5, Signature, __>::type, typename get_or<6, Signature, __>::type, typename get_or<7, Signature, __>::type, typename get_or<8, Signature, __>::type, T, typename get_or<10, Signature, __>::type, typename get_or<11, Signature, __>::type, typename get_or<12, Signature, __>::type, typename get_or<13, Signature, __>::type, typename get_or<14, Signature, __>::type, typename get_or<15, Signature, __>::type
    > type;
};
template<typename Signature, typename T>
struct set<10, Signature, T>{
    typedef functions::signature<
        typename Signature::return_type,
        typename get_or<0, Signature, __>::type, typename get_or<1, Signature, __>::type, typename get_or<2, Signature, __>::type, typename get_or<3, Signature, __>::type, typename get_or<4, Signature, __>::type, typename get_or<5, Signature, __>::type, typename get_or<6, Signature, __>::type, typename get_or<7, Signature, __>::type, typename get_or<8, Signature, __>::type, typename get_or<9, Signature, __>::type, T, typename get_or<11, Signature, __>::type, typename get_or<12, Signature, __>::type, typename get_or<13, Signature, __>::type, typename get_or<14, Signature, __>::type, typename get_or<15, Signature, __>::type
    > type;
};
template<typename Signature, typename T>
struct set<11, Signature, T>{
    typedef functions::signature<
        typename Signature::return_type,
        typename get_or<0, Signature, __>::type, typename get_or<1, Signature, __>::type, typename get_or<2, Signature, __>::type, typename get_or<3, Signature, __>::type, typename get_or<4, Signature, __>::type, typename get_or<5, Signature, __>::type, typename get_or<6, Signature, __>::type, typename get_or<7, Signature, __>::type, typename get_or<8, Signature, __>::type, typename get_or<9, Signature, __>::type, typename get_or<10, Signature, __>::type, T, typename get_or<12, Signature, __>::type, typename get_or<13, Signature, __>::type, typename get_or<14, Signature, __>::type, typename get_or<15, Signature, __>::type
    > type;
};
template<typename Signature, typename T>
struct set<12, Signature, T>{
    typedef functions::signature<
        typename Signature::return_type,
        typename get_or<0, Signature, __>::type, typename get_or<1, Signature, __>::type, typename get_or<2, Signature, __>::type, typename get_or<3, Signature, __>::type, typename get_or<4, Signature, __>::type, typename get_or<5, Signature, __>::type, typename get_or<6, Signature, __>::type, typename get_or<7, Signature, __>::type, typename get_or<8, Signature, __>::type, typename get_or<9, Signature, __>::type, typename get_or<10, Signature, __>::type, typename get_or<11, Signature, __>::type, T, typename get_or<13, Signature, __>::type, typename get_or<14, Signature, __>::type, typename get_or<15, Signature, __>::type
    > type;
};
template<typename Signature, typename T>
struct set<13, Signature, T>{
    typedef functions::signature<
        typename Signature::return_type,
        typename get_or<0, Signature, __>::type, typename get_or<1, Signature, __>::type, typename get_or<2, Signature, __>::type, typename get_or<3, Signature, __>::type, typename get_or<4, Signature, __>::type, typename get_or<5, Signature, __>::type, typename get_or<6, Signature, __>::type, typename get_or<7, Signature, __>::type, typename get_or<8, Signature, __>::type, typename get_or<9, Signature, __>::type, typename get_or<10, Signature, __>::type, typename get_or<11, Signature, __>::type, typename get_or<12, Signature, __>::type, T, typename get_or<14, Signature, __>::type, typename get_or<15, Signature, __>::type
    > type;
};
template<typename Signature, typename T>
struct set<14, Signature, T>{
    typedef functions::signature<
        typename Signature::return_type,
        typename get_or<0, Signature, __>::type, typename get_or<1, Signature, __>::type, typename get_or<2, Signature, __>::type, typename get_or<3, Signature, __>::type, typename get_or<4, Signature, __>::type, typename get_or<5, Signature, __>::type, typename get_or<6, Signature, __>::type, typename get_or<7, Signature, __>::type, typename get_or<8, Signature, __>::type, typename get_or<9, Signature, __>::type, typename get_or<10, Signature, __>::type, typename get_or<11, Signature, __>::type, typename get_or<12, Signature, __>::type, typename get_or<13, Signature, __>::type, T, typename get_or<15, Signature, __>::type
    > type;
};
template<typename Signature, typename T>
struct set<15, Signature, T>{
    typedef functions::signature<
        typename Signature::return_type,
        typename get_or<0, Signature, __>::type, typename get_or<1, Signature, __>::type, typename get_or<2, Signature, __>::type, typename get_or<3, Signature, __>::type, typename get_or<4, Signature, __>::type, typename get_or<5, Signature, __>::type, typename get_or<6, Signature, __>::type, typename get_or<7, Signature, __>::type, typename get_or<8, Signature, __>::type, typename get_or<9, Signature, __>::type, typename get_or<10, Signature, __>::type, typename get_or<11, Signature, __>::type, typename get_or<12, Signature, __>::type, typename get_or<13, Signature, __>::type, typename get_or<14, Signature, __>::type, T
    > type;
};
}} // namespace functionalcpp::signatures

#endif // FUNCTIONALCPP__SIGNATURE_UTILS__HPP
