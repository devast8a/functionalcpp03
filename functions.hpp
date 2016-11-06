#ifndef FUNCTIONALCPP__FUNCTION__HPP
#define FUNCTIONALCPP__FUNCTION__HPP

#include "function_signature.hpp"

namespace functionalcpp { namespace functions {

/*
 * Function bodies contain the implementation of a function object.
 */
namespace bodies{
template<typename TR> struct dfunc0_body : signatures::fsig0<TR>{
    virtual TR apply() = 0;
};

template<typename TFunc, typename TR> struct dfunc0_body_adapter : dfunc0_body<TR>{
    TFunc func;

    dfunc0_body_adapter(TFunc func) : func(func){}

    inline TR apply(){
        return func.apply();
    }
};

template<typename TR, typename T0> struct dfunc1_body : signatures::fsig1<TR, T0>{
    virtual TR apply(T0 a0) = 0;
};

template<typename TFunc, typename TR, typename T0> struct dfunc1_body_adapter : dfunc1_body<TR, T0>{
    TFunc func;

    dfunc1_body_adapter(TFunc func) : func(func){}

    inline TR apply(T0 a0){
        return func.apply(a0);
    }
};

template<typename TR, typename T0, typename T1> struct dfunc2_body : signatures::fsig2<TR, T0, T1>{
    virtual TR apply(T0 a0, T1 a1) = 0;
};

template<typename TFunc, typename TR, typename T0, typename T1> struct dfunc2_body_adapter : dfunc2_body<TR, T0, T1>{
    TFunc func;

    dfunc2_body_adapter(TFunc func) : func(func){}

    inline TR apply(T0 a0, T1 a1){
        return func.apply(a0, a1);
    }
};

template<typename TR, typename T0, typename T1, typename T2> struct dfunc3_body : signatures::fsig3<TR, T0, T1, T2>{
    virtual TR apply(T0 a0, T1 a1, T2 a2) = 0;
};

template<typename TFunc, typename TR, typename T0, typename T1, typename T2> struct dfunc3_body_adapter : dfunc3_body<TR, T0, T1, T2>{
    TFunc func;

    dfunc3_body_adapter(TFunc func) : func(func){}

    inline TR apply(T0 a0, T1 a1, T2 a2){
        return func.apply(a0, a1, a2);
    }
};

template<typename TR, typename T0, typename T1, typename T2, typename T3> struct dfunc4_body : signatures::fsig4<TR, T0, T1, T2, T3>{
    virtual TR apply(T0 a0, T1 a1, T2 a2, T3 a3) = 0;
};

template<typename TFunc, typename TR, typename T0, typename T1, typename T2, typename T3> struct dfunc4_body_adapter : dfunc4_body<TR, T0, T1, T2, T3>{
    TFunc func;

    dfunc4_body_adapter(TFunc func) : func(func){}

    inline TR apply(T0 a0, T1 a1, T2 a2, T3 a3){
        return func.apply(a0, a1, a2, a3);
    }
};

template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4> struct dfunc5_body : signatures::fsig5<TR, T0, T1, T2, T3, T4>{
    virtual TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4) = 0;
};

template<typename TFunc, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4> struct dfunc5_body_adapter : dfunc5_body<TR, T0, T1, T2, T3, T4>{
    TFunc func;

    dfunc5_body_adapter(TFunc func) : func(func){}

    inline TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4){
        return func.apply(a0, a1, a2, a3, a4);
    }
};

template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5> struct dfunc6_body : signatures::fsig6<TR, T0, T1, T2, T3, T4, T5>{
    virtual TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5) = 0;
};

template<typename TFunc, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5> struct dfunc6_body_adapter : dfunc6_body<TR, T0, T1, T2, T3, T4, T5>{
    TFunc func;

    dfunc6_body_adapter(TFunc func) : func(func){}

    inline TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5){
        return func.apply(a0, a1, a2, a3, a4, a5);
    }
};

template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> struct dfunc7_body : signatures::fsig7<TR, T0, T1, T2, T3, T4, T5, T6>{
    virtual TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6) = 0;
};

template<typename TFunc, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> struct dfunc7_body_adapter : dfunc7_body<TR, T0, T1, T2, T3, T4, T5, T6>{
    TFunc func;

    dfunc7_body_adapter(TFunc func) : func(func){}

    inline TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6){
        return func.apply(a0, a1, a2, a3, a4, a5, a6);
    }
};

