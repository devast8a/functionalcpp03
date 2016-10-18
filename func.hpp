#ifndef FUNCTIONALCPP__FUNC__HPP
#define FUNCTIONALCPP__FUNC__HPP
#include "tuple.hpp"

namespace functionalcpp { namespace function {

#include "func_sig.hpp"

using namespace functionalcpp::tupleNS;

template<typename T0, size_t T0Count, typename T1, size_t T1Count> struct FuncSigMergeImpl{};

template<typename T0, typename T1> struct FuncSigMergeImpl<T0, 1, T1, 1>{
    typedef FuncSig2<
        typename T0::return_type,
        typename T0::parameter0_type,
        // T1
        typename T1::parameter0_type
    > type;
};

template<typename T0, typename T1> struct FuncSigMergeImpl<T0, 2, T1, 1>{
    typedef FuncSig3<
        typename T0::return_type,
        typename T0::parameter0_type,
        typename T0::parameter1_type,
        // T1
        typename T1::parameter0_type
    > type;
};

template<typename T0, typename T1> struct FuncSigMergeImpl<T0, 3, T1, 1>{
    typedef FuncSig4<
        typename T0::return_type,
        typename T0::parameter0_type,
        typename T0::parameter1_type,
        typename T0::parameter2_type,
        // T1
        typename T1::parameter0_type
    > type;
};

template<typename T0, typename T1> struct FuncSigMergeImpl<T0, 4, T1, 1>{
    typedef FuncSig5<
        typename T0::return_type,
        typename T0::parameter0_type,
        typename T0::parameter1_type,
        typename T0::parameter2_type,
        typename T0::parameter3_type,
        // T1
        typename T1::parameter0_type
    > type;
};

template<typename T0, typename T1> struct FuncSigMergeImpl<T0, 5, T1, 1>{
    typedef FuncSig6<
        typename T0::return_type,
        typename T0::parameter0_type,
        typename T0::parameter1_type,
        typename T0::parameter2_type,
        typename T0::parameter3_type,
        typename T0::parameter4_type,
        // T1
        typename T1::parameter0_type
    > type;
};

template<typename T0, typename T1> struct FuncSigMerge{
    typedef typename FuncSigMergeImpl<T0, T0::parameter_count, T1, T1::parameter_count>::type type;
};

/* [[[cog
import cog

def List(start, end, string, joiner=", "):
    return joiner.join(string.format(i) for i in range(start, end))

for i in range(0, 17):
    cog.out("""
    template<typename TSelf, typename TR{1}> struct Func{0}{{
        static const size_t parameter_count = {0};
        static const bool has_return_value = true;
        typedef TR return_type;
        {2}
        
        TR operator()({3}){{
            TSelf& self = *static_cast<TSelf*>(this);
            return self.apply({4});
        }}
    }};
    """.format(
        i,
        List(0, i, ", typename T{0}", ""),
        List(0, i, "typedef T{0} parameter{0}_type;", "\n        "),
        List(0, i, "const T{0}& a{0}"),
        List(0, i, "a{0}")
    ))


cog.out("template<size_t TParams, typename TSelf, typename TFunc> struct FuncSelector{};")
for i in range(0, 17):
    cog.out("""
    template<typename TSelf, typename TFunc> struct FuncSelector<{0}, TSelf, TFunc>{{
        typedef Func{0}<TSelf, typename TFunc::return_type{1}> type;
    }};
    """.format(
        i,
        List(0, i, ", typename TFunc::parameter{0}_type", "")
    ))

cog.out("""
template<typename TSelf, typename TFunc> struct FuncN :
    FuncSelector<TFunc::parameter_count, TSelf, TFunc>::type
{
    typename TFunc::return_type apply(){
        TSelf& self = *static_cast<TSelf*>(this);
        return self.template apply_tuple<typename TFunc::return_type, tuple0>(
            tuple::create()
        );
    }

""")

for i in range(1, 17):
    cog.out("""
    template<{0}> typename TFunc::return_type apply({1}){{
        TSelf& self = *static_cast<TSelf*>(this);
        return self.template apply_tuple<typename TFunc::return_type, tuple{2}<{3}> >(
            tuple::create({4})
        );
    }}
    """.format(
        List(0, i, "typename T{0}"),
        List(0, i, "const T{0}& a{0}"),
        i,
        List(0, i, "T{0}"),
        List(0, i, "a{0}")
    ))

cog.out("};")
]]] */

