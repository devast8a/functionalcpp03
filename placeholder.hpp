#ifndef FUNCTIONALCPP__PLACEHOLDER__HPP
#define FUNCTIONALCPP__PLACEHOLDER__HPP

namespace functionalcpp{ namespace placeholder{

struct Placeholder{};

/**
 * Marks a placeholder in expressions.
 * What the placeholder means depends on the expression.
 *
 * For example take constructing lambdas
 *
 * Func1<int,int> fn = lambda/ _ + 5
 * fn will add 5 to whatever argument you give it.
 * Here the underscore means the first parameter.
 *  
 * Func2<int,int,int> fn = lambda/ _ * _
 * fn will multiply together the two arguments you give it.
 * The first underscore means the first parameter.
 * The second underscore means the second parameter.
 *
 * The rule for underscore is, the N'th underscore is the N'th parameter.
 *
 * _ is an instance of functionalcpp::PlaceholderPositional
 *
 * @see PlaceholderExplicit If you would like to explicitly refer to a parameter
 */
struct PlaceholderPositional : Placeholder{} _;

template<int T> struct PlaceholderExplicit : Placeholder{};

PlaceholderExplicit<0> _0;
PlaceholderExplicit<1> _1;
PlaceholderExplicit<2> _2;
PlaceholderExplicit<3> _3;
PlaceholderExplicit<4> _4;
PlaceholderExplicit<5> _5;
PlaceholderExplicit<6> _6;
PlaceholderExplicit<7> _7;
PlaceholderExplicit<8> _8;
PlaceholderExplicit<9> _9;
PlaceholderExplicit<10> _10;
PlaceholderExplicit<11> _11;
PlaceholderExplicit<12> _12;
PlaceholderExplicit<13> _13;
PlaceholderExplicit<14> _14;
PlaceholderExplicit<15> _15;

}} // namespace functionalcpp::placeholder

#endif // FUNCTIONALCPP__PLACEHOLDER__HPP
