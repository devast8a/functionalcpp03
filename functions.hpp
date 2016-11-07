#ifndef FUNCTIONALCPP__FUNCTIONS__HPP
#define FUNCTIONALCPP__FUNCTIONS__HPP

#include "traits.hpp"

struct __{};
namespace functionalcpp { namespace functions {
// signature //////////////////////////////////////////////////////////////////
template<typename TR, typename T0=__, typename T1=__, typename T2=__, typename T3=__, typename T4=__, typename T5=__, typename T6=__, typename T7=__, typename T8=__, typename T9=__, typename T10=__, typename T11=__, typename T12=__, typename T13=__, typename T14=__, typename T15=__>
struct signature
{
    static const size_t parameters = 16;
    static const bool returns_value = traits::is_not_void<TR>::value;
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
template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
struct signature<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, __>
{
    static const size_t parameters = 15;
    static const bool returns_value = traits::is_not_void<TR>::value;
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
template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
struct signature<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, __, __>
{
    static const size_t parameters = 14;
    static const bool returns_value = traits::is_not_void<TR>::value;
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
template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
struct signature<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, __, __, __>
{
    static const size_t parameters = 13;
    static const bool returns_value = traits::is_not_void<TR>::value;
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
template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
struct signature<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, __, __, __, __>
{
    static const size_t parameters = 12;
    static const bool returns_value = traits::is_not_void<TR>::value;
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
template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
struct signature<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, __, __, __, __, __>
{
    static const size_t parameters = 11;
    static const bool returns_value = traits::is_not_void<TR>::value;
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
template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
struct signature<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, __, __, __, __, __, __>
{
    static const size_t parameters = 10;
    static const bool returns_value = traits::is_not_void<TR>::value;
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
template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct signature<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, __, __, __, __, __, __, __>
{
    static const size_t parameters = 9;
    static const bool returns_value = traits::is_not_void<TR>::value;
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
template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct signature<TR, T0, T1, T2, T3, T4, T5, T6, T7, __, __, __, __, __, __, __, __>
{
    static const size_t parameters = 8;
    static const bool returns_value = traits::is_not_void<TR>::value;
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
template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct signature<TR, T0, T1, T2, T3, T4, T5, T6, __, __, __, __, __, __, __, __, __>
{
    static const size_t parameters = 7;
    static const bool returns_value = traits::is_not_void<TR>::value;
    typedef TR return_type;
    typedef T0 parameter0_type;
    typedef T1 parameter1_type;
    typedef T2 parameter2_type;
    typedef T3 parameter3_type;
    typedef T4 parameter4_type;
    typedef T5 parameter5_type;
    typedef T6 parameter6_type;
};
template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5>
struct signature<TR, T0, T1, T2, T3, T4, T5, __, __, __, __, __, __, __, __, __, __>
{
    static const size_t parameters = 6;
    static const bool returns_value = traits::is_not_void<TR>::value;
    typedef TR return_type;
    typedef T0 parameter0_type;
    typedef T1 parameter1_type;
    typedef T2 parameter2_type;
    typedef T3 parameter3_type;
    typedef T4 parameter4_type;
    typedef T5 parameter5_type;
};
template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4>
struct signature<TR, T0, T1, T2, T3, T4, __, __, __, __, __, __, __, __, __, __, __>
{
    static const size_t parameters = 5;
    static const bool returns_value = traits::is_not_void<TR>::value;
    typedef TR return_type;
    typedef T0 parameter0_type;
    typedef T1 parameter1_type;
    typedef T2 parameter2_type;
    typedef T3 parameter3_type;
    typedef T4 parameter4_type;
};
template<typename TR, typename T0, typename T1, typename T2, typename T3>
struct signature<TR, T0, T1, T2, T3, __, __, __, __, __, __, __, __, __, __, __, __>
{
    static const size_t parameters = 4;
    static const bool returns_value = traits::is_not_void<TR>::value;
    typedef TR return_type;
    typedef T0 parameter0_type;
    typedef T1 parameter1_type;
    typedef T2 parameter2_type;
    typedef T3 parameter3_type;
};
template<typename TR, typename T0, typename T1, typename T2>
struct signature<TR, T0, T1, T2, __, __, __, __, __, __, __, __, __, __, __, __, __>
{
    static const size_t parameters = 3;
    static const bool returns_value = traits::is_not_void<TR>::value;
    typedef TR return_type;
    typedef T0 parameter0_type;
    typedef T1 parameter1_type;
    typedef T2 parameter2_type;
};
template<typename TR, typename T0, typename T1>
struct signature<TR, T0, T1, __, __, __, __, __, __, __, __, __, __, __, __, __, __>
{
    static const size_t parameters = 2;
    static const bool returns_value = traits::is_not_void<TR>::value;
    typedef TR return_type;
    typedef T0 parameter0_type;
    typedef T1 parameter1_type;
};
template<typename TR, typename T0>
struct signature<TR, T0, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __>
{
    static const size_t parameters = 1;
    static const bool returns_value = traits::is_not_void<TR>::value;
    typedef TR return_type;
    typedef T0 parameter0_type;
};
template<typename TR>
struct signature<TR, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __>
{
    static const size_t parameters = 0;
    static const bool returns_value = traits::is_not_void<TR>::value;
    typedef TR return_type;
    
};
namespace bodies{

// bodies::dfunction_body /////////////////////////////////////////////////////
template<typename TR, typename T0=__, typename T1=__, typename T2=__, typename T3=__, typename T4=__, typename T5=__, typename T6=__, typename T7=__, typename T8=__, typename T9=__, typename T10=__, typename T11=__, typename T12=__, typename T13=__, typename T14=__, typename T15=__>
struct dfunction_body : signature<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15>
{
    virtual TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10, T11 a11, T12 a12, T13 a13, T14 a14, T15 a15);
};

template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
struct dfunction_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, __> : signature<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>
{
    virtual TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10, T11 a11, T12 a12, T13 a13, T14 a14);
};

template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
struct dfunction_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, __, __> : signature<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13>
{
    virtual TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10, T11 a11, T12 a12, T13 a13);
};

template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
struct dfunction_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, __, __, __> : signature<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12>
{
    virtual TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10, T11 a11, T12 a12);
};

template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
struct dfunction_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, __, __, __, __> : signature<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11>
{
    virtual TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10, T11 a11);
};

template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
struct dfunction_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, __, __, __, __, __> : signature<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>
{
    virtual TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10);
};

template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
struct dfunction_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, __, __, __, __, __, __> : signature<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9>
{
    virtual TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9);
};

template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct dfunction_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, __, __, __, __, __, __, __> : signature<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8>
{
    virtual TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8);
};

template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct dfunction_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, __, __, __, __, __, __, __, __> : signature<TR, T0, T1, T2, T3, T4, T5, T6, T7>
{
    virtual TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7);
};

template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct dfunction_body<TR, T0, T1, T2, T3, T4, T5, T6, __, __, __, __, __, __, __, __, __> : signature<TR, T0, T1, T2, T3, T4, T5, T6>
{
    virtual TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6);
};

template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5>
struct dfunction_body<TR, T0, T1, T2, T3, T4, T5, __, __, __, __, __, __, __, __, __, __> : signature<TR, T0, T1, T2, T3, T4, T5>
{
    virtual TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5);
};

template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4>
struct dfunction_body<TR, T0, T1, T2, T3, T4, __, __, __, __, __, __, __, __, __, __, __> : signature<TR, T0, T1, T2, T3, T4>
{
    virtual TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4);
};

