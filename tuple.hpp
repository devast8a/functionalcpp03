#ifndef FUNCTIONALCPP__TUPLE__HPP
#define FUNCTIONALCPP__TUPLE__HPP


namespace functionalcpp { namespace tuples {

template<typename TTuple> struct pop_back;
template<typename TTuple> struct pop_front;
template<typename TTuple, typename TNext> struct push_back;
template<typename TTuple, typename TNext> struct push_front;
template<typename TA, typename TB> struct concat;
template<int n, typename TTuple> struct get{};

template<typename TTuple> struct get<0, TTuple>{
    typedef typename TTuple::v0_type type;
    static type value(const TTuple& tuple){return tuple.v0;}
};
template<typename TTuple> struct get<1, TTuple>{
    typedef typename TTuple::v1_type type;
    static type value(const TTuple& tuple){return tuple.v1;}
};
template<typename TTuple> struct get<2, TTuple>{
    typedef typename TTuple::v2_type type;
    static type value(const TTuple& tuple){return tuple.v2;}
};
template<typename TTuple> struct get<3, TTuple>{
    typedef typename TTuple::v3_type type;
    static type value(const TTuple& tuple){return tuple.v3;}
};
template<typename TTuple> struct get<4, TTuple>{
    typedef typename TTuple::v4_type type;
    static type value(const TTuple& tuple){return tuple.v4;}
};
template<typename TTuple> struct get<5, TTuple>{
    typedef typename TTuple::v5_type type;
    static type value(const TTuple& tuple){return tuple.v5;}
};
template<typename TTuple> struct get<6, TTuple>{
    typedef typename TTuple::v6_type type;
    static type value(const TTuple& tuple){return tuple.v6;}
};
template<typename TTuple> struct get<7, TTuple>{
    typedef typename TTuple::v7_type type;
    static type value(const TTuple& tuple){return tuple.v7;}
};
template<typename TTuple> struct get<8, TTuple>{
    typedef typename TTuple::v8_type type;
    static type value(const TTuple& tuple){return tuple.v8;}
};
template<typename TTuple> struct get<9, TTuple>{
    typedef typename TTuple::v9_type type;
    static type value(const TTuple& tuple){return tuple.v9;}
};
template<typename TTuple> struct get<10, TTuple>{
    typedef typename TTuple::v10_type type;
    static type value(const TTuple& tuple){return tuple.v10;}
};
template<typename TTuple> struct get<11, TTuple>{
    typedef typename TTuple::v11_type type;
    static type value(const TTuple& tuple){return tuple.v11;}
};
template<typename TTuple> struct get<12, TTuple>{
    typedef typename TTuple::v12_type type;
    static type value(const TTuple& tuple){return tuple.v12;}
};
template<typename TTuple> struct get<13, TTuple>{
    typedef typename TTuple::v13_type type;
    static type value(const TTuple& tuple){return tuple.v13;}
};
template<typename TTuple> struct get<14, TTuple>{
    typedef typename TTuple::v14_type type;
    static type value(const TTuple& tuple){return tuple.v14;}
};
template<typename TTuple> struct get<15, TTuple>{
    typedef typename TTuple::v15_type type;
    static type value(const TTuple& tuple){return tuple.v15;}
};
template<typename TTuple> struct get<16, TTuple>{
    typedef typename TTuple::v16_type type;
    static type value(const TTuple& tuple){return tuple.v16;}
};
// Tuple ///////////////////////////////////////////////////////////////////////

struct tuple0
{
    static const size_t length = 0;
};
template<typename T0> struct tuple1{
    static const size_t length = 1;

    typedef T0 v0_type; const T0 v0;

    tuple1(const T0 v0) : v0(v0){}
};
template<typename T0, typename T1> struct tuple2{
    static const size_t length = 2;

    typedef T0 v0_type; const T0 v0;
    typedef T1 v1_type; const T1 v1;

    tuple2(const T0 v0, const T1 v1) : v0(v0), v1(v1){}
};
template<typename T0, typename T1, typename T2> struct tuple3{
    static const size_t length = 3;

    typedef T0 v0_type; const T0 v0;
    typedef T1 v1_type; const T1 v1;
    typedef T2 v2_type; const T2 v2;

    tuple3(const T0 v0, const T1 v1, const T2 v2) : v0(v0), v1(v1), v2(v2){}
};
template<typename T0, typename T1, typename T2, typename T3> struct tuple4{
    static const size_t length = 4;

    typedef T0 v0_type; const T0 v0;
    typedef T1 v1_type; const T1 v1;
    typedef T2 v2_type; const T2 v2;
    typedef T3 v3_type; const T3 v3;

    tuple4(const T0 v0, const T1 v1, const T2 v2, const T3 v3) : v0(v0), v1(v1), v2(v2), v3(v3){}
};
template<typename T0, typename T1, typename T2, typename T3, typename T4> struct tuple5{
    static const size_t length = 5;

    typedef T0 v0_type; const T0 v0;
    typedef T1 v1_type; const T1 v1;
    typedef T2 v2_type; const T2 v2;
    typedef T3 v3_type; const T3 v3;
    typedef T4 v4_type; const T4 v4;

    tuple5(const T0 v0, const T1 v1, const T2 v2, const T3 v3, const T4 v4) : v0(v0), v1(v1), v2(v2), v3(v3), v4(v4){}
};
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5> struct tuple6{
    static const size_t length = 6;

    typedef T0 v0_type; const T0 v0;
    typedef T1 v1_type; const T1 v1;
    typedef T2 v2_type; const T2 v2;
    typedef T3 v3_type; const T3 v3;
    typedef T4 v4_type; const T4 v4;
    typedef T5 v5_type; const T5 v5;

    tuple6(const T0 v0, const T1 v1, const T2 v2, const T3 v3, const T4 v4, const T5 v5) : v0(v0), v1(v1), v2(v2), v3(v3), v4(v4), v5(v5){}
};
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> struct tuple7{
    static const size_t length = 7;

    typedef T0 v0_type; const T0 v0;
    typedef T1 v1_type; const T1 v1;
    typedef T2 v2_type; const T2 v2;
    typedef T3 v3_type; const T3 v3;
    typedef T4 v4_type; const T4 v4;
    typedef T5 v5_type; const T5 v5;
    typedef T6 v6_type; const T6 v6;

    tuple7(const T0 v0, const T1 v1, const T2 v2, const T3 v3, const T4 v4, const T5 v5, const T6 v6) : v0(v0), v1(v1), v2(v2), v3(v3), v4(v4), v5(v5), v6(v6){}
};
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> struct tuple8{
    static const size_t length = 8;

    typedef T0 v0_type; const T0 v0;
    typedef T1 v1_type; const T1 v1;
    typedef T2 v2_type; const T2 v2;
    typedef T3 v3_type; const T3 v3;
    typedef T4 v4_type; const T4 v4;
    typedef T5 v5_type; const T5 v5;
    typedef T6 v6_type; const T6 v6;
    typedef T7 v7_type; const T7 v7;

    tuple8(const T0 v0, const T1 v1, const T2 v2, const T3 v3, const T4 v4, const T5 v5, const T6 v6, const T7 v7) : v0(v0), v1(v1), v2(v2), v3(v3), v4(v4), v5(v5), v6(v6), v7(v7){}
};
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8> struct tuple9{
    static const size_t length = 9;

    typedef T0 v0_type; const T0 v0;
    typedef T1 v1_type; const T1 v1;
    typedef T2 v2_type; const T2 v2;
    typedef T3 v3_type; const T3 v3;
    typedef T4 v4_type; const T4 v4;
    typedef T5 v5_type; const T5 v5;
    typedef T6 v6_type; const T6 v6;
    typedef T7 v7_type; const T7 v7;
    typedef T8 v8_type; const T8 v8;

    tuple9(const T0 v0, const T1 v1, const T2 v2, const T3 v3, const T4 v4, const T5 v5, const T6 v6, const T7 v7, const T8 v8) : v0(v0), v1(v1), v2(v2), v3(v3), v4(v4), v5(v5), v6(v6), v7(v7), v8(v8){}
};
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9> struct tuple10{
    static const size_t length = 10;

    typedef T0 v0_type; const T0 v0;
    typedef T1 v1_type; const T1 v1;
    typedef T2 v2_type; const T2 v2;
    typedef T3 v3_type; const T3 v3;
    typedef T4 v4_type; const T4 v4;
    typedef T5 v5_type; const T5 v5;
    typedef T6 v6_type; const T6 v6;
    typedef T7 v7_type; const T7 v7;
    typedef T8 v8_type; const T8 v8;
    typedef T9 v9_type; const T9 v9;

    tuple10(const T0 v0, const T1 v1, const T2 v2, const T3 v3, const T4 v4, const T5 v5, const T6 v6, const T7 v7, const T8 v8, const T9 v9) : v0(v0), v1(v1), v2(v2), v3(v3), v4(v4), v5(v5), v6(v6), v7(v7), v8(v8), v9(v9){}
};
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10> struct tuple11{
    static const size_t length = 11;

    typedef T0 v0_type; const T0 v0;
    typedef T1 v1_type; const T1 v1;
    typedef T2 v2_type; const T2 v2;
    typedef T3 v3_type; const T3 v3;
    typedef T4 v4_type; const T4 v4;
    typedef T5 v5_type; const T5 v5;
    typedef T6 v6_type; const T6 v6;
    typedef T7 v7_type; const T7 v7;
    typedef T8 v8_type; const T8 v8;
    typedef T9 v9_type; const T9 v9;
    typedef T10 v10_type; const T10 v10;

    tuple11(const T0 v0, const T1 v1, const T2 v2, const T3 v3, const T4 v4, const T5 v5, const T6 v6, const T7 v7, const T8 v8, const T9 v9, const T10 v10) : v0(v0), v1(v1), v2(v2), v3(v3), v4(v4), v5(v5), v6(v6), v7(v7), v8(v8), v9(v9), v10(v10){}
};
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11> struct tuple12{
    static const size_t length = 12;

    typedef T0 v0_type; const T0 v0;
    typedef T1 v1_type; const T1 v1;
    typedef T2 v2_type; const T2 v2;
    typedef T3 v3_type; const T3 v3;
    typedef T4 v4_type; const T4 v4;
    typedef T5 v5_type; const T5 v5;
    typedef T6 v6_type; const T6 v6;
    typedef T7 v7_type; const T7 v7;
    typedef T8 v8_type; const T8 v8;
    typedef T9 v9_type; const T9 v9;
    typedef T10 v10_type; const T10 v10;
    typedef T11 v11_type; const T11 v11;

    tuple12(const T0 v0, const T1 v1, const T2 v2, const T3 v3, const T4 v4, const T5 v5, const T6 v6, const T7 v7, const T8 v8, const T9 v9, const T10 v10, const T11 v11) : v0(v0), v1(v1), v2(v2), v3(v3), v4(v4), v5(v5), v6(v6), v7(v7), v8(v8), v9(v9), v10(v10), v11(v11){}
};
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12> struct tuple13{
    static const size_t length = 13;

    typedef T0 v0_type; const T0 v0;
    typedef T1 v1_type; const T1 v1;
    typedef T2 v2_type; const T2 v2;
    typedef T3 v3_type; const T3 v3;
    typedef T4 v4_type; const T4 v4;
    typedef T5 v5_type; const T5 v5;
    typedef T6 v6_type; const T6 v6;
    typedef T7 v7_type; const T7 v7;
    typedef T8 v8_type; const T8 v8;
    typedef T9 v9_type; const T9 v9;
    typedef T10 v10_type; const T10 v10;
    typedef T11 v11_type; const T11 v11;
    typedef T12 v12_type; const T12 v12;

    tuple13(const T0 v0, const T1 v1, const T2 v2, const T3 v3, const T4 v4, const T5 v5, const T6 v6, const T7 v7, const T8 v8, const T9 v9, const T10 v10, const T11 v11, const T12 v12) : v0(v0), v1(v1), v2(v2), v3(v3), v4(v4), v5(v5), v6(v6), v7(v7), v8(v8), v9(v9), v10(v10), v11(v11), v12(v12){}
};
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13> struct tuple14{
    static const size_t length = 14;

    typedef T0 v0_type; const T0 v0;
    typedef T1 v1_type; const T1 v1;
    typedef T2 v2_type; const T2 v2;
    typedef T3 v3_type; const T3 v3;
    typedef T4 v4_type; const T4 v4;
    typedef T5 v5_type; const T5 v5;
    typedef T6 v6_type; const T6 v6;
    typedef T7 v7_type; const T7 v7;
    typedef T8 v8_type; const T8 v8;
    typedef T9 v9_type; const T9 v9;
    typedef T10 v10_type; const T10 v10;
    typedef T11 v11_type; const T11 v11;
    typedef T12 v12_type; const T12 v12;
    typedef T13 v13_type; const T13 v13;

    tuple14(const T0 v0, const T1 v1, const T2 v2, const T3 v3, const T4 v4, const T5 v5, const T6 v6, const T7 v7, const T8 v8, const T9 v9, const T10 v10, const T11 v11, const T12 v12, const T13 v13) : v0(v0), v1(v1), v2(v2), v3(v3), v4(v4), v5(v5), v6(v6), v7(v7), v8(v8), v9(v9), v10(v10), v11(v11), v12(v12), v13(v13){}
};
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14> struct tuple15{
    static const size_t length = 15;

    typedef T0 v0_type; const T0 v0;
    typedef T1 v1_type; const T1 v1;
    typedef T2 v2_type; const T2 v2;
    typedef T3 v3_type; const T3 v3;
    typedef T4 v4_type; const T4 v4;
    typedef T5 v5_type; const T5 v5;
    typedef T6 v6_type; const T6 v6;
    typedef T7 v7_type; const T7 v7;
    typedef T8 v8_type; const T8 v8;
    typedef T9 v9_type; const T9 v9;
    typedef T10 v10_type; const T10 v10;
    typedef T11 v11_type; const T11 v11;
    typedef T12 v12_type; const T12 v12;
    typedef T13 v13_type; const T13 v13;
    typedef T14 v14_type; const T14 v14;

    tuple15(const T0 v0, const T1 v1, const T2 v2, const T3 v3, const T4 v4, const T5 v5, const T6 v6, const T7 v7, const T8 v8, const T9 v9, const T10 v10, const T11 v11, const T12 v12, const T13 v13, const T14 v14) : v0(v0), v1(v1), v2(v2), v3(v3), v4(v4), v5(v5), v6(v6), v7(v7), v8(v8), v9(v9), v10(v10), v11(v11), v12(v12), v13(v13), v14(v14){}
};
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15> struct tuple16{
    static const size_t length = 16;

    typedef T0 v0_type; const T0 v0;
    typedef T1 v1_type; const T1 v1;
    typedef T2 v2_type; const T2 v2;
    typedef T3 v3_type; const T3 v3;
    typedef T4 v4_type; const T4 v4;
    typedef T5 v5_type; const T5 v5;
    typedef T6 v6_type; const T6 v6;
    typedef T7 v7_type; const T7 v7;
    typedef T8 v8_type; const T8 v8;
    typedef T9 v9_type; const T9 v9;
    typedef T10 v10_type; const T10 v10;
    typedef T11 v11_type; const T11 v11;
    typedef T12 v12_type; const T12 v12;
    typedef T13 v13_type; const T13 v13;
    typedef T14 v14_type; const T14 v14;
    typedef T15 v15_type; const T15 v15;

    tuple16(const T0 v0, const T1 v1, const T2 v2, const T3 v3, const T4 v4, const T5 v5, const T6 v6, const T7 v7, const T8 v8, const T9 v9, const T10 v10, const T11 v11, const T12 v12, const T13 v13, const T14 v14, const T15 v15) : v0(v0), v1(v1), v2(v2), v3(v3), v4(v4), v5(v5), v6(v6), v7(v7), v8(v8), v9(v9), v10(v10), v11(v11), v12(v12), v13(v13), v14(v14), v15(v15){}
};
// Create //////////////////////////////////////////////////////////////////////
tuple0 create(){return tuple0();}
template<typename T0> tuple1<T0> create(const T0 v0){
    return tuple1<T0>(v0);
}
template<typename T0, typename T1> tuple2<T0, T1> create(const T0 v0, const T1 v1){
    return tuple2<T0, T1>(v0, v1);
}
template<typename T0, typename T1, typename T2> tuple3<T0, T1, T2> create(const T0 v0, const T1 v1, const T2 v2){
    return tuple3<T0, T1, T2>(v0, v1, v2);
}
template<typename T0, typename T1, typename T2, typename T3> tuple4<T0, T1, T2, T3> create(const T0 v0, const T1 v1, const T2 v2, const T3 v3){
    return tuple4<T0, T1, T2, T3>(v0, v1, v2, v3);
}
template<typename T0, typename T1, typename T2, typename T3, typename T4> tuple5<T0, T1, T2, T3, T4> create(const T0 v0, const T1 v1, const T2 v2, const T3 v3, const T4 v4){
    return tuple5<T0, T1, T2, T3, T4>(v0, v1, v2, v3, v4);
}
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5> tuple6<T0, T1, T2, T3, T4, T5> create(const T0 v0, const T1 v1, const T2 v2, const T3 v3, const T4 v4, const T5 v5){
    return tuple6<T0, T1, T2, T3, T4, T5>(v0, v1, v2, v3, v4, v5);
}
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> tuple7<T0, T1, T2, T3, T4, T5, T6> create(const T0 v0, const T1 v1, const T2 v2, const T3 v3, const T4 v4, const T5 v5, const T6 v6){
    return tuple7<T0, T1, T2, T3, T4, T5, T6>(v0, v1, v2, v3, v4, v5, v6);
}
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> tuple8<T0, T1, T2, T3, T4, T5, T6, T7> create(const T0 v0, const T1 v1, const T2 v2, const T3 v3, const T4 v4, const T5 v5, const T6 v6, const T7 v7){
    return tuple8<T0, T1, T2, T3, T4, T5, T6, T7>(v0, v1, v2, v3, v4, v5, v6, v7);
}
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8> tuple9<T0, T1, T2, T3, T4, T5, T6, T7, T8> create(const T0 v0, const T1 v1, const T2 v2, const T3 v3, const T4 v4, const T5 v5, const T6 v6, const T7 v7, const T8 v8){
    return tuple9<T0, T1, T2, T3, T4, T5, T6, T7, T8>(v0, v1, v2, v3, v4, v5, v6, v7, v8);
}
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9> tuple10<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9> create(const T0 v0, const T1 v1, const T2 v2, const T3 v3, const T4 v4, const T5 v5, const T6 v6, const T7 v7, const T8 v8, const T9 v9){
    return tuple10<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9>(v0, v1, v2, v3, v4, v5, v6, v7, v8, v9);
}
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10> tuple11<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> create(const T0 v0, const T1 v1, const T2 v2, const T3 v3, const T4 v4, const T5 v5, const T6 v6, const T7 v7, const T8 v8, const T9 v9, const T10 v10){
    return tuple11<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>(v0, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10);
}
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11> tuple12<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> create(const T0 v0, const T1 v1, const T2 v2, const T3 v3, const T4 v4, const T5 v5, const T6 v6, const T7 v7, const T8 v8, const T9 v9, const T10 v10, const T11 v11){
    return tuple12<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11>(v0, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11);
}
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12> tuple13<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> create(const T0 v0, const T1 v1, const T2 v2, const T3 v3, const T4 v4, const T5 v5, const T6 v6, const T7 v7, const T8 v8, const T9 v9, const T10 v10, const T11 v11, const T12 v12){
    return tuple13<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12>(v0, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12);
}
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13> tuple14<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> create(const T0 v0, const T1 v1, const T2 v2, const T3 v3, const T4 v4, const T5 v5, const T6 v6, const T7 v7, const T8 v8, const T9 v9, const T10 v10, const T11 v11, const T12 v12, const T13 v13){
    return tuple14<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13>(v0, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13);
}
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14> tuple15<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> create(const T0 v0, const T1 v1, const T2 v2, const T3 v3, const T4 v4, const T5 v5, const T6 v6, const T7 v7, const T8 v8, const T9 v9, const T10 v10, const T11 v11, const T12 v12, const T13 v13, const T14 v14){
    return tuple15<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>(v0, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14);
}
template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15> tuple16<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> create(const T0 v0, const T1 v1, const T2 v2, const T3 v3, const T4 v4, const T5 v5, const T6 v6, const T7 v7, const T8 v8, const T9 v9, const T10 v10, const T11 v11, const T12 v12, const T13 v13, const T14 v14, const T15 v15){
    return tuple16<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15>(v0, v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, v11, v12, v13, v14, v15);
}

namespace details {

// Pop Back ////////////////////////////////////////////////////////////////////

template<typename TTuple, size_t size> struct d_pop_back{};

template<typename TTuple> struct d_pop_back<TTuple, 1>{
    typedef typename TTuple::v0_type element_type;
    typedef tuple0 type;
};
template<typename TTuple> struct d_pop_back<TTuple, 2>{
    typedef typename TTuple::v1_type element_type;
    typedef tuple1<typename TTuple::v0_type> type;
};
template<typename TTuple> struct d_pop_back<TTuple, 3>{
    typedef typename TTuple::v2_type element_type;
    typedef tuple2<typename TTuple::v0_type, typename TTuple::v1_type> type;
};
template<typename TTuple> struct d_pop_back<TTuple, 4>{
    typedef typename TTuple::v3_type element_type;
    typedef tuple3<typename TTuple::v0_type, typename TTuple::v1_type, typename TTuple::v2_type> type;
};
template<typename TTuple> struct d_pop_back<TTuple, 5>{
    typedef typename TTuple::v4_type element_type;
    typedef tuple4<typename TTuple::v0_type, typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type> type;
};
template<typename TTuple> struct d_pop_back<TTuple, 6>{
    typedef typename TTuple::v5_type element_type;
    typedef tuple5<typename TTuple::v0_type, typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type, typename TTuple::v4_type> type;
};
template<typename TTuple> struct d_pop_back<TTuple, 7>{
    typedef typename TTuple::v6_type element_type;
    typedef tuple6<typename TTuple::v0_type, typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type, typename TTuple::v4_type, typename TTuple::v5_type> type;
};
template<typename TTuple> struct d_pop_back<TTuple, 8>{
    typedef typename TTuple::v7_type element_type;
    typedef tuple7<typename TTuple::v0_type, typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type, typename TTuple::v4_type, typename TTuple::v5_type, typename TTuple::v6_type> type;
};
template<typename TTuple> struct d_pop_back<TTuple, 9>{
    typedef typename TTuple::v8_type element_type;
    typedef tuple8<typename TTuple::v0_type, typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type, typename TTuple::v4_type, typename TTuple::v5_type, typename TTuple::v6_type, typename TTuple::v7_type> type;
};
template<typename TTuple> struct d_pop_back<TTuple, 10>{
    typedef typename TTuple::v9_type element_type;
    typedef tuple9<typename TTuple::v0_type, typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type, typename TTuple::v4_type, typename TTuple::v5_type, typename TTuple::v6_type, typename TTuple::v7_type, typename TTuple::v8_type> type;
};
template<typename TTuple> struct d_pop_back<TTuple, 11>{
    typedef typename TTuple::v10_type element_type;
    typedef tuple10<typename TTuple::v0_type, typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type, typename TTuple::v4_type, typename TTuple::v5_type, typename TTuple::v6_type, typename TTuple::v7_type, typename TTuple::v8_type, typename TTuple::v9_type> type;
};
template<typename TTuple> struct d_pop_back<TTuple, 12>{
    typedef typename TTuple::v11_type element_type;
    typedef tuple11<typename TTuple::v0_type, typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type, typename TTuple::v4_type, typename TTuple::v5_type, typename TTuple::v6_type, typename TTuple::v7_type, typename TTuple::v8_type, typename TTuple::v9_type, typename TTuple::v10_type> type;
};
template<typename TTuple> struct d_pop_back<TTuple, 13>{
    typedef typename TTuple::v12_type element_type;
    typedef tuple12<typename TTuple::v0_type, typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type, typename TTuple::v4_type, typename TTuple::v5_type, typename TTuple::v6_type, typename TTuple::v7_type, typename TTuple::v8_type, typename TTuple::v9_type, typename TTuple::v10_type, typename TTuple::v11_type> type;
};
template<typename TTuple> struct d_pop_back<TTuple, 14>{
    typedef typename TTuple::v13_type element_type;
    typedef tuple13<typename TTuple::v0_type, typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type, typename TTuple::v4_type, typename TTuple::v5_type, typename TTuple::v6_type, typename TTuple::v7_type, typename TTuple::v8_type, typename TTuple::v9_type, typename TTuple::v10_type, typename TTuple::v11_type, typename TTuple::v12_type> type;
};
template<typename TTuple> struct d_pop_back<TTuple, 15>{
    typedef typename TTuple::v14_type element_type;
    typedef tuple14<typename TTuple::v0_type, typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type, typename TTuple::v4_type, typename TTuple::v5_type, typename TTuple::v6_type, typename TTuple::v7_type, typename TTuple::v8_type, typename TTuple::v9_type, typename TTuple::v10_type, typename TTuple::v11_type, typename TTuple::v12_type, typename TTuple::v13_type> type;
};
template<typename TTuple> struct d_pop_back<TTuple, 16>{
    typedef typename TTuple::v15_type element_type;
    typedef tuple15<typename TTuple::v0_type, typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type, typename TTuple::v4_type, typename TTuple::v5_type, typename TTuple::v6_type, typename TTuple::v7_type, typename TTuple::v8_type, typename TTuple::v9_type, typename TTuple::v10_type, typename TTuple::v11_type, typename TTuple::v12_type, typename TTuple::v13_type, typename TTuple::v14_type> type;
};
// Pop Front ///////////////////////////////////////////////////////////////////
template<typename TTuple, size_t size> struct d_pop_front{};

template<typename TTuple> struct d_pop_front<TTuple, 1>{
    typedef typename TTuple::v0_type element_type;
    typedef tuple0 type;
};

template<typename TTuple> struct d_pop_front<TTuple, 2>{
    typedef typename TTuple::v0_type element_type;
    typedef tuple1<typename TTuple::v1_type> type;
};
template<typename TTuple> struct d_pop_front<TTuple, 3>{
    typedef typename TTuple::v0_type element_type;
    typedef tuple2<typename TTuple::v1_type, typename TTuple::v2_type> type;
};
template<typename TTuple> struct d_pop_front<TTuple, 4>{
    typedef typename TTuple::v0_type element_type;
    typedef tuple3<typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type> type;
};
template<typename TTuple> struct d_pop_front<TTuple, 5>{
    typedef typename TTuple::v0_type element_type;
    typedef tuple4<typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type, typename TTuple::v4_type> type;
};
template<typename TTuple> struct d_pop_front<TTuple, 6>{
    typedef typename TTuple::v0_type element_type;
    typedef tuple5<typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type, typename TTuple::v4_type, typename TTuple::v5_type> type;
};
template<typename TTuple> struct d_pop_front<TTuple, 7>{
    typedef typename TTuple::v0_type element_type;
    typedef tuple6<typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type, typename TTuple::v4_type, typename TTuple::v5_type, typename TTuple::v6_type> type;
};
template<typename TTuple> struct d_pop_front<TTuple, 8>{
    typedef typename TTuple::v0_type element_type;
    typedef tuple7<typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type, typename TTuple::v4_type, typename TTuple::v5_type, typename TTuple::v6_type, typename TTuple::v7_type> type;
};
template<typename TTuple> struct d_pop_front<TTuple, 9>{
    typedef typename TTuple::v0_type element_type;
    typedef tuple8<typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type, typename TTuple::v4_type, typename TTuple::v5_type, typename TTuple::v6_type, typename TTuple::v7_type, typename TTuple::v8_type> type;
};
template<typename TTuple> struct d_pop_front<TTuple, 10>{
    typedef typename TTuple::v0_type element_type;
    typedef tuple9<typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type, typename TTuple::v4_type, typename TTuple::v5_type, typename TTuple::v6_type, typename TTuple::v7_type, typename TTuple::v8_type, typename TTuple::v9_type> type;
};
template<typename TTuple> struct d_pop_front<TTuple, 11>{
    typedef typename TTuple::v0_type element_type;
    typedef tuple10<typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type, typename TTuple::v4_type, typename TTuple::v5_type, typename TTuple::v6_type, typename TTuple::v7_type, typename TTuple::v8_type, typename TTuple::v9_type, typename TTuple::v10_type> type;
};
template<typename TTuple> struct d_pop_front<TTuple, 12>{
    typedef typename TTuple::v0_type element_type;
    typedef tuple11<typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type, typename TTuple::v4_type, typename TTuple::v5_type, typename TTuple::v6_type, typename TTuple::v7_type, typename TTuple::v8_type, typename TTuple::v9_type, typename TTuple::v10_type, typename TTuple::v11_type> type;
};
template<typename TTuple> struct d_pop_front<TTuple, 13>{
    typedef typename TTuple::v0_type element_type;
    typedef tuple12<typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type, typename TTuple::v4_type, typename TTuple::v5_type, typename TTuple::v6_type, typename TTuple::v7_type, typename TTuple::v8_type, typename TTuple::v9_type, typename TTuple::v10_type, typename TTuple::v11_type, typename TTuple::v12_type> type;
};
template<typename TTuple> struct d_pop_front<TTuple, 14>{
    typedef typename TTuple::v0_type element_type;
    typedef tuple13<typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type, typename TTuple::v4_type, typename TTuple::v5_type, typename TTuple::v6_type, typename TTuple::v7_type, typename TTuple::v8_type, typename TTuple::v9_type, typename TTuple::v10_type, typename TTuple::v11_type, typename TTuple::v12_type, typename TTuple::v13_type> type;
};
template<typename TTuple> struct d_pop_front<TTuple, 15>{
    typedef typename TTuple::v0_type element_type;
    typedef tuple14<typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type, typename TTuple::v4_type, typename TTuple::v5_type, typename TTuple::v6_type, typename TTuple::v7_type, typename TTuple::v8_type, typename TTuple::v9_type, typename TTuple::v10_type, typename TTuple::v11_type, typename TTuple::v12_type, typename TTuple::v13_type, typename TTuple::v14_type> type;
};
template<typename TTuple> struct d_pop_front<TTuple, 16>{
    typedef typename TTuple::v0_type element_type;
    typedef tuple15<typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type, typename TTuple::v4_type, typename TTuple::v5_type, typename TTuple::v6_type, typename TTuple::v7_type, typename TTuple::v8_type, typename TTuple::v9_type, typename TTuple::v10_type, typename TTuple::v11_type, typename TTuple::v12_type, typename TTuple::v13_type, typename TTuple::v14_type, typename TTuple::v15_type> type;
};
// Push Back ///////////////////////////////////////////////////////////////////
template<typename TTuple, typename TNext, size_t size> struct d_push_back{};

template<typename TTuple, typename TNext> struct d_push_back<TTuple, TNext, 0>{
    typedef tuple1<TNext> type;
};
template<typename TTuple, typename TNext> struct d_push_back<TTuple, TNext, 1>{
    typedef tuple2<typename TTuple::v0_type, TNext> type;
};
template<typename TTuple, typename TNext> struct d_push_back<TTuple, TNext, 2>{
    typedef tuple3<typename TTuple::v0_type, typename TTuple::v1_type, TNext> type;
};
template<typename TTuple, typename TNext> struct d_push_back<TTuple, TNext, 3>{
    typedef tuple4<typename TTuple::v0_type, typename TTuple::v1_type, typename TTuple::v2_type, TNext> type;
};
template<typename TTuple, typename TNext> struct d_push_back<TTuple, TNext, 4>{
    typedef tuple5<typename TTuple::v0_type, typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type, TNext> type;
};
template<typename TTuple, typename TNext> struct d_push_back<TTuple, TNext, 5>{
    typedef tuple6<typename TTuple::v0_type, typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type, typename TTuple::v4_type, TNext> type;
};
template<typename TTuple, typename TNext> struct d_push_back<TTuple, TNext, 6>{
    typedef tuple7<typename TTuple::v0_type, typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type, typename TTuple::v4_type, typename TTuple::v5_type, TNext> type;
};
template<typename TTuple, typename TNext> struct d_push_back<TTuple, TNext, 7>{
    typedef tuple8<typename TTuple::v0_type, typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type, typename TTuple::v4_type, typename TTuple::v5_type, typename TTuple::v6_type, TNext> type;
};
template<typename TTuple, typename TNext> struct d_push_back<TTuple, TNext, 8>{
    typedef tuple9<typename TTuple::v0_type, typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type, typename TTuple::v4_type, typename TTuple::v5_type, typename TTuple::v6_type, typename TTuple::v7_type, TNext> type;
};
template<typename TTuple, typename TNext> struct d_push_back<TTuple, TNext, 9>{
    typedef tuple10<typename TTuple::v0_type, typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type, typename TTuple::v4_type, typename TTuple::v5_type, typename TTuple::v6_type, typename TTuple::v7_type, typename TTuple::v8_type, TNext> type;
};
template<typename TTuple, typename TNext> struct d_push_back<TTuple, TNext, 10>{
    typedef tuple11<typename TTuple::v0_type, typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type, typename TTuple::v4_type, typename TTuple::v5_type, typename TTuple::v6_type, typename TTuple::v7_type, typename TTuple::v8_type, typename TTuple::v9_type, TNext> type;
};
template<typename TTuple, typename TNext> struct d_push_back<TTuple, TNext, 11>{
    typedef tuple12<typename TTuple::v0_type, typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type, typename TTuple::v4_type, typename TTuple::v5_type, typename TTuple::v6_type, typename TTuple::v7_type, typename TTuple::v8_type, typename TTuple::v9_type, typename TTuple::v10_type, TNext> type;
};
template<typename TTuple, typename TNext> struct d_push_back<TTuple, TNext, 12>{
    typedef tuple13<typename TTuple::v0_type, typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type, typename TTuple::v4_type, typename TTuple::v5_type, typename TTuple::v6_type, typename TTuple::v7_type, typename TTuple::v8_type, typename TTuple::v9_type, typename TTuple::v10_type, typename TTuple::v11_type, TNext> type;
};
template<typename TTuple, typename TNext> struct d_push_back<TTuple, TNext, 13>{
    typedef tuple14<typename TTuple::v0_type, typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type, typename TTuple::v4_type, typename TTuple::v5_type, typename TTuple::v6_type, typename TTuple::v7_type, typename TTuple::v8_type, typename TTuple::v9_type, typename TTuple::v10_type, typename TTuple::v11_type, typename TTuple::v12_type, TNext> type;
};
template<typename TTuple, typename TNext> struct d_push_back<TTuple, TNext, 14>{
    typedef tuple15<typename TTuple::v0_type, typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type, typename TTuple::v4_type, typename TTuple::v5_type, typename TTuple::v6_type, typename TTuple::v7_type, typename TTuple::v8_type, typename TTuple::v9_type, typename TTuple::v10_type, typename TTuple::v11_type, typename TTuple::v12_type, typename TTuple::v13_type, TNext> type;
};
template<typename TTuple, typename TNext> struct d_push_back<TTuple, TNext, 15>{
    typedef tuple16<typename TTuple::v0_type, typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type, typename TTuple::v4_type, typename TTuple::v5_type, typename TTuple::v6_type, typename TTuple::v7_type, typename TTuple::v8_type, typename TTuple::v9_type, typename TTuple::v10_type, typename TTuple::v11_type, typename TTuple::v12_type, typename TTuple::v13_type, typename TTuple::v14_type, TNext> type;
};
// Push Front //////////////////////////////////////////////////////////////////
template<typename TTuple, typename TNext, size_t size> struct d_push_front{};

template<typename TTuple, typename TNext> struct d_push_front<TTuple, TNext, 0>{
    typedef tuple1<TNext> type;
};
template<typename TTuple, typename TNext> struct d_push_front<TTuple, TNext, 1>{
    typedef tuple2<TNext, typename TTuple::v0_type> type;
};
template<typename TTuple, typename TNext> struct d_push_front<TTuple, TNext, 2>{
    typedef tuple3<TNext, typename TTuple::v0_type, typename TTuple::v1_type> type;
};
template<typename TTuple, typename TNext> struct d_push_front<TTuple, TNext, 3>{
    typedef tuple4<TNext, typename TTuple::v0_type, typename TTuple::v1_type, typename TTuple::v2_type> type;
};
template<typename TTuple, typename TNext> struct d_push_front<TTuple, TNext, 4>{
    typedef tuple5<TNext, typename TTuple::v0_type, typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type> type;
};
template<typename TTuple, typename TNext> struct d_push_front<TTuple, TNext, 5>{
    typedef tuple6<TNext, typename TTuple::v0_type, typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type, typename TTuple::v4_type> type;
};
template<typename TTuple, typename TNext> struct d_push_front<TTuple, TNext, 6>{
    typedef tuple7<TNext, typename TTuple::v0_type, typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type, typename TTuple::v4_type, typename TTuple::v5_type> type;
};
template<typename TTuple, typename TNext> struct d_push_front<TTuple, TNext, 7>{
    typedef tuple8<TNext, typename TTuple::v0_type, typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type, typename TTuple::v4_type, typename TTuple::v5_type, typename TTuple::v6_type> type;
};
template<typename TTuple, typename TNext> struct d_push_front<TTuple, TNext, 8>{
    typedef tuple9<TNext, typename TTuple::v0_type, typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type, typename TTuple::v4_type, typename TTuple::v5_type, typename TTuple::v6_type, typename TTuple::v7_type> type;
};
template<typename TTuple, typename TNext> struct d_push_front<TTuple, TNext, 9>{
    typedef tuple10<TNext, typename TTuple::v0_type, typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type, typename TTuple::v4_type, typename TTuple::v5_type, typename TTuple::v6_type, typename TTuple::v7_type, typename TTuple::v8_type> type;
};
template<typename TTuple, typename TNext> struct d_push_front<TTuple, TNext, 10>{
    typedef tuple11<TNext, typename TTuple::v0_type, typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type, typename TTuple::v4_type, typename TTuple::v5_type, typename TTuple::v6_type, typename TTuple::v7_type, typename TTuple::v8_type, typename TTuple::v9_type> type;
};
template<typename TTuple, typename TNext> struct d_push_front<TTuple, TNext, 11>{
    typedef tuple12<TNext, typename TTuple::v0_type, typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type, typename TTuple::v4_type, typename TTuple::v5_type, typename TTuple::v6_type, typename TTuple::v7_type, typename TTuple::v8_type, typename TTuple::v9_type, typename TTuple::v10_type> type;
};
template<typename TTuple, typename TNext> struct d_push_front<TTuple, TNext, 12>{
    typedef tuple13<TNext, typename TTuple::v0_type, typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type, typename TTuple::v4_type, typename TTuple::v5_type, typename TTuple::v6_type, typename TTuple::v7_type, typename TTuple::v8_type, typename TTuple::v9_type, typename TTuple::v10_type, typename TTuple::v11_type> type;
};
template<typename TTuple, typename TNext> struct d_push_front<TTuple, TNext, 13>{
    typedef tuple14<TNext, typename TTuple::v0_type, typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type, typename TTuple::v4_type, typename TTuple::v5_type, typename TTuple::v6_type, typename TTuple::v7_type, typename TTuple::v8_type, typename TTuple::v9_type, typename TTuple::v10_type, typename TTuple::v11_type, typename TTuple::v12_type> type;
};
template<typename TTuple, typename TNext> struct d_push_front<TTuple, TNext, 14>{
    typedef tuple15<TNext, typename TTuple::v0_type, typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type, typename TTuple::v4_type, typename TTuple::v5_type, typename TTuple::v6_type, typename TTuple::v7_type, typename TTuple::v8_type, typename TTuple::v9_type, typename TTuple::v10_type, typename TTuple::v11_type, typename TTuple::v12_type, typename TTuple::v13_type> type;
};
template<typename TTuple, typename TNext> struct d_push_front<TTuple, TNext, 15>{
    typedef tuple16<TNext, typename TTuple::v0_type, typename TTuple::v1_type, typename TTuple::v2_type, typename TTuple::v3_type, typename TTuple::v4_type, typename TTuple::v5_type, typename TTuple::v6_type, typename TTuple::v7_type, typename TTuple::v8_type, typename TTuple::v9_type, typename TTuple::v10_type, typename TTuple::v11_type, typename TTuple::v12_type, typename TTuple::v13_type, typename TTuple::v14_type> type;
};

// Concat //////////////////////////////////////////////////////////////////////

// Concate TA with TB by recursing over TA
template<typename TA, typename TB, size_t TASize> struct d_concat_A{
    typedef typename pop_back<TA>::element_type next;
    typedef typename pop_back<TA>::type left;
    typedef typename push_front<TB, next>::type right;

    typedef typename d_concat_A<left, right, left::length>::type type;
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

    typedef typename d_concat_B<left, right, right::length>::type type;
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

// Just used to handle zero sized tuples
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

template<typename TA, typename TB> struct concat : details::d_concat<TA, TA::length, TB, TB::length>{};
template<typename TTuple> struct pop_back : details::d_pop_back<TTuple, TTuple::length>{};
template<typename TTuple> struct pop_front : details::d_pop_front<TTuple, TTuple::length>{};
template<typename TTuple, typename TNext> struct push_back : details::d_push_back<TTuple, TNext, TTuple::length>{};
template<typename TTuple, typename TNext> struct push_front : details::d_push_front<TTuple, TNext, TTuple::length>{};

}} // namespace functionalcpp::tuples

#endif // FUNCTIONALCPP__TUPLE__HPP
