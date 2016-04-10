#ifndef FUNCTIONALCPP__CHAIN__HPP
#define FUNCTIONALCPP__CHAIN__HPP

namespace functionalcpp { namespace chain {

/**
 * Implements functionality for the chain operator >>=
 */
template<typename TLeft, typename TRight> struct chain{
    TLeft left;
    TRight right;

    typedef typename TRight::return_type return_type;
    
    chain(TLeft left, TRight right) :
        left(left),
        right(right){}

    /**
     * Actually evaluate the chain,
     * in this case left is the initial value
     * right is the chain
     */
    operator return_type(){
        return right(left);
    }

    /**
     * Provide support for calling the chain like a function
     */
    template<typename T> return_type operator()(T value){
        return right(left(value));
    }
};

/**
 * Actually implement the chain operator >>=
 *
 * As it stands, this will probably cause problems with code that actually uses >>= as shift right and assign.
 * The solution is to ensure that TRight is a Func. We could replace TRight with Func but the we add a level of
 * indirection.
 */
template<typename TLeft, typename TRight>
chain<TLeft, TRight> operator >>=(TLeft left, TRight right){
    return chain<TLeft, TRight>(left, right);
}

} } // namespace functionalcpp::chain

#endif // FUNCTIONALCPP__CHAIN__HPP