template<typename TR, typename T0, typename T1, typename T2, typename T3>
struct dfunction_body<TR, T0, T1, T2, T3, __, __, __, __, __, __, __, __, __, __, __, __> : signature<TR, T0, T1, T2, T3>
{
    virtual TR apply(T0 a0, T1 a1, T2 a2, T3 a3);
};

template<typename TR, typename T0, typename T1, typename T2>
struct dfunction_body<TR, T0, T1, T2, __, __, __, __, __, __, __, __, __, __, __, __, __> : signature<TR, T0, T1, T2>
{
    virtual TR apply(T0 a0, T1 a1, T2 a2);
};

template<typename TR, typename T0, typename T1>
struct dfunction_body<TR, T0, T1, __, __, __, __, __, __, __, __, __, __, __, __, __, __> : signature<TR, T0, T1>
{
    virtual TR apply(T0 a0, T1 a1);
};

template<typename TR, typename T0>
struct dfunction_body<TR, T0, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __> : signature<TR, T0>
{
    virtual TR apply(T0 a0);
};

template<typename TR>
struct dfunction_body<TR, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __> : signature<TR>
{
    virtual TR apply();
};


// bodies::dfunction_body_adapter /////////////////////////////////////////////
template<typename TCallable, typename TR, typename T0=__, typename T1=__, typename T2=__, typename T3=__, typename T4=__, typename T5=__, typename T6=__, typename T7=__, typename T8=__, typename T9=__, typename T10=__, typename T11=__, typename T12=__, typename T13=__, typename T14=__, typename T15=__>
struct dfunction_body_adatper : dfunction_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15>
{
    TCallable func;

    dfunction_body_adatper(TCallable func) : func(func){}

    inline TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10, T11 a11, T12 a12, T13 a13, T14 a14, T15 a15){
        return func(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
    }
};

template<typename TCallable, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
struct dfunction_body_adatper<TCallable, TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, __> : dfunction_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>
{
    TCallable func;

    dfunction_body_adatper(TCallable func) : func(func){}

    inline TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10, T11 a11, T12 a12, T13 a13, T14 a14){
        return func(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
    }
};

template<typename TCallable, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
struct dfunction_body_adatper<TCallable, TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, __, __> : dfunction_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13>
{
    TCallable func;