template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> struct dfunc8_body : signatures::fsig8<TR, T0, T1, T2, T3, T4, T5, T6, T7>{
    virtual TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7) = 0;
};

template<typename TFunc, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> struct dfunc8_body_adapter : dfunc8_body<TR, T0, T1, T2, T3, T4, T5, T6, T7>{
    TFunc func;

    dfunc8_body_adapter(TFunc func) : func(func){}

    inline TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7){
        return func.apply(a0, a1, a2, a3, a4, a5, a6, a7);
    }
};

template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8> struct dfunc9_body : signatures::fsig9<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8>{
    virtual TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8) = 0;
};

template<typename TFunc, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8> struct dfunc9_body_adapter : dfunc9_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8>{
    TFunc func;

    dfunc9_body_adapter(TFunc func) : func(func){}

    inline TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8){
        return func.apply(a0, a1, a2, a3, a4, a5, a6, a7, a8);
    }
};

template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9> struct dfunc10_body : signatures::fsig10<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9>{
    virtual TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9) = 0;
};

template<typename TFunc, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9> struct dfunc10_body_adapter : dfunc10_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9>{
    TFunc func;

    dfunc10_body_adapter(TFunc func) : func(func){}

    inline TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9){
        return func.apply(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
    }
};

template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10> struct dfunc11_body : signatures::fsig11<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>{
    virtual TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10) = 0;
};

template<typename TFunc, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10> struct dfunc11_body_adapter : dfunc11_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>{
    TFunc func;

    dfunc11_body_adapter(TFunc func) : func(func){}

    inline TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10){
        return func.apply(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    }
};

template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11> struct dfunc12_body : signatures::fsig12<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11>{
    virtual TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10, T11 a11) = 0;
};

template<typename TFunc, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11> struct dfunc12_body_adapter : dfunc12_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11>{
    TFunc func;

    dfunc12_body_adapter(TFunc func) : func(func){}

    inline TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10, T11 a11){
        return func.apply(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    }
};

template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12> struct dfunc13_body : signatures::fsig13<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12>{
    virtual TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10, T11 a11, T12 a12) = 0;
};

template<typename TFunc, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12> struct dfunc13_body_adapter : dfunc13_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12>{
    TFunc func;

    dfunc13_body_adapter(TFunc func) : func(func){}

    inline TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10, T11 a11, T12 a12){
        return func.apply(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    }
};

template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13> struct dfunc14_body : signatures::fsig14<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13>{
    virtual TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10, T11 a11, T12 a12, T13 a13) = 0;
};

template<typename TFunc, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13> struct dfunc14_body_adapter : dfunc14_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13>{
    TFunc func;

    dfunc14_body_adapter(TFunc func) : func(func){}

    inline TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10, T11 a11, T12 a12, T13 a13){
        return func.apply(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    }
};

template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14> struct dfunc15_body : signatures::fsig15<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>{
    virtual TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10, T11 a11, T12 a12, T13 a13, T14 a14) = 0;
};

template<typename TFunc, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14> struct dfunc15_body_adapter : dfunc15_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>{
    TFunc func;

    dfunc15_body_adapter(TFunc func) : func(func){}

    inline TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10, T11 a11, T12 a12, T13 a13, T14 a14){
        return func.apply(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
    }
};

template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15> struct dfunc16_body : signatures::fsig16<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15>{
    virtual TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10, T11 a11, T12 a12, T13 a13, T14 a14, T15 a15) = 0;
};

template<typename TFunc, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15> struct dfunc16_body_adapter : dfunc16_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15>{
    TFunc func;

    dfunc16_body_adapter(TFunc func) : func(func){}

    inline TR apply(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10, T11 a11, T12 a12, T13 a13, T14 a14, T15 a15){
        return func.apply(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
    }
};

} // namespace bodies

template<typename TR> struct dfunc0 : signatures::fsig0<TR>{
    bodies::dfunc0_body<TR>& func;

    inline TR operator()(){
        return func.apply();
    }

    dfunc0(bodies::dfunc0_body<TR>& func) : func(func){}
};

