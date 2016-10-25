#ifndef FUNCTIONALCPP__TUPLE__HPP
#define FUNCTIONALCPP__TUPLE__HPP

/**
 * Implements type safe tuples.
 * The implementation is really disgusting
 *
 * TODO: Add tupleX::push(T)
 */
namespace functionalcpp { namespace tupleNS {

template<int n, typename TTuple> struct get{};

/* [[[cog
import cog

get = """
template<typename TTuple> struct get<{0}, TTuple>{{
    typedef typename TTuple::v{0}_type type;
    static type value(const TTuple& tuple){{
        return tuple.v{0};
    }}
}};
"""

tuple = """
template<{1}> struct tuple{0}{{
    static const size_t length = {0};

    {2}
    tuple{0}({3}):
    {4}
    {{}};
    {5}
}};
"""

body = "typedef T{0} v{0}_type;\n    const T{0} v{0};\n    "

for i in range(0, 16):
    cog.out(get.format(i))

def List(start, end, string, joiner=","):
    return joiner.join(string.format(i) for i in range(start, end))

for i in range(16, 0, -1):
    if i == 16:
        v = ""
    else:
        v = """
        template<typename TNext> struct push{{
            typedef tuple{0}<{1}, TNext> type;
        }};"""
        v = v.format(i + 1, List(0, i, "T{0}"))

    cog.out(tuple.format(
        i,
        List(0, i, "typename T{0}"),
        List(0, i, "typedef T{0} v{0}_type; const T{0} v{0};", "\n    "),
        List(0, i, "const T{0} v{0}"),
        List(0, i, "v{0}(v{0})"),
        v,
    ))

cog.out("""
struct tuple0
{
    static const size_t length = 0;
    template<typename TNext> struct push{
        typedef tuple1<TNext> type;
    };
};
""")

cog.out("""
struct tuple{
    static tuple0 create(){return tuple0();}
""")

for i in range(1, 17):
    cog.out("""
    template<{1}> static tuple{0}<{2}> create({3}){{
        return tuple{0}<{2}>({4});
    }}
    """.format(
        i,
        List(0, i, "typename T{0}"),
        List(0, i, "T{0}"),
        List(0, i, "const T{0} v{0}"),
        List(0, i, "v{0}")
    ))

cog.out("};")

]]]*/

template<typename TTuple> struct get<0, TTuple>{
    typedef typename TTuple::v0_type type;
    static type value(const TTuple& tuple){
        return tuple.v0;
    }
};

template<typename TTuple> struct get<1, TTuple>{
    typedef typename TTuple::v1_type type;
    static type value(const TTuple& tuple){
        return tuple.v1;
    }
};

template<typename TTuple> struct get<2, TTuple>{
    typedef typename TTuple::v2_type type;
    static type value(const TTuple& tuple){
        return tuple.v2;
    }
};

template<typename TTuple> struct get<3, TTuple>{
    typedef typename TTuple::v3_type type;
    static type value(const TTuple& tuple){
        return tuple.v3;
    }
};

template<typename TTuple> struct get<4, TTuple>{
    typedef typename TTuple::v4_type type;
    static type value(const TTuple& tuple){
        return tuple.v4;
    }
};

template<typename TTuple> struct get<5, TTuple>{
    typedef typename TTuple::v5_type type;
    static type value(const TTuple& tuple){
        return tuple.v5;
    }
};

template<typename TTuple> struct get<6, TTuple>{
    typedef typename TTuple::v6_type type;
    static type value(const TTuple& tuple){
        return tuple.v6;
    }
};

template<typename TTuple> struct get<7, TTuple>{
    typedef typename TTuple::v7_type type;
    static type value(const TTuple& tuple){
        return tuple.v7;
    }
};

template<typename TTuple> struct get<8, TTuple>{
    typedef typename TTuple::v8_type type;
    static type value(const TTuple& tuple){
        return tuple.v8;
    }
};

template<typename TTuple> struct get<9, TTuple>{
    typedef typename TTuple::v9_type type;
    static type value(const TTuple& tuple){
        return tuple.v9;
    }
};

template<typename TTuple> struct get<10, TTuple>{
    typedef typename TTuple::v10_type type;
    static type value(const TTuple& tuple){
        return tuple.v10;
    }
};

template<typename TTuple> struct get<11, TTuple>{
    typedef typename TTuple::v11_type type;
    static type value(const TTuple& tuple){
        return tuple.v11;
    }
};

template<typename TTuple> struct get<12, TTuple>{
    typedef typename TTuple::v12_type type;
    static type value(const TTuple& tuple){
        return tuple.v12;
    }
};

template<typename TTuple> struct get<13, TTuple>{
    typedef typename TTuple::v13_type type;
    static type value(const TTuple& tuple){
        return tuple.v13;
    }
};

template<typename TTuple> struct get<14, TTuple>{
    typedef typename TTuple::v14_type type;
    static type value(const TTuple& tuple){
        return tuple.v14;
    }
};

template<typename TTuple> struct get<15, TTuple>{
    typedef typename TTuple::v15_type type;
    static type value(const TTuple& tuple){
        return tuple.v15;
    }
};

template<typename T0,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14,typename T15> struct tuple16{
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
    tuple16(const T0 v0,const T1 v1,const T2 v2,const T3 v3,const T4 v4,const T5 v5,const T6 v6,const T7 v7,const T8 v8,const T9 v9,const T10 v10,const T11 v11,const T12 v12,const T13 v13,const T14 v14,const T15 v15):
    v0(v0),v1(v1),v2(v2),v3(v3),v4(v4),v5(v5),v6(v6),v7(v7),v8(v8),v9(v9),v10(v10),v11(v11),v12(v12),v13(v13),v14(v14),v15(v15)
    {};
    
};

template<typename T0,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14> struct tuple15{
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
    tuple15(const T0 v0,const T1 v1,const T2 v2,const T3 v3,const T4 v4,const T5 v5,const T6 v6,const T7 v7,const T8 v8,const T9 v9,const T10 v10,const T11 v11,const T12 v12,const T13 v13,const T14 v14):
    v0(v0),v1(v1),v2(v2),v3(v3),v4(v4),v5(v5),v6(v6),v7(v7),v8(v8),v9(v9),v10(v10),v11(v11),v12(v12),v13(v13),v14(v14)
    {};
    
        template<typename TNext> struct push{
            typedef tuple16<T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14, TNext> type;
        };
};

template<typename T0,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13> struct tuple14{
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
    tuple14(const T0 v0,const T1 v1,const T2 v2,const T3 v3,const T4 v4,const T5 v5,const T6 v6,const T7 v7,const T8 v8,const T9 v9,const T10 v10,const T11 v11,const T12 v12,const T13 v13):
    v0(v0),v1(v1),v2(v2),v3(v3),v4(v4),v5(v5),v6(v6),v7(v7),v8(v8),v9(v9),v10(v10),v11(v11),v12(v12),v13(v13)
    {};
    
        template<typename TNext> struct push{
            typedef tuple15<T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13, TNext> type;
        };
};

template<typename T0,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12> struct tuple13{
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
    tuple13(const T0 v0,const T1 v1,const T2 v2,const T3 v3,const T4 v4,const T5 v5,const T6 v6,const T7 v7,const T8 v8,const T9 v9,const T10 v10,const T11 v11,const T12 v12):
    v0(v0),v1(v1),v2(v2),v3(v3),v4(v4),v5(v5),v6(v6),v7(v7),v8(v8),v9(v9),v10(v10),v11(v11),v12(v12)
    {};
    
        template<typename TNext> struct push{
            typedef tuple14<T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12, TNext> type;
        };
};

template<typename T0,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11> struct tuple12{
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
    tuple12(const T0 v0,const T1 v1,const T2 v2,const T3 v3,const T4 v4,const T5 v5,const T6 v6,const T7 v7,const T8 v8,const T9 v9,const T10 v10,const T11 v11):
    v0(v0),v1(v1),v2(v2),v3(v3),v4(v4),v5(v5),v6(v6),v7(v7),v8(v8),v9(v9),v10(v10),v11(v11)
    {};
    
        template<typename TNext> struct push{
            typedef tuple13<T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11, TNext> type;
        };
};

template<typename T0,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10> struct tuple11{
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
    tuple11(const T0 v0,const T1 v1,const T2 v2,const T3 v3,const T4 v4,const T5 v5,const T6 v6,const T7 v7,const T8 v8,const T9 v9,const T10 v10):
    v0(v0),v1(v1),v2(v2),v3(v3),v4(v4),v5(v5),v6(v6),v7(v7),v8(v8),v9(v9),v10(v10)
    {};
    
        template<typename TNext> struct push{
            typedef tuple12<T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10, TNext> type;
        };
};

template<typename T0,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9> struct tuple10{
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
    tuple10(const T0 v0,const T1 v1,const T2 v2,const T3 v3,const T4 v4,const T5 v5,const T6 v6,const T7 v7,const T8 v8,const T9 v9):
    v0(v0),v1(v1),v2(v2),v3(v3),v4(v4),v5(v5),v6(v6),v7(v7),v8(v8),v9(v9)
    {};
    
        template<typename TNext> struct push{
            typedef tuple11<T0,T1,T2,T3,T4,T5,T6,T7,T8,T9, TNext> type;
        };
};

template<typename T0,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8> struct tuple9{
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
    tuple9(const T0 v0,const T1 v1,const T2 v2,const T3 v3,const T4 v4,const T5 v5,const T6 v6,const T7 v7,const T8 v8):
    v0(v0),v1(v1),v2(v2),v3(v3),v4(v4),v5(v5),v6(v6),v7(v7),v8(v8)
    {};
    
        template<typename TNext> struct push{
            typedef tuple10<T0,T1,T2,T3,T4,T5,T6,T7,T8, TNext> type;
        };
};

template<typename T0,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7> struct tuple8{
    static const size_t length = 8;

    typedef T0 v0_type; const T0 v0;
    typedef T1 v1_type; const T1 v1;
    typedef T2 v2_type; const T2 v2;
    typedef T3 v3_type; const T3 v3;
    typedef T4 v4_type; const T4 v4;
    typedef T5 v5_type; const T5 v5;
    typedef T6 v6_type; const T6 v6;
    typedef T7 v7_type; const T7 v7;
    tuple8(const T0 v0,const T1 v1,const T2 v2,const T3 v3,const T4 v4,const T5 v5,const T6 v6,const T7 v7):
    v0(v0),v1(v1),v2(v2),v3(v3),v4(v4),v5(v5),v6(v6),v7(v7)
    {};
    
        template<typename TNext> struct push{
            typedef tuple9<T0,T1,T2,T3,T4,T5,T6,T7, TNext> type;
        };
};

template<typename T0,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6> struct tuple7{
    static const size_t length = 7;

    typedef T0 v0_type; const T0 v0;
    typedef T1 v1_type; const T1 v1;
    typedef T2 v2_type; const T2 v2;
    typedef T3 v3_type; const T3 v3;
    typedef T4 v4_type; const T4 v4;
    typedef T5 v5_type; const T5 v5;
    typedef T6 v6_type; const T6 v6;
    tuple7(const T0 v0,const T1 v1,const T2 v2,const T3 v3,const T4 v4,const T5 v5,const T6 v6):
    v0(v0),v1(v1),v2(v2),v3(v3),v4(v4),v5(v5),v6(v6)
    {};
    
        template<typename TNext> struct push{
            typedef tuple8<T0,T1,T2,T3,T4,T5,T6, TNext> type;
        };
};

template<typename T0,typename T1,typename T2,typename T3,typename T4,typename T5> struct tuple6{
    static const size_t length = 6;

    typedef T0 v0_type; const T0 v0;
    typedef T1 v1_type; const T1 v1;
    typedef T2 v2_type; const T2 v2;
    typedef T3 v3_type; const T3 v3;
    typedef T4 v4_type; const T4 v4;
    typedef T5 v5_type; const T5 v5;
    tuple6(const T0 v0,const T1 v1,const T2 v2,const T3 v3,const T4 v4,const T5 v5):
    v0(v0),v1(v1),v2(v2),v3(v3),v4(v4),v5(v5)
    {};
    
        template<typename TNext> struct push{
            typedef tuple7<T0,T1,T2,T3,T4,T5, TNext> type;
        };
};

template<typename T0,typename T1,typename T2,typename T3,typename T4> struct tuple5{
    static const size_t length = 5;

    typedef T0 v0_type; const T0 v0;
    typedef T1 v1_type; const T1 v1;
    typedef T2 v2_type; const T2 v2;
    typedef T3 v3_type; const T3 v3;
    typedef T4 v4_type; const T4 v4;
    tuple5(const T0 v0,const T1 v1,const T2 v2,const T3 v3,const T4 v4):
    v0(v0),v1(v1),v2(v2),v3(v3),v4(v4)
    {};
    
        template<typename TNext> struct push{
            typedef tuple6<T0,T1,T2,T3,T4, TNext> type;
        };
};

template<typename T0,typename T1,typename T2,typename T3> struct tuple4{
    static const size_t length = 4;

    typedef T0 v0_type; const T0 v0;
    typedef T1 v1_type; const T1 v1;
    typedef T2 v2_type; const T2 v2;
    typedef T3 v3_type; const T3 v3;
    tuple4(const T0 v0,const T1 v1,const T2 v2,const T3 v3):
    v0(v0),v1(v1),v2(v2),v3(v3)
    {};
    
        template<typename TNext> struct push{
            typedef tuple5<T0,T1,T2,T3, TNext> type;
        };
};

template<typename T0,typename T1,typename T2> struct tuple3{
    static const size_t length = 3;

    typedef T0 v0_type; const T0 v0;
    typedef T1 v1_type; const T1 v1;
    typedef T2 v2_type; const T2 v2;
    tuple3(const T0 v0,const T1 v1,const T2 v2):
    v0(v0),v1(v1),v2(v2)
    {};
    
        template<typename TNext> struct push{
            typedef tuple4<T0,T1,T2, TNext> type;
        };
};

template<typename T0,typename T1> struct tuple2{
    static const size_t length = 2;

    typedef T0 v0_type; const T0 v0;
    typedef T1 v1_type; const T1 v1;
    tuple2(const T0 v0,const T1 v1):
    v0(v0),v1(v1)
    {};
    
        template<typename TNext> struct push{
            typedef tuple3<T0,T1, TNext> type;
        };
};

template<typename T0> struct tuple1{
    static const size_t length = 1;

    typedef T0 v0_type; const T0 v0;
    tuple1(const T0 v0):
    v0(v0)
    {};
    
        template<typename TNext> struct push{
            typedef tuple2<T0, TNext> type;
        };
};

struct tuple0
{
    static const size_t length = 0;
    template<typename TNext> struct push{
        typedef tuple1<TNext> type;
    };
};

struct tuple{
    static tuple0 create(){return tuple0();}