    dfunction_body_adatper(TCallable func) : func(func){}

    inline TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10, T11 a11, T12 a12, T13 a13){
        return func(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    }
};

template<typename TCallable, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
struct dfunction_body_adatper<TCallable, TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, __, __, __> : dfunction_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12>
{
    TCallable func;

    dfunction_body_adatper(TCallable func) : func(func){}

    inline TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10, T11 a11, T12 a12){
        return func(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    }
};

template<typename TCallable, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
struct dfunction_body_adatper<TCallable, TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, __, __, __, __> : dfunction_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11>
{
    TCallable func;

    dfunction_body_adatper(TCallable func) : func(func){}

    inline TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10, T11 a11){
        return func(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    }
};

template<typename TCallable, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
struct dfunction_body_adatper<TCallable, TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, __, __, __, __, __> : dfunction_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>
{
    TCallable func;

    dfunction_body_adatper(TCallable func) : func(func){}

    inline TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10){
        return func(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    }
};

template<typename TCallable, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
struct dfunction_body_adatper<TCallable, TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, __, __, __, __, __, __> : dfunction_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9>
{
    TCallable func;

    dfunction_body_adatper(TCallable func) : func(func){}

    inline TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9){
        return func(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
    }
};

template<typename TCallable, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct dfunction_body_adatper<TCallable, TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, __, __, __, __, __, __, __> : dfunction_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8>
{
    TCallable func;

    dfunction_body_adatper(TCallable func) : func(func){}

    inline TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8){
        return func(a0, a1, a2, a3, a4, a5, a6, a7, a8);
    }
};

template<typename TCallable, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct dfunction_body_adatper<TCallable, TR, T0, T1, T2, T3, T4, T5, T6, T7, __, __, __, __, __, __, __, __> : dfunction_body<TR, T0, T1, T2, T3, T4, T5, T6, T7>
{
    TCallable func;

    dfunction_body_adatper(TCallable func) : func(func){}

    inline TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7){
        return func(a0, a1, a2, a3, a4, a5, a6, a7);
    }
};

template<typename TCallable, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct dfunction_body_adatper<TCallable, TR, T0, T1, T2, T3, T4, T5, T6, __, __, __, __, __, __, __, __, __> : dfunction_body<TR, T0, T1, T2, T3, T4, T5, T6>
{
    TCallable func;

    dfunction_body_adatper(TCallable func) : func(func){}

    inline TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6){
        return func(a0, a1, a2, a3, a4, a5, a6);
    }
};

template<typename TCallable, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5>
struct dfunction_body_adatper<TCallable, TR, T0, T1, T2, T3, T4, T5, __, __, __, __, __, __, __, __, __, __> : dfunction_body<TR, T0, T1, T2, T3, T4, T5>
{
    TCallable func;

    dfunction_body_adatper(TCallable func) : func(func){}

    inline TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5){
        return func(a0, a1, a2, a3, a4, a5);
    }
};

template<typename TCallable, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4>
struct dfunction_body_adatper<TCallable, TR, T0, T1, T2, T3, T4, __, __, __, __, __, __, __, __, __, __, __> : dfunction_body<TR, T0, T1, T2, T3, T4>
{
    TCallable func;

    dfunction_body_adatper(TCallable func) : func(func){}

    inline TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4){
        return func(a0, a1, a2, a3, a4);
    }
};

template<typename TCallable, typename TR, typename T0, typename T1, typename T2, typename T3>
struct dfunction_body_adatper<TCallable, TR, T0, T1, T2, T3, __, __, __, __, __, __, __, __, __, __, __, __> : dfunction_body<TR, T0, T1, T2, T3>
{
    TCallable func;

    dfunction_body_adatper(TCallable func) : func(func){}

    inline TR apply(T0 a0, T1 a1, T2 a2, T3 a3){
        return func(a0, a1, a2, a3);
    }
};

template<typename TCallable, typename TR, typename T0, typename T1, typename T2>
struct dfunction_body_adatper<TCallable, TR, T0, T1, T2, __, __, __, __, __, __, __, __, __, __, __, __, __> : dfunction_body<TR, T0, T1, T2>
{
    TCallable func;

    dfunction_body_adatper(TCallable func) : func(func){}

    inline TR apply(T0 a0, T1 a1, T2 a2){
        return func(a0, a1, a2);
    }
};

template<typename TCallable, typename TR, typename T0, typename T1>
struct dfunction_body_adatper<TCallable, TR, T0, T1, __, __, __, __, __, __, __, __, __, __, __, __, __, __> : dfunction_body<TR, T0, T1>
{
    TCallable func;

    dfunction_body_adatper(TCallable func) : func(func){}

    inline TR apply(T0 a0, T1 a1){
        return func(a0, a1);
    }
};

template<typename TCallable, typename TR, typename T0>
struct dfunction_body_adatper<TCallable, TR, T0, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __> : dfunction_body<TR, T0>
{
    TCallable func;

