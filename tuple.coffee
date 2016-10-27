require 'template'

MAX_TUPLE_SIZE = 16

out """
#ifndef FUNCTIONALCPP__TUPLE__HPP
#define FUNCTIONALCPP__TUPLE__HPP


namespace functionalcpp { namespace tuples {

template<typename TTuple> struct pop_back;
template<typename TTuple> struct pop_front;
template<typename TTuple, typename TNext> struct push_back;
template<typename TTuple, typename TNext> struct push_front;
template<typename TA, typename TB> struct concat;
template<int n, typename TTuple> struct get{};

"""

for i in [0..MAX_TUPLE_SIZE]
    out """
        template<typename TTuple> struct get<{0}, TTuple>{
            typedef typename TTuple::v{0}_type type;
            static type value(const TTuple& tuple){return tuple.v{0};}
        };
        """,
        i

out """
// Tuple ///////////////////////////////////////////////////////////////////////

struct tuple0
{
    static const size_t length = 0;
};
"""

for i in [1..MAX_TUPLE_SIZE]
    out """
        template<{1}> struct tuple{0}{
            static const size_t length = {0};

            {2}

            tuple{0}({3}) : {4}{}
        };
        """,
        i
        list [0...i], "typename T{0}"
        list [0...i], "typedef T{0} v{0}_type; const T{0} v{0};", "\n"
        list [0...i], "const T{0} v{0}"
        list [0...i], "v{0}(v{0})"

out """
// Create //////////////////////////////////////////////////////////////////////
tuple0 create(){return tuple0();}
"""

for i in [1..MAX_TUPLE_SIZE]
    out """
        template<{2}> tuple{0}<{1}> create({3}){
            return tuple{0}<{1}>({4});
        }
        """,
        i,
        list [0...i], "T{0}"
        list [0...i], "typename T{0}"
        list [0...i], "const T{0} v{0}"
        list [0...i], "v{0}"

out """

namespace details {

// Pop Back ////////////////////////////////////////////////////////////////////

template<typename TTuple, size_t size> struct d_pop_back{};

template<typename TTuple> struct d_pop_back<TTuple, 1>{
    typedef typename TTuple::v0_type element_type;
    typedef tuple0 type;
};
"""

for i in [1...MAX_TUPLE_SIZE]
    out """
        template<typename TTuple> struct d_pop_back<TTuple, {0}>{
            typedef typename TTuple::v{1}_type element_type;
            typedef tuple{1}<{2}> type;
        };
        """,
        i + 1,
        i,
        list [0...i], "typename TTuple::v{0}_type"

out """
// Pop Front ///////////////////////////////////////////////////////////////////
template<typename TTuple, size_t size> struct d_pop_front{};

template<typename TTuple> struct d_pop_front<TTuple, 1>{
    typedef typename TTuple::v0_type element_type;
    typedef tuple0 type;
};

"""

for i in [1...MAX_TUPLE_SIZE]
    out """
        template<typename TTuple> struct d_pop_front<TTuple, {0}>{
            typedef typename TTuple::v0_type element_type;
            typedef tuple{1}<{2}> type;
        };
        """,
        i + 1,
        i,
        list [1..i], "typename TTuple::v{0}_type"

out """
// Push Back ///////////////////////////////////////////////////////////////////
template<typename TTuple, typename TNext, size_t size> struct d_push_back{};

"""

for i in [0...MAX_TUPLE_SIZE]
    out """
        template<typename TTuple, typename TNext> struct d_push_back<TTuple, TNext, {0}>{
            typedef tuple{1}<{2}TNext> type;
        };
        """,
        i,
        i + 1,
        list [0...i], "typename TTuple::v{0}_type, ", ""

out """
// Push Front //////////////////////////////////////////////////////////////////
template<typename TTuple, typename TNext, size_t size> struct d_push_front{};

"""

for i in [0...MAX_TUPLE_SIZE]
    out """
        template<typename TTuple, typename TNext> struct d_push_front<TTuple, TNext, {0}>{
            typedef tuple{1}<TNext{2}> type;
        };
        """,
        i,
        i + 1,
        list [0...i], ", typename TTuple::v{0}_type", ""

out """

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
"""