template<typename TFunc, typename TR> struct func0 : signatures::fsig0<TR>{
    typedef TFunc function_type;
    TFunc function;

    func0(TFunc function) : function(function){}

    inline TR operator()(){
        return function.apply();
    }

    operator dfunc0<TR>(){
        return dfunc0<TR>(
            *new bodies::dfunc0_body_adapter<TFunc, TR>(function)
        );
    }
};

template<typename TR, typename T0> struct dfunc1 : signatures::fsig1<TR, T0>{
    bodies::dfunc1_body<TR, T0>& func;

    inline TR operator()(T0 a0){
        return func.apply(a0);
    }

    dfunc1(bodies::dfunc1_body<TR, T0>& func) : func(func){}
};

template<typename TFunc, typename TR, typename T0> struct func1 : signatures::fsig1<TR, T0>{
    typedef TFunc function_type;
    TFunc function;

    func1(TFunc function) : function(function){}

    inline TR operator()(T0 a0){
        return function.apply(a0);
    }

    operator dfunc1<TR, T0>(){
        return dfunc1<TR, T0>(
            *new bodies::dfunc1_body_adapter<TFunc, TR, T0>(function)
        );
    }
};

template<typename TR, typename T0, typename T1> struct dfunc2 : signatures::fsig2<TR, T0, T1>{
    bodies::dfunc2_body<TR, T0, T1>& func;

    inline TR operator()(T0 a0, T1 a1){
        return func.apply(a0, a1);
    }

    dfunc2(bodies::dfunc2_body<TR, T0, T1>& func) : func(func){}
};

template<typename TFunc, typename TR, typename T0, typename T1> struct func2 : signatures::fsig2<TR, T0, T1>{
    typedef TFunc function_type;
    TFunc function;

    func2(TFunc function) : function(function){}

    inline TR operator()(T0 a0, T1 a1){
        return function.apply(a0, a1);
    }

    operator dfunc2<TR, T0, T1>(){
        return dfunc2<TR, T0, T1>(
            *new bodies::dfunc2_body_adapter<TFunc, TR, T0, T1>(function)
        );
    }
};

template<typename TR, typename T0, typename T1, typename T2> struct dfunc3 : signatures::fsig3<TR, T0, T1, T2>{
    bodies::dfunc3_body<TR, T0, T1, T2>& func;

    inline TR operator()(T0 a0, T1 a1, T2 a2){
        return func.apply(a0, a1, a2);
    }

    dfunc3(bodies::dfunc3_body<TR, T0, T1, T2>& func) : func(func){}
};

template<typename TFunc, typename TR, typename T0, typename T1, typename T2> struct func3 : signatures::fsig3<TR, T0, T1, T2>{
    typedef TFunc function_type;
    TFunc function;

    func3(TFunc function) : function(function){}

    inline TR operator()(T0 a0, T1 a1, T2 a2){
        return function.apply(a0, a1, a2);
    }

    operator dfunc3<TR, T0, T1, T2>(){
        return dfunc3<TR, T0, T1, T2>(
            *new bodies::dfunc3_body_adapter<TFunc, TR, T0, T1, T2>(function)
        );
    }
};

template<typename TR, typename T0, typename T1, typename T2, typename T3> struct dfunc4 : signatures::fsig4<TR, T0, T1, T2, T3>{
    bodies::dfunc4_body<TR, T0, T1, T2, T3>& func;

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3){
        return func.apply(a0, a1, a2, a3);
    }

    dfunc4(bodies::dfunc4_body<TR, T0, T1, T2, T3>& func) : func(func){}
};

template<typename TFunc, typename TR, typename T0, typename T1, typename T2, typename T3> struct func4 : signatures::fsig4<TR, T0, T1, T2, T3>{
    typedef TFunc function_type;
    TFunc function;

    func4(TFunc function) : function(function){}

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3){
        return function.apply(a0, a1, a2, a3);
    }

    operator dfunc4<TR, T0, T1, T2, T3>(){
        return dfunc4<TR, T0, T1, T2, T3>(
            *new bodies::dfunc4_body_adapter<TFunc, TR, T0, T1, T2, T3>(function)
        );
    }
};