    dfunction_body_adatper(TCallable func) : func(func){}

    inline TR apply(T0 a0){
        return func(a0);
    }
};

template<typename TCallable, typename TR>
struct dfunction_body_adatper<TCallable, TR, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __> : dfunction_body<TR>
{
    TCallable func;

    dfunction_body_adatper(TCallable func) : func(func){}

    inline TR apply(){
        return func();
    }
};

} // namespace bodies

// dfunction //////////////////////////////////////////////////////////////////
template<typename TR, typename T0=__, typename T1=__, typename T2=__, typename T3=__, typename T4=__, typename T5=__, typename T6=__, typename T7=__, typename T8=__, typename T9=__, typename T10=__, typename T11=__, typename T12=__, typename T13=__, typename T14=__, typename T15=__>
struct dfunction : signature<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15>
{
    typedef bodies::dfunction_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> body_type;

    body_type& body;

    dfunction(body_type& body) : body(body){}

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10, T11 a11, T12 a12, T13 a13, T14 a14, T15 a15){
        return body.apply(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
    }
};

template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
struct dfunction<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, __> : signature<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>
{
    typedef bodies::dfunction_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> body_type;

    body_type& body;

    dfunction(body_type& body) : body(body){}

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10, T11 a11, T12 a12, T13 a13, T14 a14){
        return body.apply(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
    }
};

template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
struct dfunction<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, __, __> : signature<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13>
{
    typedef bodies::dfunction_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> body_type;

    body_type& body;

    dfunction(body_type& body) : body(body){}

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10, T11 a11, T12 a12, T13 a13){
        return body.apply(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    }
};

template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
struct dfunction<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, __, __, __> : signature<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12>
{
    typedef bodies::dfunction_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> body_type;

    body_type& body;

    dfunction(body_type& body) : body(body){}

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10, T11 a11, T12 a12){
        return body.apply(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    }
};

template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
struct dfunction<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, __, __, __, __> : signature<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11>
{
    typedef bodies::dfunction_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> body_type;

    body_type& body;

    dfunction(body_type& body) : body(body){}

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10, T11 a11){
        return body.apply(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    }
};

template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
struct dfunction<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, __, __, __, __, __> : signature<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>
{
    typedef bodies::dfunction_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> body_type;

    body_type& body;

    dfunction(body_type& body) : body(body){}

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10){
        return body.apply(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    }
};

template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
struct dfunction<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, __, __, __, __, __, __> : signature<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9>
{
    typedef bodies::dfunction_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9> body_type;

    body_type& body;

    dfunction(body_type& body) : body(body){}

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9){
        return body.apply(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
    }
};

template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct dfunction<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, __, __, __, __, __, __, __> : signature<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8>
{
    typedef bodies::dfunction_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8> body_type;

    body_type& body;

    dfunction(body_type& body) : body(body){}

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8){
        return body.apply(a0, a1, a2, a3, a4, a5, a6, a7, a8);
    }
};

template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct dfunction<TR, T0, T1, T2, T3, T4, T5, T6, T7, __, __, __, __, __, __, __, __> : signature<TR, T0, T1, T2, T3, T4, T5, T6, T7>
{
    typedef bodies::dfunction_body<TR, T0, T1, T2, T3, T4, T5, T6, T7> body_type;

    body_type& body;

    dfunction(body_type& body) : body(body){}

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7){
        return body.apply(a0, a1, a2, a3, a4, a5, a6, a7);
    }
};

template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct dfunction<TR, T0, T1, T2, T3, T4, T5, T6, __, __, __, __, __, __, __, __, __> : signature<TR, T0, T1, T2, T3, T4, T5, T6>
{
    typedef bodies::dfunction_body<TR, T0, T1, T2, T3, T4, T5, T6> body_type;

    body_type& body;

    dfunction(body_type& body) : body(body){}

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6){
        return body.apply(a0, a1, a2, a3, a4, a5, a6);
    }
};

template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5>
struct dfunction<TR, T0, T1, T2, T3, T4, T5, __, __, __, __, __, __, __, __, __, __> : signature<TR, T0, T1, T2, T3, T4, T5>
{
    typedef bodies::dfunction_body<TR, T0, T1, T2, T3, T4, T5> body_type;

    body_type& body;

    dfunction(body_type& body) : body(body){}

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5){
        return body.apply(a0, a1, a2, a3, a4, a5);
    }
};

template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4>
struct dfunction<TR, T0, T1, T2, T3, T4, __, __, __, __, __, __, __, __, __, __, __> : signature<TR, T0, T1, T2, T3, T4>
{
    typedef bodies::dfunction_body<TR, T0, T1, T2, T3, T4> body_type;

    body_type& body;

    dfunction(body_type& body) : body(body){}

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4){
        return body.apply(a0, a1, a2, a3, a4);
    }
};