    template<typename T0> static tuple1<T0> create(const T0 v0){
        return tuple1<T0>(v0);
    }
    
    template<typename T0,typename T1> static tuple2<T0,T1> create(const T0 v0,const T1 v1){
        return tuple2<T0,T1>(v0,v1);
    }
    
    template<typename T0,typename T1,typename T2> static tuple3<T0,T1,T2> create(const T0 v0,const T1 v1,const T2 v2){
        return tuple3<T0,T1,T2>(v0,v1,v2);
    }
    
    template<typename T0,typename T1,typename T2,typename T3> static tuple4<T0,T1,T2,T3> create(const T0 v0,const T1 v1,const T2 v2,const T3 v3){
        return tuple4<T0,T1,T2,T3>(v0,v1,v2,v3);
    }
    
    template<typename T0,typename T1,typename T2,typename T3,typename T4> static tuple5<T0,T1,T2,T3,T4> create(const T0 v0,const T1 v1,const T2 v2,const T3 v3,const T4 v4){
        return tuple5<T0,T1,T2,T3,T4>(v0,v1,v2,v3,v4);
    }
    
    template<typename T0,typename T1,typename T2,typename T3,typename T4,typename T5> static tuple6<T0,T1,T2,T3,T4,T5> create(const T0 v0,const T1 v1,const T2 v2,const T3 v3,const T4 v4,const T5 v5){
        return tuple6<T0,T1,T2,T3,T4,T5>(v0,v1,v2,v3,v4,v5);
    }
    
