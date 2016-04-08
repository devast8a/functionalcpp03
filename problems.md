Currently functions and expressions are too tightly coupled.
We're hackily supporting expressions by using dummy values or not passing
things at all.

Take the following expression (_1 + x) > (_2 + 3)
Assuming we pass int as both parameters we want the entire expression to have
the signature Func2<bool, int, int>

Each part of the expression has its own signature that isn't really related to
the signature of the entire expression. The following list is roughly what the
signatures of parts of the expression would be.

Expression      Signature
_1              Func1<int, int>
x               Func0<int>
_ + _           Func2<int, int, int>

Expression      Signature
_2              Func2<int, *, int>
3               Func0<int>
_ + _           Func2<int, int, int>

Expression      Signature
_ > _           Func2<bool, int, int>

What really needs to be done is to attach some kind of extra tracking mechaism to
the expression to keep track of placeholders which will ultimately influence the
signature of the entire expression WHILE removing coupling between expressions
and their signatures.








Casting.

Given something like Func1<int, int> = lambda/ _ > 3
This will return an error since Func1<bool, int> can not be converted to
Func1<int, int>. This raises an interesting question.

Should we allow this conversion to be done implcitly?
Given an expression of the form Func0<TB> = Func0<TA>
And TA can be converted to TB, should we convert Func0<TA> to Func0<TB>

It shouldn't be too hard to do this. Use a bit of template magic and check
that we're actually allowed to cast everything otherwise trigger some kind of
static exception.
