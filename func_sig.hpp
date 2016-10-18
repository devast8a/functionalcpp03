/* [[[cog
import cog

def List(start, end, string, joiner=","):
    return joiner.join(string.format(i) for i in range(start, end))

for i in range(0, 17):
    cog.out("""
    template<class TR{1}> struct FuncSig{0}{{
        static const size_t parameter_count = {0};
        static const bool has_return_value = true;
        typedef TR return_type;
        {2}
    }};
    """.format(
        i,
        List(0, i, ", typename T{0}", ""),
        List(0, i, "typedef T{0} parameter{0}_type;", "\n        ")
    ));
]]] */

template<class TR> struct FuncSig0{
    static const size_t parameter_count = 0;
    static const bool has_return_value = true;
    typedef TR return_type;
    
};

template<class TR, typename T0> struct FuncSig1{
    static const size_t parameter_count = 1;
    static const bool has_return_value = true;
    typedef TR return_type;
    typedef T0 parameter0_type;
};

template<class TR, typename T0, typename T1> struct FuncSig2{
    static const size_t parameter_count = 2;
    static const bool has_return_value = true;
    typedef TR return_type;
    typedef T0 parameter0_type;
    typedef T1 parameter1_type;
};

template<class TR, typename T0, typename T1, typename T2> struct FuncSig3{
    static const size_t parameter_count = 3;
    static const bool has_return_value = true;
    typedef TR return_type;
    typedef T0 parameter0_type;
    typedef T1 parameter1_type;
    typedef T2 parameter2_type;
};

template<class TR, typename T0, typename T1, typename T2, typename T3> struct FuncSig4{
    static const size_t parameter_count = 4;
    static const bool has_return_value = true;
    typedef TR return_type;
    typedef T0 parameter0_type;
    typedef T1 parameter1_type;
    typedef T2 parameter2_type;
    typedef T3 parameter3_type;
};

template<class TR, typename T0, typename T1, typename T2, typename T3, typename T4> struct FuncSig5{
    static const size_t parameter_count = 5;
    static const bool has_return_value = true;
    typedef TR return_type;
    typedef T0 parameter0_type;
    typedef T1 parameter1_type;
    typedef T2 parameter2_type;
    typedef T3 parameter3_type;
    typedef T4 parameter4_type;
};

template<class TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5> struct FuncSig6{
    static const size_t parameter_count = 6;
    static const bool has_return_value = true;
    typedef TR return_type;
    typedef T0 parameter0_type;
    typedef T1 parameter1_type;
    typedef T2 parameter2_type;
    typedef T3 parameter3_type;
    typedef T4 parameter4_type;
    typedef T5 parameter5_type;
};

template<class TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6> struct FuncSig7{
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
};

template<class TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> struct FuncSig8{
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
};

template<class TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8> struct FuncSig9{
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
};

template<class TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9> struct FuncSig10{
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
};

template<class TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10> struct FuncSig11{
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
};

template<class TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11> struct FuncSig12{
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
};

template<class TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12> struct FuncSig13{
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
};

template<class TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13> struct FuncSig14{
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
};

template<class TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14> struct FuncSig15{
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
};

template<class TR, typename T0, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15> struct FuncSig16{
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
};

/* [[[end]]] */