template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4> struct dfunc5 : signatures::fsig5<TR, T0, T1, T2, T3, T4>{
    bodies::dfunc5_body<TR, T0, T1, T2, T3, T4>& func;

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4){
        return func.apply(a0, a1, a2, a3, a4);
    }

    dfunc5(bodies::dfunc5_body<TR, T0, T1, T2, T3, T4>& func) : func(func){}
};

template<typename TFunc, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4> struct func5 : signatures::fsig5<TR, T0, T1, T2, T3, T4>{
    typedef TFunc function_type;
    TFunc function;

    func5(TFunc function) : function(function){}

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4){
        return function.apply(a0, a1, a2, a3, a4);
    }

    operator dfunc5<TR, T0, T1, T2, T3, T4>(){
        return dfunc5<TR, T0, T1, T2, T3, T4>(
            *new bodies::dfunc5_body_adapter<TFunc, TR, T0, T1, T2, T3, T4>(function)
        );
    }
};

template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5> struct dfunc6 : signatures::fsig6<TR, T0, T1, T2, T3, T4, T5>{
    bodies::dfunc6_body<TR, T0, T1, T2, T3, T4, T5>& func;

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5){
        return func.apply(a0, a1, a2, a3, a4, a5);
    }

    dfunc6(bodies::dfunc6_body<TR, T0, T1, T2, T3, T4, T5>& func) : func(func){}
};

template<typename TFunc, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5> struct func6 : signatures::fsig6<TR, T0, T1, T2, T3, T4, T5>{
    typedef TFunc function_type;
    TFunc function;

    func6(TFunc function) : function(function){}

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5){
        return function.apply(a0, a1, a2, a3, a4, a5);
    }

    operator dfunc6<TR, T0, T1, T2, T3, T4, T5>(){
        return dfunc6<TR, T0, T1, T2, T3, T4, T5>(
            *new bodies::dfunc6_body_adapter<TFunc, TR, T0, T1, T2, T3, T4, T5>(function)
        );
    }
};

template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> struct dfunc7 : signatures::fsig7<TR, T0, T1, T2, T3, T4, T5, T6>{
    bodies::dfunc7_body<TR, T0, T1, T2, T3, T4, T5, T6>& func;

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6){
        return func.apply(a0, a1, a2, a3, a4, a5, a6);
    }

    dfunc7(bodies::dfunc7_body<TR, T0, T1, T2, T3, T4, T5, T6>& func) : func(func){}
};

template<typename TFunc, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> struct func7 : signatures::fsig7<TR, T0, T1, T2, T3, T4, T5, T6>{
    typedef TFunc function_type;
    TFunc function;

    func7(TFunc function) : function(function){}

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6){
        return function.apply(a0, a1, a2, a3, a4, a5, a6);
    }

    operator dfunc7<TR, T0, T1, T2, T3, T4, T5, T6>(){
        return dfunc7<TR, T0, T1, T2, T3, T4, T5, T6>(
            *new bodies::dfunc7_body_adapter<TFunc, TR, T0, T1, T2, T3, T4, T5, T6>(function)
        );
    }
};

template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> struct dfunc8 : signatures::fsig8<TR, T0, T1, T2, T3, T4, T5, T6, T7>{
    bodies::dfunc8_body<TR, T0, T1, T2, T3, T4, T5, T6, T7>& func;

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7){
        return func.apply(a0, a1, a2, a3, a4, a5, a6, a7);
    }

    dfunc8(bodies::dfunc8_body<TR, T0, T1, T2, T3, T4, T5, T6, T7>& func) : func(func){}
};

template<typename TFunc, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> struct func8 : signatures::fsig8<TR, T0, T1, T2, T3, T4, T5, T6, T7>{
    typedef TFunc function_type;
    TFunc function;

    func8(TFunc function) : function(function){}

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7){
        return function.apply(a0, a1, a2, a3, a4, a5, a6, a7);
    }

    operator dfunc8<TR, T0, T1, T2, T3, T4, T5, T6, T7>(){
        return dfunc8<TR, T0, T1, T2, T3, T4, T5, T6, T7>(
            *new bodies::dfunc8_body_adapter<TFunc, TR, T0, T1, T2, T3, T4, T5, T6, T7>(function)
        );
    }
};