    template<typename TSelf, typename TR> struct Func0{
        static const size_t parameter_count = 0;
        static const bool has_return_value = true;
        typedef TR return_type;
        
        
        TR operator()(){
            TSelf& self = *static_cast<TSelf*>(this);
            return self.apply();
        }
    };
    
    template<typename TSelf, typename TR, typename T0> struct Func1{
        static const size_t parameter_count = 1;
        static const bool has_return_value = true;
        typedef TR return_type;
        typedef T0 parameter0_type;
        
        TR operator()(const T0& a0){
            TSelf& self = *static_cast<TSelf*>(this);
            return self.apply(a0);
        }
    };
    
    template<typename TSelf, typename TR, typename T0, typename T1> struct Func2{
        static const size_t parameter_count = 2;
        static const bool has_return_value = true;
        typedef TR return_type;
        typedef T0 parameter0_type;
        typedef T1 parameter1_type;
        
        TR operator()(const T0& a0, const T1& a1){
            TSelf& self = *static_cast<TSelf*>(this);
            return self.apply(a0, a1);
        }
    };
    
    template<typename TSelf, typename TR, typename T0, typename T1, typename T2> struct Func3{
        static const size_t parameter_count = 3;
        static const bool has_return_value = true;
        typedef TR return_type;
        typedef T0 parameter0_type;
        typedef T1 parameter1_type;
        typedef T2 parameter2_type;
        
        TR operator()(const T0& a0, const T1& a1, const T2& a2){
            TSelf& self = *static_cast<TSelf*>(this);
            return self.apply(a0, a1, a2);
        }
    };
    
    template<typename TSelf, typename TR, typename T0, typename T1, typename T2, typename T3> struct Func4{
        static const size_t parameter_count = 4;
        static const bool has_return_value = true;
        typedef TR return_type;
        typedef T0 parameter0_type;
        typedef T1 parameter1_type;
        typedef T2 parameter2_type;
        typedef T3 parameter3_type;
        
        TR operator()(const T0& a0, const T1& a1, const T2& a2, const T3& a3){
            TSelf& self = *static_cast<TSelf*>(this);
            return self.apply(a0, a1, a2, a3);
        }
    };
    
    template<typename TSelf, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4> struct Func5{
        static const size_t parameter_count = 5;
        static const bool has_return_value = true;
        typedef TR return_type;
        typedef T0 parameter0_type;
        typedef T1 parameter1_type;
        typedef T2 parameter2_type;
        typedef T3 parameter3_type;
        typedef T4 parameter4_type;
        
        TR operator()(const T0& a0, const T1& a1, const T2& a2, const T3& a3, const T4& a4){
            TSelf& self = *static_cast<TSelf*>(this);
            return self.apply(a0, a1, a2, a3, a4);
        }
    };
    
    template<typename TSelf, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5> struct Func6{
        static const size_t parameter_count = 6;
        static const bool has_return_value = true;
        typedef TR return_type;
        typedef T0 parameter0_type;
        typedef T1 parameter1_type;
        typedef T2 parameter2_type;
        typedef T3 parameter3_type;
        typedef T4 parameter4_type;
        typedef T5 parameter5_type;
        
        TR operator()(const T0& a0, const T1& a1, const T2& a2, const T3& a3, const T4& a4, const T5& a5){
            TSelf& self = *static_cast<TSelf*>(this);
            return self.apply(a0, a1, a2, a3, a4, a5);
        }
    };
    