template<typename TR, typename T0, typename T1, typename T2, typename T3>
struct dfunction<TR, T0, T1, T2, T3, __, __, __, __, __, __, __, __, __, __, __, __> : signature<TR, T0, T1, T2, T3>
{
    typedef bodies::dfunction_body<TR, T0, T1, T2, T3> body_type;

    body_type& body;

    dfunction(body_type& body) : body(body){}

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3){
        return body.apply(a0, a1, a2, a3);
    }
};

template<typename TR, typename T0, typename T1, typename T2>
struct dfunction<TR, T0, T1, T2, __, __, __, __, __, __, __, __, __, __, __, __, __> : signature<TR, T0, T1, T2>
{
    typedef bodies::dfunction_body<TR, T0, T1, T2> body_type;

    body_type& body;

    dfunction(body_type& body) : body(body){}

    inline TR operator()(T0 a0, T1 a1, T2 a2){
        return body.apply(a0, a1, a2);
    }
};

template<typename TR, typename T0, typename T1>
struct dfunction<TR, T0, T1, __, __, __, __, __, __, __, __, __, __, __, __, __, __> : signature<TR, T0, T1>
{
    typedef bodies::dfunction_body<TR, T0, T1> body_type;

    body_type& body;

    dfunction(body_type& body) : body(body){}

    inline TR operator()(T0 a0, T1 a1){
        return body.apply(a0, a1);
    }
};

template<typename TR, typename T0>
struct dfunction<TR, T0, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __> : signature<TR, T0>
{
    typedef bodies::dfunction_body<TR, T0> body_type;

    body_type& body;

    dfunction(body_type& body) : body(body){}

    inline TR operator()(T0 a0){
        return body.apply(a0);
    }
};

template<typename TR>
struct dfunction<TR, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __> : signature<TR>
{
    typedef bodies::dfunction_body<TR> body_type;

    body_type& body;

    dfunction(body_type& body) : body(body){}

    inline TR operator()(){
        return body.apply();
    }
};

// function ///////////////////////////////////////////////////////////////////
template<typename TCallable, typename TR, typename T0=__, typename T1=__, typename T2=__, typename T3=__, typename T4=__, typename T5=__, typename T6=__, typename T7=__, typename T8=__, typename T9=__, typename T10=__, typename T11=__, typename T12=__, typename T13=__, typename T14=__, typename T15=__>
struct function : signature<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15>
{
    typedef TCallable callable_type;
    TCallable callable;

    function(TCallable callable) : callable(callable){}

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10, T11 a11, T12 a12, T13 a13, T14 a14, T15 a15){
        return callable(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
    }

    inline operator dfunction<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15>(){
        return dfunction<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15>(
            *new bodies::dfunction_body_adatper<TCallable, TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15>(callable)
        );
    }
};

template<typename TCallable, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14>
struct function<TCallable, TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, __> : signature<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>
{
    typedef TCallable callable_type;
    TCallable callable;

    function(TCallable callable) : callable(callable){}

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10, T11 a11, T12 a12, T13 a13, T14 a14){
        return callable(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
    }

    inline operator dfunction<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>(){
        return dfunction<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>(
            *new bodies::dfunction_body_adatper<TCallable, TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>(callable)
        );
    }
};

template<typename TCallable, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
struct function<TCallable, TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, __, __> : signature<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13>
{
    typedef TCallable callable_type;
    TCallable callable;

    function(TCallable callable) : callable(callable){}

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10, T11 a11, T12 a12, T13 a13){
        return callable(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    }

    inline operator dfunction<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13>(){
        return dfunction<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13>(
            *new bodies::dfunction_body_adatper<TCallable, TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13>(callable)
        );
    }
};

template<typename TCallable, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
struct function<TCallable, TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, __, __, __> : signature<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12>
{
    typedef TCallable callable_type;
    TCallable callable;

    function(TCallable callable) : callable(callable){}

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10, T11 a11, T12 a12){
        return callable(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    }

    inline operator dfunction<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12>(){
        return dfunction<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12>(
            *new bodies::dfunction_body_adatper<TCallable, TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12>(callable)
        );
    }
};

template<typename TCallable, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
struct function<TCallable, TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, __, __, __, __> : signature<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11>
{
    typedef TCallable callable_type;
    TCallable callable;

    function(TCallable callable) : callable(callable){}

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10, T11 a11){
        return callable(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    }

    inline operator dfunction<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11>(){
        return dfunction<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11>(
            *new bodies::dfunction_body_adatper<TCallable, TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11>(callable)
        );
    }
};

template<typename TCallable, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
struct function<TCallable, TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, __, __, __, __, __> : signature<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>
{
    typedef TCallable callable_type;
    TCallable callable;

    function(TCallable callable) : callable(callable){}

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10){
        return callable(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    }

    inline operator dfunction<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>(){
        return dfunction<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>(
            *new bodies::dfunction_body_adatper<TCallable, TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>(callable)
        );
    }
};

