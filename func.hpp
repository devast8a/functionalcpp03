#ifndef FUNCTIONALCPP__FUNC__HPP
#define FUNCTIONALCPP__FUNC__HPP

namespace functionalcpp { namespace function {

template<class TR> struct Func0{
    static const int parameter_count = 0;
    static const bool has_return_value = true;
    typedef TR return_type;

    template<class TFunc> static void check(const TFunc& func){
        check<TFunc>();
    }
};

template<class T0, class TR> struct Func1{
    static const int parameter_count = 1;
    static const bool has_return_value = true;
    typedef TR return_type;
    typedef T0 parameter1_type;

    Func1<T0, TR>* fn;
    virtual TR apply(const T0& a0){};
    
    Func1() : fn(this){
    }
    
    TR operator()(const T0& a0){
        return fn->apply(a0);
    }
};


}} // namespace functionalcpp::function

#endif // FUNCTIONALCPP__FUNC__HPP
