#ifndef FUNCTIONALCPP__FUNCTION_SIGNATURE__HPP
#define FUNCTIONALCPP__FUNCTION_SIGNATURE__HPP


namespace functionalcpp { namespace functions { namespace signatures {

template<typename TSig> struct pop_back;
template<typename TSig> struct pop_front;
template<typename TSig, typename TNext> struct push_back;
template<typename TSig, typename TNext> struct push_front;
template<typename TA, typename TB> struct concat;
template<int n, typename TSig> struct get{};

template<typename TSig> struct get<0, TSig>{
    typedef typename TSig::v0_type type;
    static type value(const TSig& fsig){return fsig.v0;}
};
template<typename TSig> struct get<1, TSig>{
    typedef typename TSig::v1_type type;
    static type value(const TSig& fsig){return fsig.v1;}
};
template<typename TSig> struct get<2, TSig>{
    typedef typename TSig::v2_type type;
    static type value(const TSig& fsig){return fsig.v2;}
};
template<typename TSig> struct get<3, TSig>{
    typedef typename TSig::v3_type type;
    static type value(const TSig& fsig){return fsig.v3;}
};
template<typename TSig> struct get<4, TSig>{
    typedef typename TSig::v4_type type;
    static type value(const TSig& fsig){return fsig.v4;}
};
template<typename TSig> struct get<5, TSig>{
    typedef typename TSig::v5_type type;
    static type value(const TSig& fsig){return fsig.v5;}
};
template<typename TSig> struct get<6, TSig>{
    typedef typename TSig::v6_type type;
    static type value(const TSig& fsig){return fsig.v6;}
};
template<typename TSig> struct get<7, TSig>{
    typedef typename TSig::v7_type type;
    static type value(const TSig& fsig){return fsig.v7;}
};
template<typename TSig> struct get<8, TSig>{
    typedef typename TSig::v8_type type;
    static type value(const TSig& fsig){return fsig.v8;}
};
template<typename TSig> struct get<9, TSig>{
    typedef typename TSig::v9_type type;
    static type value(const TSig& fsig){return fsig.v9;}
};
template<typename TSig> struct get<10, TSig>{
    typedef typename TSig::v10_type type;
    static type value(const TSig& fsig){return fsig.v10;}
};
template<typename TSig> struct get<11, TSig>{
    typedef typename TSig::v11_type type;
    static type value(const TSig& fsig){return fsig.v11;}
};
template<typename TSig> struct get<12, TSig>{
    typedef typename TSig::v12_type type;
    static type value(const TSig& fsig){return fsig.v12;}
};
template<typename TSig> struct get<13, TSig>{
    typedef typename TSig::v13_type type;
    static type value(const TSig& fsig){return fsig.v13;}
};
template<typename TSig> struct get<14, TSig>{
    typedef typename TSig::v14_type type;
    static type value(const TSig& fsig){return fsig.v14;}
};
template<typename TSig> struct get<15, TSig>{
    typedef typename TSig::v15_type type;
    static type value(const TSig& fsig){return fsig.v15;}
};
template<typename TSig> struct get<16, TSig>{
    typedef typename TSig::v16_type type;
    static type value(const TSig& fsig){return fsig.v16;}
};
// fsig ///////////////////////////////////////////////////////////////////////

template<typename TR> struct fsig0
{
    static const size_t parameters = 0;
    static const bool has_return_type = true;
    typedef TR return_type;
};
template<typename TR, typename T0> struct fsig1{
    static const size_t parameters = 1;
    static const bool has_return_type = true;
    typedef TR return_type;

    typedef T0 parameter0_type;
};
template<typename TR, typename T0, typename T1> struct fsig2{
    static const size_t parameters = 2;
    static const bool has_return_type = true;
    typedef TR return_type;

    typedef T0 parameter0_type;
    typedef T1 parameter1_type;
};
template<typename TR, typename T0, typename T1, typename T2> struct fsig3{
    static const size_t parameters = 3;
    static const bool has_return_type = true;
    typedef TR return_type;

    typedef T0 parameter0_type;
    typedef T1 parameter1_type;
    typedef T2 parameter2_type;
};
template<typename TR, typename T0, typename T1, typename T2, typename T3> struct fsig4{
    static const size_t parameters = 4;
    static const bool has_return_type = true;
    typedef TR return_type;

    typedef T0 parameter0_type;
    typedef T1 parameter1_type;
    typedef T2 parameter2_type;
    typedef T3 parameter3_type;
};
template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4> struct fsig5{
    static const size_t parameters = 5;
    static const bool has_return_type = true;
    typedef TR return_type;

    typedef T0 parameter0_type;
    typedef T1 parameter1_type;
    typedef T2 parameter2_type;
    typedef T3 parameter3_type;
    typedef T4 parameter4_type;
};
template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5> struct fsig6{
    static const size_t parameters = 6;
    static const bool has_return_type = true;
    typedef TR return_type;

    typedef T0 parameter0_type;
    typedef T1 parameter1_type;
    typedef T2 parameter2_type;
    typedef T3 parameter3_type;
    typedef T4 parameter4_type;
    typedef T5 parameter5_type;
};
template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> struct fsig7{
    static const size_t parameters = 7;
    static const bool has_return_type = true;
    typedef TR return_type;

    typedef T0 parameter0_type;
    typedef T1 parameter1_type;
    typedef T2 parameter2_type;
    typedef T3 parameter3_type;
    typedef T4 parameter4_type;
    typedef T5 parameter5_type;
    typedef T6 parameter6_type;
};
template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> struct fsig8{
    static const size_t parameters = 8;
    static const bool has_return_type = true;
    typedef TR return_type;

    typedef T0 parameter0_type;
    typedef T1 parameter1_type;
    typedef T2 parameter2_type;
    typedef T3 parameter3_type;
    typedef T4 parameter4_type;
    typedef T5 parameter5_type;
    typedef T6 parameter6_type;
    typedef T7 parameter7_type;
};
template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8> struct fsig9{
    static const size_t parameters = 9;
    static const bool has_return_type = true;
    typedef TR return_type;

    typedef T0 parameter0_type;
    typedef T1 parameter1_type;
    typedef T2 parameter2_type;
    typedef T3 parameter3_type;
    typedef T4 parameter4_type;
    typedef T5 parameter5_type;
    typedef T6 parameter6_type;
    typedef T7 parameter7_type;
    typedef T8 parameter8_type;
};
template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9> struct fsig10{
    static const size_t parameters = 10;
    static const bool has_return_type = true;
    typedef TR return_type;

    typedef T0 parameter0_type;
    typedef T1 parameter1_type;
    typedef T2 parameter2_type;
    typedef T3 parameter3_type;
    typedef T4 parameter4_type;
    typedef T5 parameter5_type;
    typedef T6 parameter6_type;
    typedef T7 parameter7_type;
    typedef T8 parameter8_type;
    typedef T9 parameter9_type;
};
template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10> struct fsig11{
    static const size_t parameters = 11;
    static const bool has_return_type = true;
    typedef TR return_type;

    typedef T0 parameter0_type;
    typedef T1 parameter1_type;
    typedef T2 parameter2_type;
    typedef T3 parameter3_type;
    typedef T4 parameter4_type;
    typedef T5 parameter5_type;
    typedef T6 parameter6_type;
    typedef T7 parameter7_type;
    typedef T8 parameter8_type;
    typedef T9 parameter9_type;
    typedef T10 parameter10_type;
};
template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11> struct fsig12{
    static const size_t parameters = 12;
    static const bool has_return_type = true;
    typedef TR return_type;

    typedef T0 parameter0_type;
    typedef T1 parameter1_type;
    typedef T2 parameter2_type;
    typedef T3 parameter3_type;
    typedef T4 parameter4_type;
    typedef T5 parameter5_type;
    typedef T6 parameter6_type;
    typedef T7 parameter7_type;
    typedef T8 parameter8_type;
    typedef T9 parameter9_type;
    typedef T10 parameter10_type;
    typedef T11 parameter11_type;
};
template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12> struct fsig13{
    static const size_t parameters = 13;
    static const bool has_return_type = true;
    typedef TR return_type;

    typedef T0 parameter0_type;
    typedef T1 parameter1_type;
    typedef T2 parameter2_type;
    typedef T3 parameter3_type;
    typedef T4 parameter4_type;
    typedef T5 parameter5_type;
    typedef T6 parameter6_type;
    typedef T7 parameter7_type;
    typedef T8 parameter8_type;
    typedef T9 parameter9_type;
    typedef T10 parameter10_type;
    typedef T11 parameter11_type;
    typedef T12 parameter12_type;
};
template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13> struct fsig14{
    static const size_t parameters = 14;
    static const bool has_return_type = true;
    typedef TR return_type;

    typedef T0 parameter0_type;
    typedef T1 parameter1_type;
    typedef T2 parameter2_type;
    typedef T3 parameter3_type;
    typedef T4 parameter4_type;
    typedef T5 parameter5_type;
    typedef T6 parameter6_type;
    typedef T7 parameter7_type;
    typedef T8 parameter8_type;
    typedef T9 parameter9_type;
    typedef T10 parameter10_type;
    typedef T11 parameter11_type;
    typedef T12 parameter12_type;
    typedef T13 parameter13_type;
};
template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14> struct fsig15{
    static const size_t parameters = 15;
    static const bool has_return_type = true;
    typedef TR return_type;

    typedef T0 parameter0_type;
    typedef T1 parameter1_type;
    typedef T2 parameter2_type;
    typedef T3 parameter3_type;
    typedef T4 parameter4_type;
    typedef T5 parameter5_type;
    typedef T6 parameter6_type;
    typedef T7 parameter7_type;
    typedef T8 parameter8_type;
    typedef T9 parameter9_type;
    typedef T10 parameter10_type;
    typedef T11 parameter11_type;
    typedef T12 parameter12_type;
    typedef T13 parameter13_type;
    typedef T14 parameter14_type;
};
template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15> struct fsig16{
    static const size_t parameters = 16;
    static const bool has_return_type = true;
    typedef TR return_type;

    typedef T0 parameter0_type;
    typedef T1 parameter1_type;
    typedef T2 parameter2_type;
    typedef T3 parameter3_type;
    typedef T4 parameter4_type;
    typedef T5 parameter5_type;
    typedef T6 parameter6_type;
    typedef T7 parameter7_type;
    typedef T8 parameter8_type;
    typedef T9 parameter9_type;
    typedef T10 parameter10_type;
    typedef T11 parameter11_type;
    typedef T12 parameter12_type;
    typedef T13 parameter13_type;
    typedef T14 parameter14_type;
    typedef T15 parameter15_type;
};

namespace details {

// Pop Back ////////////////////////////////////////////////////////////////////

template<typename TSig, size_t size> struct d_pop_back{};

template<typename TSig> struct d_pop_back<TSig, 1>{
    typedef typename TSig::parameter0_type element_type;
    typedef fsig0<typename TSig::return_type> type;
};
template<typename TSig> struct d_pop_back<TSig, 2>{
    typedef typename TSig::parameter1_type element_type;
    typedef fsig1<typename TSig::return_type, typename TSig::parameter0_type> type;
};
template<typename TSig> struct d_pop_back<TSig, 3>{
    typedef typename TSig::parameter2_type element_type;
    typedef fsig2<typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type> type;
};
template<typename TSig> struct d_pop_back<TSig, 4>{
    typedef typename TSig::parameter3_type element_type;
    typedef fsig3<typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type> type;
};
template<typename TSig> struct d_pop_back<TSig, 5>{
    typedef typename TSig::parameter4_type element_type;
    typedef fsig4<typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type> type;
};
template<typename TSig> struct d_pop_back<TSig, 6>{
    typedef typename TSig::parameter5_type element_type;
    typedef fsig5<typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type> type;
};
template<typename TSig> struct d_pop_back<TSig, 7>{
    typedef typename TSig::parameter6_type element_type;
    typedef fsig6<typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type> type;
};
template<typename TSig> struct d_pop_back<TSig, 8>{
    typedef typename TSig::parameter7_type element_type;
    typedef fsig7<typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type> type;
};
template<typename TSig> struct d_pop_back<TSig, 9>{
    typedef typename TSig::parameter8_type element_type;
    typedef fsig8<typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type, typename TSig::parameter7_type> type;
};
template<typename TSig> struct d_pop_back<TSig, 10>{
    typedef typename TSig::parameter9_type element_type;
    typedef fsig9<typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type, typename TSig::parameter7_type, typename TSig::parameter8_type> type;
};
template<typename TSig> struct d_pop_back<TSig, 11>{
    typedef typename TSig::parameter10_type element_type;
    typedef fsig10<typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type, typename TSig::parameter7_type, typename TSig::parameter8_type, typename TSig::parameter9_type> type;
};
template<typename TSig> struct d_pop_back<TSig, 12>{
    typedef typename TSig::parameter11_type element_type;
    typedef fsig11<typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type, typename TSig::parameter7_type, typename TSig::parameter8_type, typename TSig::parameter9_type, typename TSig::parameter10_type> type;
};
template<typename TSig> struct d_pop_back<TSig, 13>{
    typedef typename TSig::parameter12_type element_type;
    typedef fsig12<typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type, typename TSig::parameter7_type, typename TSig::parameter8_type, typename TSig::parameter9_type, typename TSig::parameter10_type, typename TSig::parameter11_type> type;
};
template<typename TSig> struct d_pop_back<TSig, 14>{
    typedef typename TSig::parameter13_type element_type;
    typedef fsig13<typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type, typename TSig::parameter7_type, typename TSig::parameter8_type, typename TSig::parameter9_type, typename TSig::parameter10_type, typename TSig::parameter11_type, typename TSig::parameter12_type> type;
};
template<typename TSig> struct d_pop_back<TSig, 15>{
    typedef typename TSig::parameter14_type element_type;
    typedef fsig14<typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type, typename TSig::parameter7_type, typename TSig::parameter8_type, typename TSig::parameter9_type, typename TSig::parameter10_type, typename TSig::parameter11_type, typename TSig::parameter12_type, typename TSig::parameter13_type> type;
};
template<typename TSig> struct d_pop_back<TSig, 16>{
    typedef typename TSig::parameter15_type element_type;
    typedef fsig15<typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type, typename TSig::parameter7_type, typename TSig::parameter8_type, typename TSig::parameter9_type, typename TSig::parameter10_type, typename TSig::parameter11_type, typename TSig::parameter12_type, typename TSig::parameter13_type, typename TSig::parameter14_type> type;
};
// Pop Front ///////////////////////////////////////////////////////////////////
template<typename TSig, size_t size> struct d_pop_front{};

template<typename TSig> struct d_pop_front<TSig, 1>{
    typedef typename TSig::parameter0_type element_type;
    typedef fsig0<typename TSig::return_type> type;
};

template<typename TSig> struct d_pop_front<TSig, 2>{
    typedef typename TSig::parameter0_type element_type;
    typedef fsig1<typename TSig::return_type, typename TSig::parameter1_type> type;
};
template<typename TSig> struct d_pop_front<TSig, 3>{
    typedef typename TSig::parameter0_type element_type;
    typedef fsig2<typename TSig::return_type, typename TSig::parameter1_type, typename TSig::parameter2_type> type;
};
template<typename TSig> struct d_pop_front<TSig, 4>{
    typedef typename TSig::parameter0_type element_type;
    typedef fsig3<typename TSig::return_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type> type;
};
template<typename TSig> struct d_pop_front<TSig, 5>{
    typedef typename TSig::parameter0_type element_type;
    typedef fsig4<typename TSig::return_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type> type;
};
template<typename TSig> struct d_pop_front<TSig, 6>{
    typedef typename TSig::parameter0_type element_type;
    typedef fsig5<typename TSig::return_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type> type;
};
template<typename TSig> struct d_pop_front<TSig, 7>{
    typedef typename TSig::parameter0_type element_type;
    typedef fsig6<typename TSig::return_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type> type;
};
template<typename TSig> struct d_pop_front<TSig, 8>{
    typedef typename TSig::parameter0_type element_type;
    typedef fsig7<typename TSig::return_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type, typename TSig::parameter7_type> type;
};
template<typename TSig> struct d_pop_front<TSig, 9>{
    typedef typename TSig::parameter0_type element_type;
    typedef fsig8<typename TSig::return_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type, typename TSig::parameter7_type, typename TSig::parameter8_type> type;
};
template<typename TSig> struct d_pop_front<TSig, 10>{
    typedef typename TSig::parameter0_type element_type;
    typedef fsig9<typename TSig::return_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type, typename TSig::parameter7_type, typename TSig::parameter8_type, typename TSig::parameter9_type> type;
};
template<typename TSig> struct d_pop_front<TSig, 11>{
    typedef typename TSig::parameter0_type element_type;
    typedef fsig10<typename TSig::return_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type, typename TSig::parameter7_type, typename TSig::parameter8_type, typename TSig::parameter9_type, typename TSig::parameter10_type> type;
};
template<typename TSig> struct d_pop_front<TSig, 12>{
    typedef typename TSig::parameter0_type element_type;
    typedef fsig11<typename TSig::return_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type, typename TSig::parameter7_type, typename TSig::parameter8_type, typename TSig::parameter9_type, typename TSig::parameter10_type, typename TSig::parameter11_type> type;
};
template<typename TSig> struct d_pop_front<TSig, 13>{
    typedef typename TSig::parameter0_type element_type;
    typedef fsig12<typename TSig::return_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type, typename TSig::parameter7_type, typename TSig::parameter8_type, typename TSig::parameter9_type, typename TSig::parameter10_type, typename TSig::parameter11_type, typename TSig::parameter12_type> type;
};
template<typename TSig> struct d_pop_front<TSig, 14>{
    typedef typename TSig::parameter0_type element_type;
    typedef fsig13<typename TSig::return_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type, typename TSig::parameter7_type, typename TSig::parameter8_type, typename TSig::parameter9_type, typename TSig::parameter10_type, typename TSig::parameter11_type, typename TSig::parameter12_type, typename TSig::parameter13_type> type;
};
template<typename TSig> struct d_pop_front<TSig, 15>{
    typedef typename TSig::parameter0_type element_type;
    typedef fsig14<typename TSig::return_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type, typename TSig::parameter7_type, typename TSig::parameter8_type, typename TSig::parameter9_type, typename TSig::parameter10_type, typename TSig::parameter11_type, typename TSig::parameter12_type, typename TSig::parameter13_type, typename TSig::parameter14_type> type;
};
template<typename TSig> struct d_pop_front<TSig, 16>{
    typedef typename TSig::parameter0_type element_type;
    typedef fsig15<typename TSig::return_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type, typename TSig::parameter7_type, typename TSig::parameter8_type, typename TSig::parameter9_type, typename TSig::parameter10_type, typename TSig::parameter11_type, typename TSig::parameter12_type, typename TSig::parameter13_type, typename TSig::parameter14_type, typename TSig::parameter15_type> type;
};
// Push Back ///////////////////////////////////////////////////////////////////
template<typename TSig, typename TNext, size_t size> struct d_push_back{};

template<typename TSig, typename TNext> struct d_push_back<TSig, TNext, 0>{
    typedef fsig1<typename TSig::return_type, TNext> type;
};
template<typename TSig, typename TNext> struct d_push_back<TSig, TNext, 1>{
    typedef fsig2<typename TSig::return_type, typename TSig::parameter0_type, TNext> type;
};
template<typename TSig, typename TNext> struct d_push_back<TSig, TNext, 2>{
    typedef fsig3<typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, TNext> type;
};
template<typename TSig, typename TNext> struct d_push_back<TSig, TNext, 3>{
    typedef fsig4<typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, TNext> type;
};
template<typename TSig, typename TNext> struct d_push_back<TSig, TNext, 4>{
    typedef fsig5<typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, TNext> type;
};
template<typename TSig, typename TNext> struct d_push_back<TSig, TNext, 5>{
    typedef fsig6<typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, TNext> type;
};
template<typename TSig, typename TNext> struct d_push_back<TSig, TNext, 6>{
    typedef fsig7<typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, TNext> type;
};
template<typename TSig, typename TNext> struct d_push_back<TSig, TNext, 7>{
    typedef fsig8<typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type, TNext> type;
};
template<typename TSig, typename TNext> struct d_push_back<TSig, TNext, 8>{
    typedef fsig9<typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type, typename TSig::parameter7_type, TNext> type;
};
template<typename TSig, typename TNext> struct d_push_back<TSig, TNext, 9>{
    typedef fsig10<typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type, typename TSig::parameter7_type, typename TSig::parameter8_type, TNext> type;
};
template<typename TSig, typename TNext> struct d_push_back<TSig, TNext, 10>{
    typedef fsig11<typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type, typename TSig::parameter7_type, typename TSig::parameter8_type, typename TSig::parameter9_type, TNext> type;
};
template<typename TSig, typename TNext> struct d_push_back<TSig, TNext, 11>{
    typedef fsig12<typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type, typename TSig::parameter7_type, typename TSig::parameter8_type, typename TSig::parameter9_type, typename TSig::parameter10_type, TNext> type;
};
template<typename TSig, typename TNext> struct d_push_back<TSig, TNext, 12>{
    typedef fsig13<typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type, typename TSig::parameter7_type, typename TSig::parameter8_type, typename TSig::parameter9_type, typename TSig::parameter10_type, typename TSig::parameter11_type, TNext> type;
};
template<typename TSig, typename TNext> struct d_push_back<TSig, TNext, 13>{
    typedef fsig14<typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type, typename TSig::parameter7_type, typename TSig::parameter8_type, typename TSig::parameter9_type, typename TSig::parameter10_type, typename TSig::parameter11_type, typename TSig::parameter12_type, TNext> type;
};
template<typename TSig, typename TNext> struct d_push_back<TSig, TNext, 14>{
    typedef fsig15<typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type, typename TSig::parameter7_type, typename TSig::parameter8_type, typename TSig::parameter9_type, typename TSig::parameter10_type, typename TSig::parameter11_type, typename TSig::parameter12_type, typename TSig::parameter13_type, TNext> type;
};
template<typename TSig, typename TNext> struct d_push_back<TSig, TNext, 15>{
    typedef fsig16<typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type, typename TSig::parameter7_type, typename TSig::parameter8_type, typename TSig::parameter9_type, typename TSig::parameter10_type, typename TSig::parameter11_type, typename TSig::parameter12_type, typename TSig::parameter13_type, typename TSig::parameter14_type, TNext> type;
};
// Push Front //////////////////////////////////////////////////////////////////
template<typename TSig, typename TNext, size_t size> struct d_push_front{};

template<typename TSig, typename TNext> struct d_push_front<TSig, TNext, 0>{
    typedef fsig1<typename TSig::return_type, TNext> type;
};
template<typename TSig, typename TNext> struct d_push_front<TSig, TNext, 1>{
    typedef fsig2<typename TSig::return_type, TNext, typename TSig::v0_type> type;
};
template<typename TSig, typename TNext> struct d_push_front<TSig, TNext, 2>{
    typedef fsig3<typename TSig::return_type, TNext, typename TSig::v0_type, typename TSig::v1_type> type;
};
template<typename TSig, typename TNext> struct d_push_front<TSig, TNext, 3>{
    typedef fsig4<typename TSig::return_type, TNext, typename TSig::v0_type, typename TSig::v1_type, typename TSig::v2_type> type;
};
template<typename TSig, typename TNext> struct d_push_front<TSig, TNext, 4>{
    typedef fsig5<typename TSig::return_type, TNext, typename TSig::v0_type, typename TSig::v1_type, typename TSig::v2_type, typename TSig::v3_type> type;
};
template<typename TSig, typename TNext> struct d_push_front<TSig, TNext, 5>{
    typedef fsig6<typename TSig::return_type, TNext, typename TSig::v0_type, typename TSig::v1_type, typename TSig::v2_type, typename TSig::v3_type, typename TSig::v4_type> type;
};
template<typename TSig, typename TNext> struct d_push_front<TSig, TNext, 6>{
    typedef fsig7<typename TSig::return_type, TNext, typename TSig::v0_type, typename TSig::v1_type, typename TSig::v2_type, typename TSig::v3_type, typename TSig::v4_type, typename TSig::v5_type> type;
};
template<typename TSig, typename TNext> struct d_push_front<TSig, TNext, 7>{
    typedef fsig8<typename TSig::return_type, TNext, typename TSig::v0_type, typename TSig::v1_type, typename TSig::v2_type, typename TSig::v3_type, typename TSig::v4_type, typename TSig::v5_type, typename TSig::v6_type> type;
};
template<typename TSig, typename TNext> struct d_push_front<TSig, TNext, 8>{
    typedef fsig9<typename TSig::return_type, TNext, typename TSig::v0_type, typename TSig::v1_type, typename TSig::v2_type, typename TSig::v3_type, typename TSig::v4_type, typename TSig::v5_type, typename TSig::v6_type, typename TSig::v7_type> type;
};
template<typename TSig, typename TNext> struct d_push_front<TSig, TNext, 9>{
    typedef fsig10<typename TSig::return_type, TNext, typename TSig::v0_type, typename TSig::v1_type, typename TSig::v2_type, typename TSig::v3_type, typename TSig::v4_type, typename TSig::v5_type, typename TSig::v6_type, typename TSig::v7_type, typename TSig::v8_type> type;
};
template<typename TSig, typename TNext> struct d_push_front<TSig, TNext, 10>{
    typedef fsig11<typename TSig::return_type, TNext, typename TSig::v0_type, typename TSig::v1_type, typename TSig::v2_type, typename TSig::v3_type, typename TSig::v4_type, typename TSig::v5_type, typename TSig::v6_type, typename TSig::v7_type, typename TSig::v8_type, typename TSig::v9_type> type;
};
template<typename TSig, typename TNext> struct d_push_front<TSig, TNext, 11>{
    typedef fsig12<typename TSig::return_type, TNext, typename TSig::v0_type, typename TSig::v1_type, typename TSig::v2_type, typename TSig::v3_type, typename TSig::v4_type, typename TSig::v5_type, typename TSig::v6_type, typename TSig::v7_type, typename TSig::v8_type, typename TSig::v9_type, typename TSig::v10_type> type;
};
template<typename TSig, typename TNext> struct d_push_front<TSig, TNext, 12>{
    typedef fsig13<typename TSig::return_type, TNext, typename TSig::v0_type, typename TSig::v1_type, typename TSig::v2_type, typename TSig::v3_type, typename TSig::v4_type, typename TSig::v5_type, typename TSig::v6_type, typename TSig::v7_type, typename TSig::v8_type, typename TSig::v9_type, typename TSig::v10_type, typename TSig::v11_type> type;
};
template<typename TSig, typename TNext> struct d_push_front<TSig, TNext, 13>{
    typedef fsig14<typename TSig::return_type, TNext, typename TSig::v0_type, typename TSig::v1_type, typename TSig::v2_type, typename TSig::v3_type, typename TSig::v4_type, typename TSig::v5_type, typename TSig::v6_type, typename TSig::v7_type, typename TSig::v8_type, typename TSig::v9_type, typename TSig::v10_type, typename TSig::v11_type, typename TSig::v12_type> type;
};
template<typename TSig, typename TNext> struct d_push_front<TSig, TNext, 14>{
    typedef fsig15<typename TSig::return_type, TNext, typename TSig::v0_type, typename TSig::v1_type, typename TSig::v2_type, typename TSig::v3_type, typename TSig::v4_type, typename TSig::v5_type, typename TSig::v6_type, typename TSig::v7_type, typename TSig::v8_type, typename TSig::v9_type, typename TSig::v10_type, typename TSig::v11_type, typename TSig::v12_type, typename TSig::v13_type> type;
};
template<typename TSig, typename TNext> struct d_push_front<TSig, TNext, 15>{
    typedef fsig16<typename TSig::return_type, TNext, typename TSig::v0_type, typename TSig::v1_type, typename TSig::v2_type, typename TSig::v3_type, typename TSig::v4_type, typename TSig::v5_type, typename TSig::v6_type, typename TSig::v7_type, typename TSig::v8_type, typename TSig::v9_type, typename TSig::v10_type, typename TSig::v11_type, typename TSig::v12_type, typename TSig::v13_type, typename TSig::v14_type> type;
};

// Concat //////////////////////////////////////////////////////////////////////

// Concate TA with TB by recursing over TA
template<typename TA, typename TB, size_t TASize> struct d_concat_A{
    typedef typename pop_back<TA>::element_type next;
    typedef typename pop_back<TA>::type left;
    typedef typename push_front<TB, next>::type right;

    typedef typename d_concat_A<left, right, left::parameters>::type type;
};

// Base case, it's 1 because d_concat checks for 0s
template<typename TA, typename TB> struct d_concat_A<TA, TB, 1>{
    typedef typename pop_back<TA>::element_type next;
    typedef typename push_front<TB, next>::type right;

    typedef right type;
};

// Concate TA with TB by recursiing over TB
template<typename TA, typename TB, size_t TBSize> struct d_concat_B{
    typedef typename pop_front<TB>::element_type next;
    typedef typename push_back<TA, next>::type left;
    typedef typename pop_front<TB>::type right;

    typedef typename d_concat_B<left, right, right::parameters>::type type;
};

// Base case, it's 1 because d_concat checks for 0s
template<typename TA, typename TB> struct d_concat_B<TA, TB, 1>{
    typedef typename pop_front<TB>::element_type next;
    typedef typename push_back<TA, next>::type left;

    typedef left type;
};

// Select the shortest of TA and TB and recurse using that
template<typename TA, size_t TASize, typename TB, size_t TBSize, bool IterateA> struct d_concat_direction{
    typedef typename d_concat_A<TA, TB, TASize>::type type;
};
template<typename TA, size_t TASize, typename TB, size_t TBSize> struct d_concat_direction<TA, TASize, TB, TBSize, false>{
    typedef typename d_concat_B<TA, TB, TBSize>::type type;
};

// Just used to handle zero sized fsigs
template<typename TA, size_t TASize, typename TB, size_t TBSize> struct d_concat{
    typedef typename d_concat_direction<TA, TASize, TB, TBSize, (TASize < TBSize)>::type type;
};
template<typename TA, typename TB, size_t TBSize> struct d_concat<TA, 0, TB, TBSize>{
    typedef TB type;
};
template<typename TA, size_t TASize, typename TB> struct d_concat<TA, TASize, TB, 0>{
    typedef TA type;
};
template<typename TA, typename TB> struct d_concat<TA, 0, TB, 0>{
    // doesn't matter which we choose
    typedef TA type;
};

} // namespace details

template<typename TA, typename TB> struct concat : details::d_concat<TA, TA::parameters, TB, TB::parameters>{};
template<typename TSig> struct pop_back : details::d_pop_back<TSig, TSig::parameters>{};
template<typename TSig> struct pop_front : details::d_pop_front<TSig, TSig::parameters>{};
template<typename TSig, typename TNext> struct push_back : details::d_push_back<TSig, TNext, TSig::parameters>{};
template<typename TSig, typename TNext> struct push_front : details::d_push_front<TSig, TNext, TSig::parameters>{};

}}} // namespace functionalcpp::functions::signatures

#endif // FUNCTIONALCPP__FUNCTION_SIGNATURE__HPP
