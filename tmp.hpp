#ifndef FUNCTIONALCPP__TMP__HPP
#define FUNCTIONALCPP__TMP__HPP

namespace functionalcpp{ namespace tmp {

typedef char (&yes)[1];
typedef char (&no)[2];

template<typename T, T v> struct constant{
    static const T value = v;
    typedef T value_type;
    typedef constant type;
};
template<bool v> struct bool_constant : constant<bool, v>{
    typedef bool_constant type;
};
template<int v> struct int_constant : constant<int, v>{
    typedef int_constant type;
};

typedef bool_constant<false> false_type;
typedef bool_constant<true> true_type;

// invert //////////////////////////////////////////////////////////////////////
template<typename T> struct invert{
    typedef typename invert<typename T::type>::type type;
};
template<> struct invert<false_type>{ typedef true_type type; };
template<> struct invert<true_type>{ typedef false_type type; };

// are_same_type ///////////////////////////////////////////////////////////////
template<typename T, typename U> struct are_same_type : false_type{};
template<typename T> struct are_same_type<T,T> : true_type{};

template<typename T, typename U> struct not_same_type : true_type{};
template<typename T> struct not_same_type<T,T> : false_type{};

// is_void /////////////////////////////////////////////////////////////////////
template<typename T> struct is_void : false_type{};
template<> struct is_void<void> : true_type{};

template<typename T> struct not_void : true_type{};
template<> struct not_void<void> : false_type{};

// is_const ////////////////////////////////////////////////////////////////////
template<typename T> struct is_const : false_type{};
template<typename T> struct is_const<const T> : true_type{};

template<typename T> struct not_const : true_type{};
template<typename T> struct not_const<const T> : false_type{};

// is_volatile /////////////////////////////////////////////////////////////////
template<typename T> struct is_volatile : false_type{};
template<typename T> struct is_volatile<volatile T> : true_type{};

template<typename T> struct not_volatile : true_type{};
template<typename T> struct not_volatile<volatile T> : false_type{};

// is_pointer //////////////////////////////////////////////////////////////////
template<typename T> struct is_pointer : false_type{};
template<typename T> struct is_pointer<T*> : true_type{};

template<typename T> struct not_pointer : true_type{};
template<typename T> struct not_pointer<T*> : false_type{};

// is_reference ////////////////////////////////////////////////////////////////
template<typename T> struct is_reference : false_type{};
template<typename T> struct is_reference<T&> : true_type{};

template<typename T> struct not_reference : true_type{};
template<typename T> struct not_reference<T&> : false_type{};

// is_array ////////////////////////////////////////////////////////////////////
template<typename T> struct is_array : false_type{};
template<typename T> struct is_array<T[]> : true_type{};

template<typename T> struct not_array : true_type{};
template<typename T> struct not_array<T[]> : false_type{};

// is_integral /////////////////////////////////////////////////////////////////
template<typename T> struct is_integral : false_type{};
template<> struct is_integral<bool> : true_type{};
template<> struct is_integral<uint8_t> : true_type{};
template<> struct is_integral<uint16_t> : true_type{};
template<> struct is_integral<uint32_t> : true_type{};
template<> struct is_integral<uint64_t> : true_type{};
template<> struct is_integral<int8_t> : true_type{};
template<> struct is_integral<int16_t> : true_type{};
template<> struct is_integral<int32_t> : true_type{};
template<> struct is_integral<int64_t> : true_type{};

template<typename T> struct not_integral : invert<is_integral<T> >::type{};

// is_floating_point ///////////////////////////////////////////////////////////
template<typename T> struct is_floating_point : false_type{};
template<> struct is_floating_point<float> : true_type{};
template<> struct is_floating_point<double> : true_type{};

template<typename T> struct not_floating_point : invert<is_floating_point<T> >::type{};

// is_primative_type ///////////////////////////////////////////////////////////
template<typename T> struct is_primative_type : false_type{};
template<> struct is_primative_type<bool>     : true_type{};
template<> struct is_primative_type<uint8_t>  : true_type{};
template<> struct is_primative_type<uint16_t> : true_type{};
template<> struct is_primative_type<uint32_t> : true_type{};
template<> struct is_primative_type<uint64_t> : true_type{};
template<> struct is_primative_type<int8_t>   : true_type{};
template<> struct is_primative_type<int16_t>  : true_type{};
template<> struct is_primative_type<int32_t>  : true_type{};
template<> struct is_primative_type<int64_t>  : true_type{};
template<> struct is_primative_type<float>    : true_type{};
template<> struct is_primative_type<double>   : true_type{};

template<typename T> struct not_primative_type : invert<is_primative_type<T> >::type{};

// remove_cv, remove_const, remove_volatile ////////////////////////////////////
template<typename T> struct remove_cv{ typedef T type; };
template<typename T> struct remove_cv<T const>{ typedef T type; };
template<typename T> struct remove_cv<T volatile>{ typedef T type; };
template<typename T> struct remove_cv<T const volatile>{ typedef T type; };

template<typename T> struct remove_const{ typedef T type; };
template<typename T> struct remove_const<T const>{ typedef T type; };
template<typename T> struct remove_volatile{ typedef T type; };
template<typename T> struct remove_volatile<T volatile>{ typedef T type; };

// wrapping ////////////////////////////////////////////////////////////////////

/*
 * Wrappers can be used with select to defer template instantiation to avoid
 * substitution failures. The type selected by the wrapper should be the same
 * as the name of the wrapper.
 * eg. type<T> selects T::type, value_type<T> selects T::value_type, etc...
 *
 * How to use them
 *  select<
 *      T::has_type,    // Only true if T::type exists
 *      type<T>,
 *      int
 *  >::type
 *
 *  If T::type exists, then select::type is T::type
 *  If T::type does not exist, then select::type is int
 *
 *  If you didn't use wrappers
 *  select<
 *      T::has_type,
 *      typename T::type,   // Substitution failure, T::type does not exist
 *      int
 *  >::type
 */

// selects T::type
template<typename T> struct type{};

// selects T::value_type
template<typename T> struct value_type{};

// selects T::element_type
template<typename T> struct element_type{};

template<typename T>
struct unwrap{
    typedef T type;
};
template<typename T>
struct unwrap_test{
    static const bool value = true;
};

#define DECL_UNWRAP(WRAPPER, FIELD)                                  \
    template<typename T> struct unwrap<WRAPPER<T> >{                 \
        typedef typename T::FIELD type;                              \
    };                                                               \
    template<typename T> struct unwrap_test<WRAPPER<T> >{            \
        template<typename U> static yes test(typename U::FIELD*);    \
        template<typename U> static no  test(...);                   \
        static const bool value = sizeof(test<T>(0)) == sizeof(yes); \
    };

DECL_UNWRAP(type, type);
DECL_UNWRAP(value_type, value_type);
DECL_UNWRAP(element_type, element_type);
#undef DECL_UNWRAP

// is_unwrappable //////////////////////////////////////////////////////////////
template<typename T> struct is_unwrappable :
    bool_constant<unwrap_test<T>::value >{};

template<typename T> struct not_unwrappable :
    bool_constant<!unwrap_test<T>::value >{};

// enable_if ///////////////////////////////////////////////////////////////////
template<bool B, typename T> struct enable_if{};
template<typename T> struct enable_if<true, T>{
    typedef T type;
};

// disable_if //////////////////////////////////////////////////////////////////
template<bool B, typename T> struct disable_if{};
template<typename T> struct disable_if<false, T>{
    typedef T type;
};

// select //////////////////////////////////////////////////////////////////////
template<bool B, typename TTrue, typename TFalse>
struct select{
    typedef typename unwrap<TFalse>::type type;
};

template<typename TTrue, typename TFalse>
struct select<true, TTrue, TFalse>{
    typedef typename unwrap<TTrue>::type type;
};

// unwrap_or ///////////////////////////////////////////////////////////////////

/*
 * unwrap_or<T, TElse>::type
 *  unwrap_or::type will be unwrapped T if it exists,
 *  otherwise, unwrap_or::type will be TElse
 *
 * @see unwrap for more information on wrapping
 */
template<typename T, typename TElse>
struct unwrap_or{
    typedef typename select<is_unwrappable<T>::value, T, TElse>::type type;
};

// is_convertible //////////////////////////////////////////////////////////////
namespace details{
template<typename TFrom, typename TTo> struct is_convertible_test{
    static TFrom make();
    static yes test(TTo);
    static no test(...);

    static const bool value = sizeof(test(make())) == sizeof(yes);
};
} // namespace details

template<typename TFrom, typename TTo> struct is_convertible :
    bool_constant<details::is_convertible_test<TFrom, TTo>::value>{};
template<typename T> struct is_convertible<T, T> : true_type{};
template<typename T> struct is_convertible<T, void> : false_type{};
template<typename T> struct is_convertible<void, T> : false_type{};
template<> struct is_convertible<void, void> : false_type{};

template<typename TFrom, typename TTo> struct not_convertible : invert<is_convertible<TFrom, TTo> >::type{};

}};

#endif // FUNCTIONALCPP__TMP__HPP
