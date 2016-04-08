#ifndef FUNCTIONALCPP__OPERATORS__HPP
#define FUNCTIONALCPP__OPERATORS__HPP

namespace functionalcpp { namespace operators {

/*
 * This file is mostly automatically generated...
 * probably need to figure out a better way of doing this
 */

/* [[[cog
import cog

def unary(name, expression):
    cog.out("""
        template<typename TR, typename T1> struct %s{
            typedef TR return_type;
            typedef T1 parameter1_type;

            static TR evaluate(T1 a){
                return %s;
            }
        };
    """ % (name, expression))

def binary(name, expression):
    cog.out("""
        template<typename TR, typename T1, typename T2> struct %s{
            typedef TR return_type;
            typedef T1 parameter1_type;
            typedef T1 parameter2_type;

            static TR evaluate(T1 a, T2 b){
                return %s;
            }
        };
    """ % (name, expression))

# Arithmetic Operators
binary('add'    , 'a + b')
binary('sub'    , 'a - b')
unary('negate'  , '-a')
binary('mul'    , 'a * b')
binary('div'    , 'a / b')
binary('mod'    , 'a % b')
unary('postinc' , 'a++')
unary('preinc'  , '++a')
unary('postdec' , 'a--')
unary('predec'  , '--a')

# Comparison operators
binary('eq'  , 'a == b')
binary('neq' , 'a != b')
binary('gt'  , 'a > b')
binary('lt'  , 'a < b')
binary('gte' , 'a >= b')
binary('lte' , 'a <= b')

# Logical operators
unary('lnot'  , '!a')
binary('land' , 'a && b')
binary('lor'  , 'a && b')

# Bitwise operators
unary('bnot'    , '~a')
binary('band'   , 'a & b')
binary('bor'    , 'a | b')
binary('bxor'   , 'a ^ b')
binary('shiftl' , 'a << b')
binary('shiftr' , 'a >> b')


]]]*/

template<typename TR, typename T1, typename T2> struct add{
    typedef TR return_type;
    typedef T1 parameter1_type;
    typedef T1 parameter2_type;

    static TR evaluate(T1 a, T2 b){
        return a + b;
    }
};
    
template<typename TR, typename T1, typename T2> struct sub{
    typedef TR return_type;
    typedef T1 parameter1_type;
    typedef T1 parameter2_type;

    static TR evaluate(T1 a, T2 b){
        return a - b;
    }
};
    
template<typename TR, typename T1> struct negate{
    typedef TR return_type;
    typedef T1 parameter1_type;

    static TR evaluate(T1 a){
        return -a;
    }
};
    
template<typename TR, typename T1, typename T2> struct mul{
    typedef TR return_type;
    typedef T1 parameter1_type;
    typedef T1 parameter2_type;

    static TR evaluate(T1 a, T2 b){
        return a * b;
    }
};
    
template<typename TR, typename T1, typename T2> struct div{
    typedef TR return_type;
    typedef T1 parameter1_type;
    typedef T1 parameter2_type;

    static TR evaluate(T1 a, T2 b){
        return a / b;
    }
};
    
template<typename TR, typename T1, typename T2> struct mod{
    typedef TR return_type;
    typedef T1 parameter1_type;
    typedef T1 parameter2_type;

    static TR evaluate(T1 a, T2 b){
        return a % b;
    }
};
    
template<typename TR, typename T1> struct postinc{
    typedef TR return_type;
    typedef T1 parameter1_type;

    static TR evaluate(T1 a){
        return a++;
    }
};
    
template<typename TR, typename T1> struct preinc{
    typedef TR return_type;
    typedef T1 parameter1_type;

    static TR evaluate(T1 a){
        return ++a;
    }
};
    
template<typename TR, typename T1> struct postdec{
    typedef TR return_type;
    typedef T1 parameter1_type;

    static TR evaluate(T1 a){
        return a--;
    }
};
    
template<typename TR, typename T1> struct predec{
    typedef TR return_type;
    typedef T1 parameter1_type;

    static TR evaluate(T1 a){
        return --a;
    }
};
    
template<typename TR, typename T1, typename T2> struct eq{
    typedef TR return_type;
    typedef T1 parameter1_type;
    typedef T1 parameter2_type;

    static TR evaluate(T1 a, T2 b){
        return a == b;
    }
};
    
template<typename TR, typename T1, typename T2> struct neq{
    typedef TR return_type;
    typedef T1 parameter1_type;
    typedef T1 parameter2_type;

    static TR evaluate(T1 a, T2 b){
        return a != b;
    }
};
    
template<typename TR, typename T1, typename T2> struct gt{
    typedef TR return_type;
    typedef T1 parameter1_type;
    typedef T1 parameter2_type;

    static TR evaluate(T1 a, T2 b){
        return a > b;
    }
};
    
template<typename TR, typename T1, typename T2> struct lt{
    typedef TR return_type;
    typedef T1 parameter1_type;
    typedef T1 parameter2_type;

    static TR evaluate(T1 a, T2 b){
        return a < b;
    }
};
    
template<typename TR, typename T1, typename T2> struct gte{
    typedef TR return_type;
    typedef T1 parameter1_type;
    typedef T1 parameter2_type;

    static TR evaluate(T1 a, T2 b){
        return a >= b;
    }
};
    
template<typename TR, typename T1, typename T2> struct lte{
    typedef TR return_type;
    typedef T1 parameter1_type;
    typedef T1 parameter2_type;

    static TR evaluate(T1 a, T2 b){
        return a <= b;
    }
};
    
template<typename TR, typename T1> struct lnot{
    typedef TR return_type;
    typedef T1 parameter1_type;

    static TR evaluate(T1 a){
        return !a;
    }
};
    
template<typename TR, typename T1, typename T2> struct land{
    typedef TR return_type;
    typedef T1 parameter1_type;
    typedef T1 parameter2_type;

    static TR evaluate(T1 a, T2 b){
        return a && b;
    }
};
    
template<typename TR, typename T1, typename T2> struct lor{
    typedef TR return_type;
    typedef T1 parameter1_type;
    typedef T1 parameter2_type;

    static TR evaluate(T1 a, T2 b){
        return a && b;
    }
};
    
template<typename TR, typename T1> struct bnot{
    typedef TR return_type;
    typedef T1 parameter1_type;

    static TR evaluate(T1 a){
        return ~a;
    }
};
    
template<typename TR, typename T1, typename T2> struct band{
    typedef TR return_type;
    typedef T1 parameter1_type;
    typedef T1 parameter2_type;

    static TR evaluate(T1 a, T2 b){
        return a & b;
    }
};
    
template<typename TR, typename T1, typename T2> struct bor{
    typedef TR return_type;
    typedef T1 parameter1_type;
    typedef T1 parameter2_type;

    static TR evaluate(T1 a, T2 b){
        return a | b;
    }
};
    
template<typename TR, typename T1, typename T2> struct bxor{
    typedef TR return_type;
    typedef T1 parameter1_type;
    typedef T1 parameter2_type;

    static TR evaluate(T1 a, T2 b){
        return a ^ b;
    }
};
    
template<typename TR, typename T1, typename T2> struct shiftl{
    typedef TR return_type;
    typedef T1 parameter1_type;
    typedef T1 parameter2_type;

    static TR evaluate(T1 a, T2 b){
        return a << b;
    }
};
    
template<typename TR, typename T1, typename T2> struct shiftr{
    typedef TR return_type;
    typedef T1 parameter1_type;
    typedef T1 parameter2_type;

    static TR evaluate(T1 a, T2 b){
        return a >> b;
    }
};
    
// [[[end]]]

}} // namespace functionalcpp::operators

#endif // FUNCTIONALCPP__OPERATORS__HPP
