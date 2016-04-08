#ifndef FUNCTIONALCPP__FUNC__HPP
#define FUNCTIONALCPP__FUNC__HPP

namespace functionalcpp { namespace function {

/**
 * FuncX objects are objects that are intended to be used by
 * API consumers. They should hide as much of the detail of
 * the system as possible.
 *
 * When calling a FuncX object, the operator() method is called,
 * which then calls the virtual evaluate function on the reference
 * member.
 *
 * Went for this approach as it seemed like the method that would
 * provide the cleanest forward facing API (even at the cost of
 * some performance).
 *
 * reference honestly isn't handled all that well, I've yet to
 * decide hot to actually handle it properly.
 */
template<typename TR> struct Func0{
private:
    const Func0<TR>* reference;
    virtual TR evaluate() const{}

protected:
    Func0() : reference(this){}

public:
    static const int parameter_count = 0;
    static const bool returns_value = true;
    typedef TR return_type;

    TR operator()() const{
        this->reference->evaluate();
    }
};

template<typename TR, typename T1> struct UpConvert1;

/**
 * @see Func0
 */
template<typename TR, typename T1> struct Func1{
private:
    const Func1<TR, T1>* reference;
    virtual TR evaluate(T1 a1) const{}

protected:
    Func1() : reference(this){}

public:
    static const int parameter_count = 1;
    static const bool returns_value = true;
    typedef TR return_type;
    typedef T1 parameter1_type;

    Func1(Func0<TR> func) : reference(new UpConvert1<TR, T1>(func)){}

    TR operator()(T1 a1) const{
        this->reference->evaluate(a1);
    }
};

/**
 * Currently an awful hack that wraps Func's with lower parameter counts by ignoring
 * extra parameters.
 *
 * The way I had previously tried to do this was by using a common base class, which
 * contained a version of the evaluate function that took no parameters. Parameters
 * were instead passed via another mechanism. To "up convert" to Func's with more
 * parameters simply involves constructing a new Func object and setting the internal
 * reference field to the old base class.
 *
 * This is probably the best way to go, but I couldn't really figure out a way of
 * properly handling the arguments.
 */
template<typename TR, typename T1> struct UpConvert1 : Func1<TR, T1>{
    const Func0<TR> func;

    UpConvert1(Func0<TR> func) : func(func){}

    virtual TR evaluate(T1) const{
        return func();
    }
};

/**
 * FuncImplX are the base classes that implementers of functions and lambda expressions inherit from.
 *
 * If any of the functions here are called (Like if you call a lambda expression before converting it
 * to a FuncX object) the entire expression should be known at this point (encoded as the type TOperation,
 * which is the derived class) so we can call our expression directly ie. No function pointers.
 *
 * @see functionalcpp::lambda_expression::Constant<T> If you want to see how to implement stuff using this
 *
 */
template<typename TOperation, typename TR> struct FuncImpl0 : Func0<TR>{
    virtual TR evaluate() const{
        return ((TOperation*)this)->evaluate();
    }

    // This allows you to call the expression directly without needing to convert
    // to a Func object.
    TR operator()() const{
        return ((TOperation*)this)->evaluate();
    }

    // When expressions are used directly (like in standard library functions)
    // we won't have a chance to convert to Func's with more parameters.
    // This provides the same functionality. Though it might cause issues in
    // unexpected ways, probably with ambiguities.
    template<typename T1> TR operator()(T1) const{
        return ((TOperation*)this)->evaluate();
    }
};

template<typename TOperation, typename TR, typename T1> struct FuncImpl1 : Func1<TR, T1>{
    virtual TR evaluate(T1 a1) const{
        return ((TOperation*)this)->evaluate(a1);
    }

    TR operator()(T1 a1) const{
        return ((TOperation*)this)->evaluate(a1);
    }
};

}} // namespace functionalcpp::function

#endif // FUNCTIONALCPP__FUNC__HPP