    template<typename T0,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6> static tuple7<T0,T1,T2,T3,T4,T5,T6> create(const T0 v0,const T1 v1,const T2 v2,const T3 v3,const T4 v4,const T5 v5,const T6 v6){
        return tuple7<T0,T1,T2,T3,T4,T5,T6>(v0,v1,v2,v3,v4,v5,v6);
    }
    
    template<typename T0,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7> static tuple8<T0,T1,T2,T3,T4,T5,T6,T7> create(const T0 v0,const T1 v1,const T2 v2,const T3 v3,const T4 v4,const T5 v5,const T6 v6,const T7 v7){
        return tuple8<T0,T1,T2,T3,T4,T5,T6,T7>(v0,v1,v2,v3,v4,v5,v6,v7);
    }
    
    template<typename T0,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8> static tuple9<T0,T1,T2,T3,T4,T5,T6,T7,T8> create(const T0 v0,const T1 v1,const T2 v2,const T3 v3,const T4 v4,const T5 v5,const T6 v6,const T7 v7,const T8 v8){
        return tuple9<T0,T1,T2,T3,T4,T5,T6,T7,T8>(v0,v1,v2,v3,v4,v5,v6,v7,v8);
    }
    
    template<typename T0,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9> static tuple10<T0,T1,T2,T3,T4,T5,T6,T7,T8,T9> create(const T0 v0,const T1 v1,const T2 v2,const T3 v3,const T4 v4,const T5 v5,const T6 v6,const T7 v7,const T8 v8,const T9 v9){
        return tuple10<T0,T1,T2,T3,T4,T5,T6,T7,T8,T9>(v0,v1,v2,v3,v4,v5,v6,v7,v8,v9);
    }
    