template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8> struct dfunc9 : signatures::fsig9<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8>{
    bodies::dfunc9_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8>& func;

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8){
        return func.apply(a0, a1, a2, a3, a4, a5, a6, a7, a8);
    }

    dfunc9(bodies::dfunc9_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8>& func) : func(func){}
};

template<typename TFunc, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8> struct func9 : signatures::fsig9<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8>{
    typedef TFunc function_type;
    TFunc function;

    func9(TFunc function) : function(function){}

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8){
        return function.apply(a0, a1, a2, a3, a4, a5, a6, a7, a8);
    }

    operator dfunc9<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8>(){
        return dfunc9<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8>(
            *new bodies::dfunc9_body_adapter<TFunc, TR, T0, T1, T2, T3, T4, T5, T6, T7, T8>(function)
        );
    }
};

template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9> struct dfunc10 : signatures::fsig10<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9>{
    bodies::dfunc10_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9>& func;

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9){
        return func.apply(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
    }

    dfunc10(bodies::dfunc10_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9>& func) : func(func){}
};

template<typename TFunc, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9> struct func10 : signatures::fsig10<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9>{
    typedef TFunc function_type;
    TFunc function;

    func10(TFunc function) : function(function){}

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9){
        return function.apply(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
    }

    operator dfunc10<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9>(){
        return dfunc10<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9>(
            *new bodies::dfunc10_body_adapter<TFunc, TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9>(function)
        );
    }
};

template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10> struct dfunc11 : signatures::fsig11<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>{
    bodies::dfunc11_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>& func;

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10){
        return func.apply(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    }

    dfunc11(bodies::dfunc11_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>& func) : func(func){}
};

template<typename TFunc, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10> struct func11 : signatures::fsig11<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>{
    typedef TFunc function_type;
    TFunc function;

    func11(TFunc function) : function(function){}

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10){
        return function.apply(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    }

    operator dfunc11<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>(){
        return dfunc11<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>(
            *new bodies::dfunc11_body_adapter<TFunc, TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>(function)
        );
    }
};

template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11> struct dfunc12 : signatures::fsig12<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11>{
    bodies::dfunc12_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11>& func;

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10, T11 a11){
        return func.apply(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    }

    dfunc12(bodies::dfunc12_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11>& func) : func(func){}
};

template<typename TFunc, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11> struct func12 : signatures::fsig12<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11>{
    typedef TFunc function_type;
    TFunc function;

    func12(TFunc function) : function(function){}

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10, T11 a11){
        return function.apply(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    }

    operator dfunc12<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11>(){
        return dfunc12<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11>(
            *new bodies::dfunc12_body_adapter<TFunc, TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11>(function)
        );
    }
};

template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12> struct dfunc13 : signatures::fsig13<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12>{
    bodies::dfunc13_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12>& func;

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10, T11 a11, T12 a12){
        return func.apply(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    }

    dfunc13(bodies::dfunc13_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12>& func) : func(func){}
};

template<typename TFunc, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12> struct func13 : signatures::fsig13<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12>{
    typedef TFunc function_type;
    TFunc function;

    func13(TFunc function) : function(function){}

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10, T11 a11, T12 a12){
        return function.apply(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
    }

    operator dfunc13<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12>(){
        return dfunc13<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12>(
            *new bodies::dfunc13_body_adapter<TFunc, TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12>(function)
        );
    }
};

template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13> struct dfunc14 : signatures::fsig14<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13>{
    bodies::dfunc14_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13>& func;

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10, T11 a11, T12 a12, T13 a13){
        return func.apply(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    }

    dfunc14(bodies::dfunc14_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13>& func) : func(func){}
};

template<typename TFunc, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13> struct func14 : signatures::fsig14<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13>{
    typedef TFunc function_type;
    TFunc function;

    func14(TFunc function) : function(function){}

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10, T11 a11, T12 a12, T13 a13){
        return function.apply(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
    }

    operator dfunc14<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13>(){
        return dfunc14<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13>(
            *new bodies::dfunc14_body_adapter<TFunc, TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13>(function)
        );
    }
};

template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14> struct dfunc15 : signatures::fsig15<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>{
    bodies::dfunc15_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>& func;

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10, T11 a11, T12 a12, T13 a13, T14 a14){
        return func.apply(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
    }

    dfunc15(bodies::dfunc15_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>& func) : func(func){}
};