    template<typename TSelf, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> struct Func7{
        static const size_t parameter_count = 7;
        static const bool has_return_value = true;
        typedef TR return_type;
        typedef T0 parameter0_type;
        typedef T1 parameter1_type;
        typedef T2 parameter2_type;
        typedef T3 parameter3_type;
        typedef T4 parameter4_type;
        typedef T5 parameter5_type;
        typedef T6 parameter6_type;
        
        TR operator()(const T0& a0, const T1& a1, const T2& a2, const T3& a3, const T4& a4, const T5& a5, const T6& a6){
            TSelf& self = *static_cast<TSelf*>(this);
            return self.apply(a0, a1, a2, a3, a4, a5, a6);
        }
    };
    
    template<typename TSelf, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> struct Func8{
        static const size_t parameter_count = 8;
        static const bool has_return_value = true;
        typedef TR return_type;
        typedef T0 parameter0_type;
        typedef T1 parameter1_type;
        typedef T2 parameter2_type;
        typedef T3 parameter3_type;
        typedef T4 parameter4_type;
        typedef T5 parameter5_type;
        typedef T6 parameter6_type;
        typedef T7 parameter7_type;
        
        TR operator()(const T0& a0, const T1& a1, const T2& a2, const T3& a3, const T4& a4, const T5& a5, const T6& a6, const T7& a7){
            TSelf& self = *static_cast<TSelf*>(this);
            return self.apply(a0, a1, a2, a3, a4, a5, a6, a7);
        }
    };
    
    template<typename TSelf, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8> struct Func9{
        static const size_t parameter_count = 9;
        static const bool has_return_value = true;
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
        
        TR operator()(const T0& a0, const T1& a1, const T2& a2, const T3& a3, const T4& a4, const T5& a5, const T6& a6, const T7& a7, const T8& a8){
            TSelf& self = *static_cast<TSelf*>(this);
            return self.apply(a0, a1, a2, a3, a4, a5, a6, a7, a8);
        }
    };
    