    template<typename T0,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10> static tuple11<T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10> create(const T0 v0,const T1 v1,const T2 v2,const T3 v3,const T4 v4,const T5 v5,const T6 v6,const T7 v7,const T8 v8,const T9 v9,const T10 v10){
        return tuple11<T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>(v0,v1,v2,v3,v4,v5,v6,v7,v8,v9,v10);
    }
    
    template<typename T0,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11> static tuple12<T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11> create(const T0 v0,const T1 v1,const T2 v2,const T3 v3,const T4 v4,const T5 v5,const T6 v6,const T7 v7,const T8 v8,const T9 v9,const T10 v10,const T11 v11){
        return tuple12<T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11>(v0,v1,v2,v3,v4,v5,v6,v7,v8,v9,v10,v11);
    }
    
    template<typename T0,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12> static tuple13<T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12> create(const T0 v0,const T1 v1,const T2 v2,const T3 v3,const T4 v4,const T5 v5,const T6 v6,const T7 v7,const T8 v8,const T9 v9,const T10 v10,const T11 v11,const T12 v12){
        return tuple13<T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12>(v0,v1,v2,v3,v4,v5,v6,v7,v8,v9,v10,v11,v12);
    }
    
    template<typename T0,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13> static tuple14<T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13> create(const T0 v0,const T1 v1,const T2 v2,const T3 v3,const T4 v4,const T5 v5,const T6 v6,const T7 v7,const T8 v8,const T9 v9,const T10 v10,const T11 v11,const T12 v12,const T13 v13){
        return tuple14<T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13>(v0,v1,v2,v3,v4,v5,v6,v7,v8,v9,v10,v11,v12,v13);
    }
    
    template<typename T0,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14> static tuple15<T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14> create(const T0 v0,const T1 v1,const T2 v2,const T3 v3,const T4 v4,const T5 v5,const T6 v6,const T7 v7,const T8 v8,const T9 v9,const T10 v10,const T11 v11,const T12 v12,const T13 v13,const T14 v14){
        return tuple15<T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14>(v0,v1,v2,v3,v4,v5,v6,v7,v8,v9,v10,v11,v12,v13,v14);
    }
    
    template<typename T0,typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14,typename T15> static tuple16<T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15> create(const T0 v0,const T1 v1,const T2 v2,const T3 v3,const T4 v4,const T5 v5,const T6 v6,const T7 v7,const T8 v8,const T9 v9,const T10 v10,const T11 v11,const T12 v12,const T13 v13,const T14 v14,const T15 v15){
        return tuple16<T0,T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15>(v0,v1,v2,v3,v4,v5,v6,v7,v8,v9,v10,v11,v12,v13,v14,v15);
    }
    };
// [[[end]]]

}} // namespace functionalcpp::tuple

#endif // FUNCTIONALCPP__TUPLE__HPP