template<typename TCallable, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9>
struct function<TCallable, TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, __, __, __, __, __, __> : signature<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9>
{
    typedef TCallable callable_type;
    TCallable callable;

    function(TCallable callable) : callable(callable){}

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9){
        return callable(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
    }

    inline operator dfunction<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9>(){
        return dfunction<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9>(
            *new bodies::dfunction_body_adatper<TCallable, TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9>(callable)
        );
    }
};

template<typename TCallable, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
struct function<TCallable, TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, __, __, __, __, __, __, __> : signature<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8>
{
    typedef TCallable callable_type;
    TCallable callable;

    function(TCallable callable) : callable(callable){}

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8){
        return callable(a0, a1, a2, a3, a4, a5, a6, a7, a8);
    }

    inline operator dfunction<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8>(){
        return dfunction<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8>(
            *new bodies::dfunction_body_adatper<TCallable, TR, T0, T1, T2, T3, T4, T5, T6, T7, T8>(callable)
        );
    }
};

template<typename TCallable, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct function<TCallable, TR, T0, T1, T2, T3, T4, T5, T6, T7, __, __, __, __, __, __, __, __> : signature<TR, T0, T1, T2, T3, T4, T5, T6, T7>
{
    typedef TCallable callable_type;
    TCallable callable;

    function(TCallable callable) : callable(callable){}

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7){
        return callable(a0, a1, a2, a3, a4, a5, a6, a7);
    }

    inline operator dfunction<TR, T0, T1, T2, T3, T4, T5, T6, T7>(){
        return dfunction<TR, T0, T1, T2, T3, T4, T5, T6, T7>(
            *new bodies::dfunction_body_adatper<TCallable, TR, T0, T1, T2, T3, T4, T5, T6, T7>(callable)
        );
    }
};

template<typename TCallable, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct function<TCallable, TR, T0, T1, T2, T3, T4, T5, T6, __, __, __, __, __, __, __, __, __> : signature<TR, T0, T1, T2, T3, T4, T5, T6>
{
    typedef TCallable callable_type;
    TCallable callable;

    function(TCallable callable) : callable(callable){}

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6){
        return callable(a0, a1, a2, a3, a4, a5, a6);
    }

    inline operator dfunction<TR, T0, T1, T2, T3, T4, T5, T6>(){
        return dfunction<TR, T0, T1, T2, T3, T4, T5, T6>(
            *new bodies::dfunction_body_adatper<TCallable, TR, T0, T1, T2, T3, T4, T5, T6>(callable)
        );
    }
};

template<typename TCallable, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5>
struct function<TCallable, TR, T0, T1, T2, T3, T4, T5, __, __, __, __, __, __, __, __, __, __> : signature<TR, T0, T1, T2, T3, T4, T5>
{
    typedef TCallable callable_type;
    TCallable callable;

    function(TCallable callable) : callable(callable){}

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5){
        return callable(a0, a1, a2, a3, a4, a5);
    }

    inline operator dfunction<TR, T0, T1, T2, T3, T4, T5>(){
        return dfunction<TR, T0, T1, T2, T3, T4, T5>(
            *new bodies::dfunction_body_adatper<TCallable, TR, T0, T1, T2, T3, T4, T5>(callable)
        );
    }
};

template<typename TCallable, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4>
struct function<TCallable, TR, T0, T1, T2, T3, T4, __, __, __, __, __, __, __, __, __, __, __> : signature<TR, T0, T1, T2, T3, T4>
{
    typedef TCallable callable_type;
    TCallable callable;

    function(TCallable callable) : callable(callable){}

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4){
        return callable(a0, a1, a2, a3, a4);
    }

    inline operator dfunction<TR, T0, T1, T2, T3, T4>(){
        return dfunction<TR, T0, T1, T2, T3, T4>(
            *new bodies::dfunction_body_adatper<TCallable, TR, T0, T1, T2, T3, T4>(callable)
        );
    }
};

template<typename TCallable, typename TR, typename T0, typename T1, typename T2, typename T3>
struct function<TCallable, TR, T0, T1, T2, T3, __, __, __, __, __, __, __, __, __, __, __, __> : signature<TR, T0, T1, T2, T3>
{
    typedef TCallable callable_type;
    TCallable callable;

    function(TCallable callable) : callable(callable){}

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3){
        return callable(a0, a1, a2, a3);
    }

    inline operator dfunction<TR, T0, T1, T2, T3>(){
        return dfunction<TR, T0, T1, T2, T3>(
            *new bodies::dfunction_body_adatper<TCallable, TR, T0, T1, T2, T3>(callable)
        );
    }
};

template<typename TCallable, typename TR, typename T0, typename T1, typename T2>
struct function<TCallable, TR, T0, T1, T2, __, __, __, __, __, __, __, __, __, __, __, __, __> : signature<TR, T0, T1, T2>
{
    typedef TCallable callable_type;
    TCallable callable;

