require 'template'

MAX_SIGNATURE_SIZE = 16

out """
#ifndef FUNCTIONALCPP__FUNCTION_SIGNATURE__HPP
#define FUNCTIONALCPP__FUNCTION_SIGNATURE__HPP


namespace functionalcpp { namespace functions { namespace signatures {

template<typename TSig> struct pop_back;
template<typename TSig> struct pop_front;
template<typename TSig, typename TNext> struct push_back;
template<typename TSig, typename TNext> struct push_front;
template<typename TA, typename TB> struct concat;
template<int n, typename TSig> struct get{};

"""

for i in [0..MAX_SIGNATURE_SIZE]
    out """
        template<typename TSig> struct get<{0}, TSig>{
            typedef typename TSig::v{0}_type type;
            static type value(const TSig& fsig){return fsig.v{0};}
        };
        """,
        i

out """
// fsig ///////////////////////////////////////////////////////////////////////

template<typename TR> struct fsig0
{
    static const size_t parameters = 0;
    static const bool has_return_type = true;
    typedef TR return_type;
};
"""

for i in [1..MAX_SIGNATURE_SIZE]
    out """
        template<typename TR, {1}> struct fsig{0}{
            static const size_t parameters = {0};
            static const bool has_return_type = true;
            typedef TR return_type;

            {2}
        };
        """,
        i
        list [0...i], "typename T{0}"
        list [0...i], "typedef T{0} parameter{0}_type;", "\n"

out """

namespace details {

// Pop Back ////////////////////////////////////////////////////////////////////

template<typename TSig, size_t size> struct d_pop_back{};

template<typename TSig> struct d_pop_back<TSig, 1>{
    typedef typename TSig::parameter0_type element_type;
    typedef fsig0<typename TSig::return_type> type;
};
"""

for i in [1...MAX_SIGNATURE_SIZE]
    out """
        template<typename TSig> struct d_pop_back<TSig, {0}>{
            typedef typename TSig::parameter{1}_type element_type;
            typedef fsig{1}<typename TSig::return_type, {2}> type;
        };
        """,
        i + 1,
        i,
        list [0...i], "typename TSig::parameter{0}_type"

out """
// Pop Front ///////////////////////////////////////////////////////////////////
template<typename TSig, size_t size> struct d_pop_front{};

template<typename TSig> struct d_pop_front<TSig, 1>{
    typedef typename TSig::parameter0_type element_type;
    typedef fsig0<typename TSig::return_type> type;
};

"""

for i in [1...MAX_SIGNATURE_SIZE]
    out """
        template<typename TSig> struct d_pop_front<TSig, {0}>{
            typedef typename TSig::parameter0_type element_type;
            typedef fsig{1}<typename TSig::return_type, {2}> type;
        };
        """,
        i + 1,
        i,
        list [1..i], "typename TSig::parameter{0}_type"

out """
// Push Back ///////////////////////////////////////////////////////////////////
template<typename TSig, typename TNext, size_t size> struct d_push_back{};

"""

for i in [0...MAX_SIGNATURE_SIZE]
    out """
        template<typename TSig, typename TNext> struct d_push_back<TSig, TNext, {0}>{
            typedef fsig{1}<typename TSig::return_type, {2}TNext> type;
        };
        """,
        i,
        i + 1,
        list [0...i], "typename TSig::parameter{0}_type, ", ""

out """
// Push Front //////////////////////////////////////////////////////////////////
template<typename TSig, typename TNext, size_t size> struct d_push_front{};

"""

for i in [0...MAX_SIGNATURE_SIZE]
    out """
        template<typename TSig, typename TNext> struct d_push_front<TSig, TNext, {0}>{
            typedef fsig{1}<typename TSig::return_type, TNext{2}> type;
        };
        """,
        i,
        i + 1,
        list [0...i], ", typename TSig::v{0}_type", ""

out """

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
"""