template<typename TFunc, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14> struct func15 : signatures::fsig15<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>{
    typedef TFunc function_type;
    TFunc function;

    func15(TFunc function) : function(function){}

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10, T11 a11, T12 a12, T13 a13, T14 a14){
        return function.apply(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
    }

    operator dfunc15<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>(){
        return dfunc15<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>(
            *new bodies::dfunc15_body_adapter<TFunc, TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>(function)
        );
    }
};

template<typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15> struct dfunc16 : signatures::fsig16<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15>{
    bodies::dfunc16_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15>& func;

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10, T11 a11, T12 a12, T13 a13, T14 a14, T15 a15){
        return func.apply(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
    }

    dfunc16(bodies::dfunc16_body<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15>& func) : func(func){}
};

template<typename TFunc, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15> struct func16 : signatures::fsig16<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15>{
    typedef TFunc function_type;
    TFunc function;

    func16(TFunc function) : function(function){}

    inline TR operator()(T0 a0, T1 a1, T2 a2, T3 a3, T4 a4, T5 a5, T6 a6, T7 a7, T8 a8, T9 a9, T10 a10, T11 a11, T12 a12, T13 a13, T14 a14, T15 a15){
        return function.apply(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
    }

    operator dfunc16<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15>(){
        return dfunc16<TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15>(
            *new bodies::dfunc16_body_adapter<TFunc, TR, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15>(function)
        );
    }
};

namespace details {
template<size_t TParams, typename TFunc, typename TSig> struct d_func_traits{};
template<typename TFunc, typename TSig> struct d_func_traits<0, TFunc, TSig>{
    typedef func0<TFunc, typename TSig::return_type> function_type;
    typedef dfunc0<typename TSig::return_type> dfunction_type;
};
template<typename TFunc, typename TSig> struct d_func_traits<1, TFunc, TSig>{
    typedef func1<TFunc, typename TSig::return_type, typename TSig::parameter0_type> function_type;
    typedef dfunc1<typename TSig::return_type, typename TSig::parameter0_type> dfunction_type;
};
template<typename TFunc, typename TSig> struct d_func_traits<2, TFunc, TSig>{
    typedef func2<TFunc, typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type> function_type;
    typedef dfunc2<typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type> dfunction_type;
};
template<typename TFunc, typename TSig> struct d_func_traits<3, TFunc, TSig>{
    typedef func3<TFunc, typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type> function_type;
    typedef dfunc3<typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type> dfunction_type;
};
template<typename TFunc, typename TSig> struct d_func_traits<4, TFunc, TSig>{
    typedef func4<TFunc, typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type> function_type;
    typedef dfunc4<typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type> dfunction_type;
};
template<typename TFunc, typename TSig> struct d_func_traits<5, TFunc, TSig>{
    typedef func5<TFunc, typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type> function_type;
    typedef dfunc5<typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type> dfunction_type;
};
template<typename TFunc, typename TSig> struct d_func_traits<6, TFunc, TSig>{
    typedef func6<TFunc, typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type> function_type;
    typedef dfunc6<typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type> dfunction_type;
};
template<typename TFunc, typename TSig> struct d_func_traits<7, TFunc, TSig>{
    typedef func7<TFunc, typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type> function_type;
    typedef dfunc7<typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type> dfunction_type;
};
template<typename TFunc, typename TSig> struct d_func_traits<8, TFunc, TSig>{
    typedef func8<TFunc, typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type, typename TSig::parameter7_type> function_type;
    typedef dfunc8<typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type, typename TSig::parameter7_type> dfunction_type;
};
template<typename TFunc, typename TSig> struct d_func_traits<9, TFunc, TSig>{
    typedef func9<TFunc, typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type, typename TSig::parameter7_type, typename TSig::parameter8_type> function_type;
    typedef dfunc9<typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type, typename TSig::parameter7_type, typename TSig::parameter8_type> dfunction_type;
};
template<typename TFunc, typename TSig> struct d_func_traits<10, TFunc, TSig>{
    typedef func10<TFunc, typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type, typename TSig::parameter7_type, typename TSig::parameter8_type, typename TSig::parameter9_type> function_type;
    typedef dfunc10<typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type, typename TSig::parameter7_type, typename TSig::parameter8_type, typename TSig::parameter9_type> dfunction_type;
};
template<typename TFunc, typename TSig> struct d_func_traits<11, TFunc, TSig>{
    typedef func11<TFunc, typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type, typename TSig::parameter7_type, typename TSig::parameter8_type, typename TSig::parameter9_type, typename TSig::parameter10_type> function_type;
    typedef dfunc11<typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type, typename TSig::parameter7_type, typename TSig::parameter8_type, typename TSig::parameter9_type, typename TSig::parameter10_type> dfunction_type;
};
template<typename TFunc, typename TSig> struct d_func_traits<12, TFunc, TSig>{
    typedef func12<TFunc, typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type, typename TSig::parameter7_type, typename TSig::parameter8_type, typename TSig::parameter9_type, typename TSig::parameter10_type, typename TSig::parameter11_type> function_type;
    typedef dfunc12<typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type, typename TSig::parameter7_type, typename TSig::parameter8_type, typename TSig::parameter9_type, typename TSig::parameter10_type, typename TSig::parameter11_type> dfunction_type;
};
template<typename TFunc, typename TSig> struct d_func_traits<13, TFunc, TSig>{
    typedef func13<TFunc, typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type, typename TSig::parameter7_type, typename TSig::parameter8_type, typename TSig::parameter9_type, typename TSig::parameter10_type, typename TSig::parameter11_type, typename TSig::parameter12_type> function_type;
    typedef dfunc13<typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type, typename TSig::parameter7_type, typename TSig::parameter8_type, typename TSig::parameter9_type, typename TSig::parameter10_type, typename TSig::parameter11_type, typename TSig::parameter12_type> dfunction_type;
};
template<typename TFunc, typename TSig> struct d_func_traits<14, TFunc, TSig>{
    typedef func14<TFunc, typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type, typename TSig::parameter7_type, typename TSig::parameter8_type, typename TSig::parameter9_type, typename TSig::parameter10_type, typename TSig::parameter11_type, typename TSig::parameter12_type, typename TSig::parameter13_type> function_type;
    typedef dfunc14<typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type, typename TSig::parameter7_type, typename TSig::parameter8_type, typename TSig::parameter9_type, typename TSig::parameter10_type, typename TSig::parameter11_type, typename TSig::parameter12_type, typename TSig::parameter13_type> dfunction_type;
};
template<typename TFunc, typename TSig> struct d_func_traits<15, TFunc, TSig>{
    typedef func15<TFunc, typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type, typename TSig::parameter7_type, typename TSig::parameter8_type, typename TSig::parameter9_type, typename TSig::parameter10_type, typename TSig::parameter11_type, typename TSig::parameter12_type, typename TSig::parameter13_type, typename TSig::parameter14_type> function_type;
    typedef dfunc15<typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type, typename TSig::parameter7_type, typename TSig::parameter8_type, typename TSig::parameter9_type, typename TSig::parameter10_type, typename TSig::parameter11_type, typename TSig::parameter12_type, typename TSig::parameter13_type, typename TSig::parameter14_type> dfunction_type;
};
template<typename TFunc, typename TSig> struct d_func_traits<16, TFunc, TSig>{
    typedef func16<TFunc, typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type, typename TSig::parameter7_type, typename TSig::parameter8_type, typename TSig::parameter9_type, typename TSig::parameter10_type, typename TSig::parameter11_type, typename TSig::parameter12_type, typename TSig::parameter13_type, typename TSig::parameter14_type, typename TSig::parameter15_type> function_type;
    typedef dfunc16<typename TSig::return_type, typename TSig::parameter0_type, typename TSig::parameter1_type, typename TSig::parameter2_type, typename TSig::parameter3_type, typename TSig::parameter4_type, typename TSig::parameter5_type, typename TSig::parameter6_type, typename TSig::parameter7_type, typename TSig::parameter8_type, typename TSig::parameter9_type, typename TSig::parameter10_type, typename TSig::parameter11_type, typename TSig::parameter12_type, typename TSig::parameter13_type, typename TSig::parameter14_type, typename TSig::parameter15_type> dfunction_type;
};
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

#endif // FUNCTIONALCPP__FUNCTION__HPP