    function(TCallable callable) : callable(callable){}

    inline TR operator()(T0 a0, T1 a1, T2 a2){
        return callable(a0, a1, a2);
    }

    inline operator dfunction<TR, T0, T1, T2>(){
        return dfunction<TR, T0, T1, T2>(
            *new bodies::dfunction_body_adatper<TCallable, TR, T0, T1, T2>(callable)
        );
    }
};

template<typename TCallable, typename TR, typename T0, typename T1>
struct function<TCallable, TR, T0, T1, __, __, __, __, __, __, __, __, __, __, __, __, __, __> : signature<TR, T0, T1>
{
    typedef TCallable callable_type;
    TCallable callable;

    function(TCallable callable) : callable(callable){}

    inline TR operator()(T0 a0, T1 a1){
        return callable(a0, a1);
    }

    inline operator dfunction<TR, T0, T1>(){
        return dfunction<TR, T0, T1>(
            *new bodies::dfunction_body_adatper<TCallable, TR, T0, T1>(callable)
        );
    }
};

template<typename TCallable, typename TR, typename T0>
struct function<TCallable, TR, T0, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __> : signature<TR, T0>
{
    typedef TCallable callable_type;
    TCallable callable;

    function(TCallable callable) : callable(callable){}

    inline TR operator()(T0 a0){
        return callable(a0);
    }

    inline operator dfunction<TR, T0>(){
        return dfunction<TR, T0>(
            *new bodies::dfunction_body_adatper<TCallable, TR, T0>(callable)
        );
    }
};

template<typename TCallable, typename TR>
struct function<TCallable, TR, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __, __> : signature<TR>
{
    typedef TCallable callable_type;
    TCallable callable;

    function(TCallable callable) : callable(callable){}

    inline TR operator()(){
        return callable();
    }

    inline operator dfunction<TR>(){
        return dfunction<TR>(
            *new bodies::dfunction_body_adatper<TCallable, TR>(callable)
        );
    }
};