    template<typename TSelf, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9> struct Func10{
        static const size_t parameter_count = 10;
        static const bool has_return_value = true;
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
        
        TR operator()(const T0& a0, const T1& a1, const T2& a2, const T3& a3, const T4& a4, const T5& a5, const T6& a6, const T7& a7, const T8& a8, const T9& a9){
            TSelf& self = *static_cast<TSelf*>(this);
            return self.apply(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
        }
    };
    
    template<typename TSelf, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10> struct Func11{
        static const size_t parameter_count = 11;
        static const bool has_return_value = true;
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
        
        TR operator()(const T0& a0, const T1& a1, const T2& a2, const T3& a3, const T4& a4, const T5& a5, const T6& a6, const T7& a7, const T8& a8, const T9& a9, const T10& a10){
            TSelf& self = *static_cast<TSelf*>(this);
            return self.apply(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
        }
    };
    
    template<typename TSelf, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11> struct Func12{
        static const size_t parameter_count = 12;
        static const bool has_return_value = true;
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
        
        TR operator()(const T0& a0, const T1& a1, const T2& a2, const T3& a3, const T4& a4, const T5& a5, const T6& a6, const T7& a7, const T8& a8, const T9& a9, const T10& a10, const T11& a11){
            TSelf& self = *static_cast<TSelf*>(this);
            return self.apply(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
        }
    };
    
    template<typename TSelf, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12> struct Func13{
        static const size_t parameter_count = 13;
        static const bool has_return_value = true;
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
        
        TR operator()(const T0& a0, const T1& a1, const T2& a2, const T3& a3, const T4& a4, const T5& a5, const T6& a6, const T7& a7, const T8& a8, const T9& a9, const T10& a10, const T11& a11, const T12& a12){
            TSelf& self = *static_cast<TSelf*>(this);
            return self.apply(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
        }
    };
    
    template<typename TSelf, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13> struct Func14{
        static const size_t parameter_count = 14;
        static const bool has_return_value = true;
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
        
        TR operator()(const T0& a0, const T1& a1, const T2& a2, const T3& a3, const T4& a4, const T5& a5, const T6& a6, const T7& a7, const T8& a8, const T9& a9, const T10& a10, const T11& a11, const T12& a12, const T13& a13){
            TSelf& self = *static_cast<TSelf*>(this);
            return self.apply(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
        }
    };
    
    template<typename TSelf, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14> struct Func15{
        static const size_t parameter_count = 15;
        static const bool has_return_value = true;
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
        
        TR operator()(const T0& a0, const T1& a1, const T2& a2, const T3& a3, const T4& a4, const T5& a5, const T6& a6, const T7& a7, const T8& a8, const T9& a9, const T10& a10, const T11& a11, const T12& a12, const T13& a13, const T14& a14){
            TSelf& self = *static_cast<TSelf*>(this);
            return self.apply(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
        }
    };
    
    template<typename TSelf, typename TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15> struct Func16{
        static const size_t parameter_count = 16;
        static const bool has_return_value = true;
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
        
        TR operator()(const T0& a0, const T1& a1, const T2& a2, const T3& a3, const T4& a4, const T5& a5, const T6& a6, const T7& a7, const T8& a8, const T9& a9, const T10& a10, const T11& a11, const T12& a12, const T13& a13, const T14& a14, const T15& a15){
            TSelf& self = *static_cast<TSelf*>(this);
            return self.apply(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
        }
    };
    template<size_t TParams, typename TSelf, typename TFunc> struct FuncSelector{};
    template<typename TSelf, typename TFunc> struct FuncSelector<0, TSelf, TFunc>{
        typedef Func0<TSelf, typename TFunc::return_type> type;
    };
    
    template<typename TSelf, typename TFunc> struct FuncSelector<1, TSelf, TFunc>{
        typedef Func1<TSelf, typename TFunc::return_type, typename TFunc::parameter0_type> type;
    };
    
    template<typename TSelf, typename TFunc> struct FuncSelector<2, TSelf, TFunc>{
        typedef Func2<TSelf, typename TFunc::return_type, typename TFunc::parameter0_type, typename TFunc::parameter1_type> type;
    };
    
    template<typename TSelf, typename TFunc> struct FuncSelector<3, TSelf, TFunc>{
        typedef Func3<TSelf, typename TFunc::return_type, typename TFunc::parameter0_type, typename TFunc::parameter1_type, typename TFunc::parameter2_type> type;
    };
    
    template<typename TSelf, typename TFunc> struct FuncSelector<4, TSelf, TFunc>{
        typedef Func4<TSelf, typename TFunc::return_type, typename TFunc::parameter0_type, typename TFunc::parameter1_type, typename TFunc::parameter2_type, typename TFunc::parameter3_type> type;
    };
    
    template<typename TSelf, typename TFunc> struct FuncSelector<5, TSelf, TFunc>{
        typedef Func5<TSelf, typename TFunc::return_type, typename TFunc::parameter0_type, typename TFunc::parameter1_type, typename TFunc::parameter2_type, typename TFunc::parameter3_type, typename TFunc::parameter4_type> type;
    };
    
    template<typename TSelf, typename TFunc> struct FuncSelector<6, TSelf, TFunc>{
        typedef Func6<TSelf, typename TFunc::return_type, typename TFunc::parameter0_type, typename TFunc::parameter1_type, typename TFunc::parameter2_type, typename TFunc::parameter3_type, typename TFunc::parameter4_type, typename TFunc::parameter5_type> type;
    };
    
    template<typename TSelf, typename TFunc> struct FuncSelector<7, TSelf, TFunc>{
        typedef Func7<TSelf, typename TFunc::return_type, typename TFunc::parameter0_type, typename TFunc::parameter1_type, typename TFunc::parameter2_type, typename TFunc::parameter3_type, typename TFunc::parameter4_type, typename TFunc::parameter5_type, typename TFunc::parameter6_type> type;
    };
    
    template<typename TSelf, typename TFunc> struct FuncSelector<8, TSelf, TFunc>{
        typedef Func8<TSelf, typename TFunc::return_type, typename TFunc::parameter0_type, typename TFunc::parameter1_type, typename TFunc::parameter2_type, typename TFunc::parameter3_type, typename TFunc::parameter4_type, typename TFunc::parameter5_type, typename TFunc::parameter6_type, typename TFunc::parameter7_type> type;
    };
    
    template<typename TSelf, typename TFunc> struct FuncSelector<9, TSelf, TFunc>{
        typedef Func9<TSelf, typename TFunc::return_type, typename TFunc::parameter0_type, typename TFunc::parameter1_type, typename TFunc::parameter2_type, typename TFunc::parameter3_type, typename TFunc::parameter4_type, typename TFunc::parameter5_type, typename TFunc::parameter6_type, typename TFunc::parameter7_type, typename TFunc::parameter8_type> type;
    };
    
    template<typename TSelf, typename TFunc> struct FuncSelector<10, TSelf, TFunc>{
        typedef Func10<TSelf, typename TFunc::return_type, typename TFunc::parameter0_type, typename TFunc::parameter1_type, typename TFunc::parameter2_type, typename TFunc::parameter3_type, typename TFunc::parameter4_type, typename TFunc::parameter5_type, typename TFunc::parameter6_type, typename TFunc::parameter7_type, typename TFunc::parameter8_type, typename TFunc::parameter9_type> type;
    };
    
    template<typename TSelf, typename TFunc> struct FuncSelector<11, TSelf, TFunc>{
        typedef Func11<TSelf, typename TFunc::return_type, typename TFunc::parameter0_type, typename TFunc::parameter1_type, typename TFunc::parameter2_type, typename TFunc::parameter3_type, typename TFunc::parameter4_type, typename TFunc::parameter5_type, typename TFunc::parameter6_type, typename TFunc::parameter7_type, typename TFunc::parameter8_type, typename TFunc::parameter9_type, typename TFunc::parameter10_type> type;
    };
    
    template<typename TSelf, typename TFunc> struct FuncSelector<12, TSelf, TFunc>{
        typedef Func12<TSelf, typename TFunc::return_type, typename TFunc::parameter0_type, typename TFunc::parameter1_type, typename TFunc::parameter2_type, typename TFunc::parameter3_type, typename TFunc::parameter4_type, typename TFunc::parameter5_type, typename TFunc::parameter6_type, typename TFunc::parameter7_type, typename TFunc::parameter8_type, typename TFunc::parameter9_type, typename TFunc::parameter10_type, typename TFunc::parameter11_type> type;
    };
    
    template<typename TSelf, typename TFunc> struct FuncSelector<13, TSelf, TFunc>{
        typedef Func13<TSelf, typename TFunc::return_type, typename TFunc::parameter0_type, typename TFunc::parameter1_type, typename TFunc::parameter2_type, typename TFunc::parameter3_type, typename TFunc::parameter4_type, typename TFunc::parameter5_type, typename TFunc::parameter6_type, typename TFunc::parameter7_type, typename TFunc::parameter8_type, typename TFunc::parameter9_type, typename TFunc::parameter10_type, typename TFunc::parameter11_type, typename TFunc::parameter12_type> type;
    };
    
    template<typename TSelf, typename TFunc> struct FuncSelector<14, TSelf, TFunc>{
        typedef Func14<TSelf, typename TFunc::return_type, typename TFunc::parameter0_type, typename TFunc::parameter1_type, typename TFunc::parameter2_type, typename TFunc::parameter3_type, typename TFunc::parameter4_type, typename TFunc::parameter5_type, typename TFunc::parameter6_type, typename TFunc::parameter7_type, typename TFunc::parameter8_type, typename TFunc::parameter9_type, typename TFunc::parameter10_type, typename TFunc::parameter11_type, typename TFunc::parameter12_type, typename TFunc::parameter13_type> type;
    };
    
    template<typename TSelf, typename TFunc> struct FuncSelector<15, TSelf, TFunc>{
        typedef Func15<TSelf, typename TFunc::return_type, typename TFunc::parameter0_type, typename TFunc::parameter1_type, typename TFunc::parameter2_type, typename TFunc::parameter3_type, typename TFunc::parameter4_type, typename TFunc::parameter5_type, typename TFunc::parameter6_type, typename TFunc::parameter7_type, typename TFunc::parameter8_type, typename TFunc::parameter9_type, typename TFunc::parameter10_type, typename TFunc::parameter11_type, typename TFunc::parameter12_type, typename TFunc::parameter13_type, typename TFunc::parameter14_type> type;
    };
    
    template<typename TSelf, typename TFunc> struct FuncSelector<16, TSelf, TFunc>{
        typedef Func16<TSelf, typename TFunc::return_type, typename TFunc::parameter0_type, typename TFunc::parameter1_type, typename TFunc::parameter2_type, typename TFunc::parameter3_type, typename TFunc::parameter4_type, typename TFunc::parameter5_type, typename TFunc::parameter6_type, typename TFunc::parameter7_type, typename TFunc::parameter8_type, typename TFunc::parameter9_type, typename TFunc::parameter10_type, typename TFunc::parameter11_type, typename TFunc::parameter12_type, typename TFunc::parameter13_type, typename TFunc::parameter14_type, typename TFunc::parameter15_type> type;
    };
    
template<typename TSelf, typename TFunc> struct FuncN :
    FuncSelector<TFunc::parameter_count, TSelf, TFunc>::type
{
    typename TFunc::return_type apply(){
        TSelf& self = *static_cast<TSelf*>(this);
        return self.template apply_tuple<typename TFunc::return_type, tuple0>(
            tuple::create()
        );
    }


    template<typename T0> typename TFunc::return_type apply(const T0& a0){
        TSelf& self = *static_cast<TSelf*>(this);
        return self.template apply_tuple<typename TFunc::return_type, tuple1<T0> >(
            tuple::create(a0)
        );
    }
    
    template<typename T0, typename T1> typename TFunc::return_type apply(const T0& a0, const T1& a1){
        TSelf& self = *static_cast<TSelf*>(this);
        return self.template apply_tuple<typename TFunc::return_type, tuple2<T0, T1> >(
            tuple::create(a0, a1)
        );
    }
    
    template<typename T0, typename T1, typename T2> typename TFunc::return_type apply(const T0& a0, const T1& a1, const T2& a2){
        TSelf& self = *static_cast<TSelf*>(this);
        return self.template apply_tuple<typename TFunc::return_type, tuple3<T0, T1, T2> >(
            tuple::create(a0, a1, a2)
        );
    }
    
    template<typename T0, typename T1, typename T2, typename T3> typename TFunc::return_type apply(const T0& a0, const T1& a1, const T2& a2, const T3& a3){
        TSelf& self = *static_cast<TSelf*>(this);
        return self.template apply_tuple<typename TFunc::return_type, tuple4<T0, T1, T2, T3> >(
            tuple::create(a0, a1, a2, a3)
        );
    }
    
    template<typename T0, typename T1, typename T2, typename T3, typename T4> typename TFunc::return_type apply(const T0& a0, const T1& a1, const T2& a2, const T3& a3, const T4& a4){
        TSelf& self = *static_cast<TSelf*>(this);
        return self.template apply_tuple<typename TFunc::return_type, tuple5<T0, T1, T2, T3, T4> >(
            tuple::create(a0, a1, a2, a3, a4)
        );
    }
    
    template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5> typename TFunc::return_type apply(const T0& a0, const T1& a1, const T2& a2, const T3& a3, const T4& a4, const T5& a5){
        TSelf& self = *static_cast<TSelf*>(this);
        return self.template apply_tuple<typename TFunc::return_type, tuple6<T0, T1, T2, T3, T4, T5> >(
            tuple::create(a0, a1, a2, a3, a4, a5)
        );
    }
    
    template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> typename TFunc::return_type apply(const T0& a0, const T1& a1, const T2& a2, const T3& a3, const T4& a4, const T5& a5, const T6& a6){
        TSelf& self = *static_cast<TSelf*>(this);
        return self.template apply_tuple<typename TFunc::return_type, tuple7<T0, T1, T2, T3, T4, T5, T6> >(
            tuple::create(a0, a1, a2, a3, a4, a5, a6)
        );
    }
    
    template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> typename TFunc::return_type apply(const T0& a0, const T1& a1, const T2& a2, const T3& a3, const T4& a4, const T5& a5, const T6& a6, const T7& a7){
        TSelf& self = *static_cast<TSelf*>(this);
        return self.template apply_tuple<typename TFunc::return_type, tuple8<T0, T1, T2, T3, T4, T5, T6, T7> >(
            tuple::create(a0, a1, a2, a3, a4, a5, a6, a7)
        );
    }
    
    template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8> typename TFunc::return_type apply(const T0& a0, const T1& a1, const T2& a2, const T3& a3, const T4& a4, const T5& a5, const T6& a6, const T7& a7, const T8& a8){
        TSelf& self = *static_cast<TSelf*>(this);
        return self.template apply_tuple<typename TFunc::return_type, tuple9<T0, T1, T2, T3, T4, T5, T6, T7, T8> >(
            tuple::create(a0, a1, a2, a3, a4, a5, a6, a7, a8)
        );
    }
    
    template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9> typename TFunc::return_type apply(const T0& a0, const T1& a1, const T2& a2, const T3& a3, const T4& a4, const T5& a5, const T6& a6, const T7& a7, const T8& a8, const T9& a9){
        TSelf& self = *static_cast<TSelf*>(this);
        return self.template apply_tuple<typename TFunc::return_type, tuple10<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9> >(
            tuple::create(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9)
        );
    }
    
    template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10> typename TFunc::return_type apply(const T0& a0, const T1& a1, const T2& a2, const T3& a3, const T4& a4, const T5& a5, const T6& a6, const T7& a7, const T8& a8, const T9& a9, const T10& a10){
        TSelf& self = *static_cast<TSelf*>(this);
        return self.template apply_tuple<typename TFunc::return_type, tuple11<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10> >(
            tuple::create(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10)
        );
    }
    
    template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11> typename TFunc::return_type apply(const T0& a0, const T1& a1, const T2& a2, const T3& a3, const T4& a4, const T5& a5, const T6& a6, const T7& a7, const T8& a8, const T9& a9, const T10& a10, const T11& a11){
        TSelf& self = *static_cast<TSelf*>(this);
        return self.template apply_tuple<typename TFunc::return_type, tuple12<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11> >(
            tuple::create(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11)
        );
    }
    
    template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12> typename TFunc::return_type apply(const T0& a0, const T1& a1, const T2& a2, const T3& a3, const T4& a4, const T5& a5, const T6& a6, const T7& a7, const T8& a8, const T9& a9, const T10& a10, const T11& a11, const T12& a12){
        TSelf& self = *static_cast<TSelf*>(this);
        return self.template apply_tuple<typename TFunc::return_type, tuple13<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12> >(
            tuple::create(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12)
        );
    }
    
    template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13> typename TFunc::return_type apply(const T0& a0, const T1& a1, const T2& a2, const T3& a3, const T4& a4, const T5& a5, const T6& a6, const T7& a7, const T8& a8, const T9& a9, const T10& a10, const T11& a11, const T12& a12, const T13& a13){
        TSelf& self = *static_cast<TSelf*>(this);
        return self.template apply_tuple<typename TFunc::return_type, tuple14<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13> >(
            tuple::create(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13)
        );
    }
    
    template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14> typename TFunc::return_type apply(const T0& a0, const T1& a1, const T2& a2, const T3& a3, const T4& a4, const T5& a5, const T6& a6, const T7& a7, const T8& a8, const T9& a9, const T10& a10, const T11& a11, const T12& a12, const T13& a13, const T14& a14){
        TSelf& self = *static_cast<TSelf*>(this);
        return self.template apply_tuple<typename TFunc::return_type, tuple15<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14> >(
            tuple::create(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14)
        );
    }
    
    template<typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15> typename TFunc::return_type apply(const T0& a0, const T1& a1, const T2& a2, const T3& a3, const T4& a4, const T5& a5, const T6& a6, const T7& a7, const T8& a8, const T9& a9, const T10& a10, const T11& a11, const T12& a12, const T13& a13, const T14& a14, const T15& a15){
        TSelf& self = *static_cast<TSelf*>(this);
        return self.template apply_tuple<typename TFunc::return_type, tuple16<T0, T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15> >(
            tuple::create(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15)
        );
    }
    };
/* [[[end]]] */


}} // namespace functionalcpp::function

#endif // FUNCTIONALCPP__FUNC__HPP
