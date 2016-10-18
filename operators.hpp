#ifndef FUNCTIONALCPP__OPERATORS__HPP
#define FUNCTIONALCPP__OPERATORS__HPP

namespace functionalcpp { namespace operators {

/*
 * Any is used as part of type inference.
 * If you wanted to know what the return type of TypeA + TypeB was you could use
 *   binary_operator<add, any, TypeA, TypeB>::return_type
 *
 * Return types are not automatically determined they must be registered.
 */
struct any{};

/*
 * Registration struct for type inference on arithmetic operators.
 * This is used to define the return type for every arithmetic operator for a
 * particular type.
 *
 * @example
 *  // binary oeprators that take bool, int return std::string
 *  template<> struct arithmetic_inference<any, bool, int> :
 *      arithmetic_inference<std::string, bool, int>{};
 */
template<typename TR, typename T0, typename T1> struct arithmetic_inference{
    typedef TR return_type;
    typedef T0 parameter0_type;
    typedef T1 parameter1_type;
};

// default behavior of arithmetic operators is return type is same as left type
template<typename T0, typename T1> struct arithmetic_inference<any,T0,T1> :
    arithmetic_inference<T0, T0, T1>{};

// @see arithmetic_inference
template<typename TR, typename T0, typename T1> struct logical_inference{
    typedef TR return_type;
    typedef T0 parameter0_type;
    typedef T1 parameter1_type;
};

// default behavior of logical operators is return type is bool
template<typename T0, typename T1> struct logical_inference<any,T0,T1> :
    logical_inference<bool, T0, T1>{};

// @see arithmetic_inference
template<typename TR, typename T0> struct unary_inference{
    typedef TR return_type;
    typedef T0 parameter0_type;
};

// default behavior of unary operators is return type is same as input type
template<typename T0> struct unary_inference<any, T0> :
    unary_inference<T0, T0>{};

/*
 * Lookup traits for a given unary operator.
 *
 * @example
 *  unary_operator<negate, any, int>::evaluate(10);
 */
template<typename TOperator, typename TR, typename T0>
struct unary_operator{
    // TODO: Do something if lookup fails, static assert maybe?
};

// @see unary_operator
template<typename TOperator, typename TR, typename T0, typename T1>
struct binary_operator{};

/*
 * This file is mostly automatically generated...
 * probably need to figure out a better way of doing this
 */

/* [[[cog
import cog

def unary(name, expression):
    cog.out("""
        struct NAME{};
        template<typename TR, typename T0> struct unary_operator<NAME, TR, T0>{
            typedef TR return_type;
            typedef T0 parameter0_type;

            static TR evaluate(const T0& a){
                return EXPRESSION;
            }
        };

        template<typename T0> struct unary_operator<NAME, any, T0> :
            unary_operator<NAME, typename unary_inference<any, T0>::return_type, T0>{};
    """.replace("NAME", name).replace("EXPRESSION", expression))

def arithmetic(name, expression):
    cog.out("""
        struct NAME{};
        template<typename TR, typename T0, typename T1> struct binary_operator<NAME, TR, T0, T1>{
            typedef TR return_type;
            typedef T0 parameter0_type;
            typedef T1 parameter1_type;

            static TR evaluate(const T0& a, const T1& b){
                return EXPRESSION;
            }
        };

        template<typename T0, typename T1> struct binary_operator<NAME, any, T0, T1> :
            binary_operator<NAME, typename arithmetic_inference<any, T0, T1>::return_type, T0, T1>{};
    """.replace("NAME", name).replace("EXPRESSION", expression))

def logical(name, expression):
    cog.out("""
        struct NAME{};
        template<typename TR, typename T0, typename T1> struct binary_operator<NAME, TR, T0, T1>{
            typedef TR return_type;
            typedef T0 parameter0_type;
            typedef T1 parameter1_type;

            static TR evaluate(const T0& a, const T1& b){
                return EXPRESSION;
            }
        };

        template<typename T0, typename T1> struct binary_operator<NAME, any, T0, T1> :
            binary_operator<NAME, typename logical_inference<any, T0, T1>::return_type, T0, T1>{};
    """.replace("NAME", name).replace("EXPRESSION", expression))

# Arithmetic Operators
arithmetic('add'    , 'a + b')
arithmetic('sub'    , 'a - b')
unary('negate'  , '-a')
arithmetic('mul'    , 'a * b')
arithmetic('div'    , 'a / b')
arithmetic('mod'    , 'a % b')
unary('postinc' , 'a++')
unary('preinc'  , '++a')
unary('postdec' , 'a--')
unary('predec'  , '--a')

# Comparison operators
logical('eq'  , 'a == b')
logical('neq' , 'a != b')
logical('gt'  , 'a > b')
logical('lt'  , 'a < b')
logical('gte' , 'a >= b')
logical('lte' , 'a <= b')

# Logical operators
unary('lnot'  , '!a')
logical('land' , 'a && b')
logical('lor'  , 'a || b')

# Bitwise operators
unary('bnot'    , '~a')
arithmetic('band'   , 'a & b')
arithmetic('bor'    , 'a | b')
arithmetic('bxor'   , 'a ^ b')
arithmetic('shiftl' , 'a << b')
arithmetic('shiftr' , 'a >> b')


]]]*/

struct add{};
template<typename TR, typename T0, typename T1> struct binary_operator<add, TR, T0, T1>{
    typedef TR return_type;
    typedef T0 parameter0_type;
    typedef T1 parameter1_type;

    static TR evaluate(const T0& a, const T1& b){
        return a + b;
    }
};

template<typename T0, typename T1> struct binary_operator<add, any, T0, T1> :
    binary_operator<add, typename arithmetic_inference<any, T0, T1>::return_type, T0, T1>{};
    
struct sub{};
template<typename TR, typename T0, typename T1> struct binary_operator<sub, TR, T0, T1>{
    typedef TR return_type;
    typedef T0 parameter0_type;
    typedef T1 parameter1_type;

    static TR evaluate(const T0& a, const T1& b){
        return a - b;
    }
};

template<typename T0, typename T1> struct binary_operator<sub, any, T0, T1> :
    binary_operator<sub, typename arithmetic_inference<any, T0, T1>::return_type, T0, T1>{};
    
struct negate{};
template<typename TR, typename T0> struct unary_operator<negate, TR, T0>{
    typedef TR return_type;
    typedef T0 parameter0_type;

    static TR evaluate(const T0& a){
        return -a;
    }
};

template<typename T0> struct unary_operator<negate, any, T0> :
    unary_operator<negate, typename unary_inference<any, T0>::return_type, T0>{};
    
struct mul{};
template<typename TR, typename T0, typename T1> struct binary_operator<mul, TR, T0, T1>{
    typedef TR return_type;
    typedef T0 parameter0_type;
    typedef T1 parameter1_type;

    static TR evaluate(const T0& a, const T1& b){
        return a * b;
    }
};

template<typename T0, typename T1> struct binary_operator<mul, any, T0, T1> :
    binary_operator<mul, typename arithmetic_inference<any, T0, T1>::return_type, T0, T1>{};
    
struct div{};
template<typename TR, typename T0, typename T1> struct binary_operator<div, TR, T0, T1>{
    typedef TR return_type;
    typedef T0 parameter0_type;
    typedef T1 parameter1_type;

    static TR evaluate(const T0& a, const T1& b){
        return a / b;
    }
};

template<typename T0, typename T1> struct binary_operator<div, any, T0, T1> :
    binary_operator<div, typename arithmetic_inference<any, T0, T1>::return_type, T0, T1>{};
    
struct mod{};
template<typename TR, typename T0, typename T1> struct binary_operator<mod, TR, T0, T1>{
    typedef TR return_type;
    typedef T0 parameter0_type;
    typedef T1 parameter1_type;

    static TR evaluate(const T0& a, const T1& b){
        return a % b;
    }
};

template<typename T0, typename T1> struct binary_operator<mod, any, T0, T1> :
    binary_operator<mod, typename arithmetic_inference<any, T0, T1>::return_type, T0, T1>{};
    
struct postinc{};
template<typename TR, typename T0> struct unary_operator<postinc, TR, T0>{
    typedef TR return_type;
    typedef T0 parameter0_type;

    static TR evaluate(const T0& a){
        return a++;
    }
};

template<typename T0> struct unary_operator<postinc, any, T0> :
    unary_operator<postinc, typename unary_inference<any, T0>::return_type, T0>{};
    
struct preinc{};
template<typename TR, typename T0> struct unary_operator<preinc, TR, T0>{
    typedef TR return_type;
    typedef T0 parameter0_type;

    static TR evaluate(const T0& a){
        return ++a;
    }
};

template<typename T0> struct unary_operator<preinc, any, T0> :
    unary_operator<preinc, typename unary_inference<any, T0>::return_type, T0>{};
    
struct postdec{};
template<typename TR, typename T0> struct unary_operator<postdec, TR, T0>{
    typedef TR return_type;
    typedef T0 parameter0_type;

    static TR evaluate(const T0& a){
        return a--;
    }
};

template<typename T0> struct unary_operator<postdec, any, T0> :
    unary_operator<postdec, typename unary_inference<any, T0>::return_type, T0>{};
    
struct predec{};
template<typename TR, typename T0> struct unary_operator<predec, TR, T0>{
    typedef TR return_type;
    typedef T0 parameter0_type;

    static TR evaluate(const T0& a){
        return --a;
    }
};

template<typename T0> struct unary_operator<predec, any, T0> :
    unary_operator<predec, typename unary_inference<any, T0>::return_type, T0>{};
    
struct eq{};
template<typename TR, typename T0, typename T1> struct binary_operator<eq, TR, T0, T1>{
    typedef TR return_type;
    typedef T0 parameter0_type;
    typedef T1 parameter1_type;

    static TR evaluate(const T0& a, const T1& b){
        return a == b;
    }
};

template<typename T0, typename T1> struct binary_operator<eq, any, T0, T1> :
    binary_operator<eq, typename logical_inference<any, T0, T1>::return_type, T0, T1>{};
    
struct neq{};
template<typename TR, typename T0, typename T1> struct binary_operator<neq, TR, T0, T1>{
    typedef TR return_type;
    typedef T0 parameter0_type;
    typedef T1 parameter1_type;

    static TR evaluate(const T0& a, const T1& b){
        return a != b;
    }
};

template<typename T0, typename T1> struct binary_operator<neq, any, T0, T1> :
    binary_operator<neq, typename logical_inference<any, T0, T1>::return_type, T0, T1>{};
    
struct gt{};
template<typename TR, typename T0, typename T1> struct binary_operator<gt, TR, T0, T1>{
    typedef TR return_type;
    typedef T0 parameter0_type;
    typedef T1 parameter1_type;

    static TR evaluate(const T0& a, const T1& b){
        return a > b;
    }
};

template<typename T0, typename T1> struct binary_operator<gt, any, T0, T1> :
    binary_operator<gt, typename logical_inference<any, T0, T1>::return_type, T0, T1>{};
    
struct lt{};
template<typename TR, typename T0, typename T1> struct binary_operator<lt, TR, T0, T1>{
    typedef TR return_type;
    typedef T0 parameter0_type;
    typedef T1 parameter1_type;

    static TR evaluate(const T0& a, const T1& b){
        return a < b;
    }
};

template<typename T0, typename T1> struct binary_operator<lt, any, T0, T1> :
    binary_operator<lt, typename logical_inference<any, T0, T1>::return_type, T0, T1>{};
    
struct gte{};
template<typename TR, typename T0, typename T1> struct binary_operator<gte, TR, T0, T1>{
    typedef TR return_type;
    typedef T0 parameter0_type;
    typedef T1 parameter1_type;

    static TR evaluate(const T0& a, const T1& b){
        return a >= b;
    }
};

template<typename T0, typename T1> struct binary_operator<gte, any, T0, T1> :
    binary_operator<gte, typename logical_inference<any, T0, T1>::return_type, T0, T1>{};
    
struct lte{};
template<typename TR, typename T0, typename T1> struct binary_operator<lte, TR, T0, T1>{
    typedef TR return_type;
    typedef T0 parameter0_type;
    typedef T1 parameter1_type;

    static TR evaluate(const T0& a, const T1& b){
        return a <= b;
    }
};

template<typename T0, typename T1> struct binary_operator<lte, any, T0, T1> :
    binary_operator<lte, typename logical_inference<any, T0, T1>::return_type, T0, T1>{};
    
struct lnot{};
template<typename TR, typename T0> struct unary_operator<lnot, TR, T0>{
    typedef TR return_type;
    typedef T0 parameter0_type;

    static TR evaluate(const T0& a){
        return !a;
    }
};

template<typename T0> struct unary_operator<lnot, any, T0> :
    unary_operator<lnot, typename unary_inference<any, T0>::return_type, T0>{};
    
struct land{};
template<typename TR, typename T0, typename T1> struct binary_operator<land, TR, T0, T1>{
    typedef TR return_type;
    typedef T0 parameter0_type;
    typedef T1 parameter1_type;

    static TR evaluate(const T0& a, const T1& b){
        return a && b;
    }
};

template<typename T0, typename T1> struct binary_operator<land, any, T0, T1> :
    binary_operator<land, typename logical_inference<any, T0, T1>::return_type, T0, T1>{};
    
struct lor{};
template<typename TR, typename T0, typename T1> struct binary_operator<lor, TR, T0, T1>{
    typedef TR return_type;
    typedef T0 parameter0_type;
    typedef T1 parameter1_type;

    static TR evaluate(const T0& a, const T1& b){
        return a || b;
    }
};

template<typename T0, typename T1> struct binary_operator<lor, any, T0, T1> :
    binary_operator<lor, typename logical_inference<any, T0, T1>::return_type, T0, T1>{};
    
struct bnot{};
template<typename TR, typename T0> struct unary_operator<bnot, TR, T0>{
    typedef TR return_type;
    typedef T0 parameter0_type;

    static TR evaluate(const T0& a){
        return ~a;
    }
};

template<typename T0> struct unary_operator<bnot, any, T0> :
    unary_operator<bnot, typename unary_inference<any, T0>::return_type, T0>{};
    
struct band{};
template<typename TR, typename T0, typename T1> struct binary_operator<band, TR, T0, T1>{
    typedef TR return_type;
    typedef T0 parameter0_type;
    typedef T1 parameter1_type;

    static TR evaluate(const T0& a, const T1& b){
        return a & b;
    }
};

template<typename T0, typename T1> struct binary_operator<band, any, T0, T1> :
    binary_operator<band, typename arithmetic_inference<any, T0, T1>::return_type, T0, T1>{};
    
struct bor{};
template<typename TR, typename T0, typename T1> struct binary_operator<bor, TR, T0, T1>{
    typedef TR return_type;
    typedef T0 parameter0_type;
    typedef T1 parameter1_type;

    static TR evaluate(const T0& a, const T1& b){
        return a | b;
    }
};

template<typename T0, typename T1> struct binary_operator<bor, any, T0, T1> :
    binary_operator<bor, typename arithmetic_inference<any, T0, T1>::return_type, T0, T1>{};
    
struct bxor{};
template<typename TR, typename T0, typename T1> struct binary_operator<bxor, TR, T0, T1>{
    typedef TR return_type;
    typedef T0 parameter0_type;
    typedef T1 parameter1_type;

    static TR evaluate(const T0& a, const T1& b){
        return a ^ b;
    }
};

template<typename T0, typename T1> struct binary_operator<bxor, any, T0, T1> :
    binary_operator<bxor, typename arithmetic_inference<any, T0, T1>::return_type, T0, T1>{};
    
struct shiftl{};
template<typename TR, typename T0, typename T1> struct binary_operator<shiftl, TR, T0, T1>{
    typedef TR return_type;
    typedef T0 parameter0_type;
    typedef T1 parameter1_type;

    static TR evaluate(const T0& a, const T1& b){
        return a << b;
    }
};

template<typename T0, typename T1> struct binary_operator<shiftl, any, T0, T1> :
    binary_operator<shiftl, typename arithmetic_inference<any, T0, T1>::return_type, T0, T1>{};
    
struct shiftr{};
template<typename TR, typename T0, typename T1> struct binary_operator<shiftr, TR, T0, T1>{
    typedef TR return_type;
    typedef T0 parameter0_type;
    typedef T1 parameter1_type;

    static TR evaluate(const T0& a, const T1& b){
        return a >> b;
    }
};

template<typename T0, typename T1> struct binary_operator<shiftr, any, T0, T1> :
    binary_operator<shiftr, typename arithmetic_inference<any, T0, T1>::return_type, T0, T1>{};
    
// [[[end]]]

}} // namespace functionalcpp::operators

#endif // FUNCTIONALCPP__OPERATORS__HPP