namespace details{

// details::function_selector /////////////////////////////////////////////////

template<typename TCallable, typename TSignature, size_t TParameters>
struct function_selector;

template<typename TCallable, typename TSignature>
struct function_selector<TCallable, TSignature, 16>{
    typedef function<TCallable, typename TSignature::return_type, typename TSignature::parameter0_type, typename TSignature::parameter1_type, typename TSignature::parameter2_type, typename TSignature::parameter3_type, typename TSignature::parameter4_type, typename TSignature::parameter5_type, typename TSignature::parameter6_type, typename TSignature::parameter7_type, typename TSignature::parameter8_type, typename TSignature::parameter9_type, typename TSignature::parameter10_type, typename TSignature::parameter11_type, typename TSignature::parameter12_type, typename TSignature::parameter13_type, typename TSignature::parameter14_type, typename TSignature::parameter15_type> function_type;
};
template<typename TCallable, typename TSignature>
struct function_selector<TCallable, TSignature, 15>{
    typedef function<TCallable, typename TSignature::return_type, typename TSignature::parameter0_type, typename TSignature::parameter1_type, typename TSignature::parameter2_type, typename TSignature::parameter3_type, typename TSignature::parameter4_type, typename TSignature::parameter5_type, typename TSignature::parameter6_type, typename TSignature::parameter7_type, typename TSignature::parameter8_type, typename TSignature::parameter9_type, typename TSignature::parameter10_type, typename TSignature::parameter11_type, typename TSignature::parameter12_type, typename TSignature::parameter13_type, typename TSignature::parameter14_type> function_type;
};
template<typename TCallable, typename TSignature>
struct function_selector<TCallable, TSignature, 14>{
    typedef function<TCallable, typename TSignature::return_type, typename TSignature::parameter0_type, typename TSignature::parameter1_type, typename TSignature::parameter2_type, typename TSignature::parameter3_type, typename TSignature::parameter4_type, typename TSignature::parameter5_type, typename TSignature::parameter6_type, typename TSignature::parameter7_type, typename TSignature::parameter8_type, typename TSignature::parameter9_type, typename TSignature::parameter10_type, typename TSignature::parameter11_type, typename TSignature::parameter12_type, typename TSignature::parameter13_type> function_type;
};
template<typename TCallable, typename TSignature>
struct function_selector<TCallable, TSignature, 13>{
    typedef function<TCallable, typename TSignature::return_type, typename TSignature::parameter0_type, typename TSignature::parameter1_type, typename TSignature::parameter2_type, typename TSignature::parameter3_type, typename TSignature::parameter4_type, typename TSignature::parameter5_type, typename TSignature::parameter6_type, typename TSignature::parameter7_type, typename TSignature::parameter8_type, typename TSignature::parameter9_type, typename TSignature::parameter10_type, typename TSignature::parameter11_type, typename TSignature::parameter12_type> function_type;
};
template<typename TCallable, typename TSignature>
struct function_selector<TCallable, TSignature, 12>{
    typedef function<TCallable, typename TSignature::return_type, typename TSignature::parameter0_type, typename TSignature::parameter1_type, typename TSignature::parameter2_type, typename TSignature::parameter3_type, typename TSignature::parameter4_type, typename TSignature::parameter5_type, typename TSignature::parameter6_type, typename TSignature::parameter7_type, typename TSignature::parameter8_type, typename TSignature::parameter9_type, typename TSignature::parameter10_type, typename TSignature::parameter11_type> function_type;
};
template<typename TCallable, typename TSignature>
struct function_selector<TCallable, TSignature, 11>{
    typedef function<TCallable, typename TSignature::return_type, typename TSignature::parameter0_type, typename TSignature::parameter1_type, typename TSignature::parameter2_type, typename TSignature::parameter3_type, typename TSignature::parameter4_type, typename TSignature::parameter5_type, typename TSignature::parameter6_type, typename TSignature::parameter7_type, typename TSignature::parameter8_type, typename TSignature::parameter9_type, typename TSignature::parameter10_type> function_type;
};
template<typename TCallable, typename TSignature>
struct function_selector<TCallable, TSignature, 10>{
    typedef function<TCallable, typename TSignature::return_type, typename TSignature::parameter0_type, typename TSignature::parameter1_type, typename TSignature::parameter2_type, typename TSignature::parameter3_type, typename TSignature::parameter4_type, typename TSignature::parameter5_type, typename TSignature::parameter6_type, typename TSignature::parameter7_type, typename TSignature::parameter8_type, typename TSignature::parameter9_type> function_type;
};
template<typename TCallable, typename TSignature>
struct function_selector<TCallable, TSignature, 9>{
    typedef function<TCallable, typename TSignature::return_type, typename TSignature::parameter0_type, typename TSignature::parameter1_type, typename TSignature::parameter2_type, typename TSignature::parameter3_type, typename TSignature::parameter4_type, typename TSignature::parameter5_type, typename TSignature::parameter6_type, typename TSignature::parameter7_type, typename TSignature::parameter8_type> function_type;
};
template<typename TCallable, typename TSignature>
struct function_selector<TCallable, TSignature, 8>{
    typedef function<TCallable, typename TSignature::return_type, typename TSignature::parameter0_type, typename TSignature::parameter1_type, typename TSignature::parameter2_type, typename TSignature::parameter3_type, typename TSignature::parameter4_type, typename TSignature::parameter5_type, typename TSignature::parameter6_type, typename TSignature::parameter7_type> function_type;
};
template<typename TCallable, typename TSignature>
struct function_selector<TCallable, TSignature, 7>{
    typedef function<TCallable, typename TSignature::return_type, typename TSignature::parameter0_type, typename TSignature::parameter1_type, typename TSignature::parameter2_type, typename TSignature::parameter3_type, typename TSignature::parameter4_type, typename TSignature::parameter5_type, typename TSignature::parameter6_type> function_type;
};
template<typename TCallable, typename TSignature>
struct function_selector<TCallable, TSignature, 6>{
    typedef function<TCallable, typename TSignature::return_type, typename TSignature::parameter0_type, typename TSignature::parameter1_type, typename TSignature::parameter2_type, typename TSignature::parameter3_type, typename TSignature::parameter4_type, typename TSignature::parameter5_type> function_type;
};
template<typename TCallable, typename TSignature>
struct function_selector<TCallable, TSignature, 5>{
    typedef function<TCallable, typename TSignature::return_type, typename TSignature::parameter0_type, typename TSignature::parameter1_type, typename TSignature::parameter2_type, typename TSignature::parameter3_type, typename TSignature::parameter4_type> function_type;
};
template<typename TCallable, typename TSignature>
struct function_selector<TCallable, TSignature, 4>{
    typedef function<TCallable, typename TSignature::return_type, typename TSignature::parameter0_type, typename TSignature::parameter1_type, typename TSignature::parameter2_type, typename TSignature::parameter3_type> function_type;
};
template<typename TCallable, typename TSignature>
struct function_selector<TCallable, TSignature, 3>{
    typedef function<TCallable, typename TSignature::return_type, typename TSignature::parameter0_type, typename TSignature::parameter1_type, typename TSignature::parameter2_type> function_type;
};
template<typename TCallable, typename TSignature>
struct function_selector<TCallable, TSignature, 2>{
    typedef function<TCallable, typename TSignature::return_type, typename TSignature::parameter0_type, typename TSignature::parameter1_type> function_type;
};
template<typename TCallable, typename TSignature>
struct function_selector<TCallable, TSignature, 1>{
    typedef function<TCallable, typename TSignature::return_type, typename TSignature::parameter0_type> function_type;
};
template<typename TCallable, typename TSignature>
struct function_selector<TCallable, TSignature, 0>{
    typedef function<TCallable, typename TSignature::return_type> function_type;
};
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
