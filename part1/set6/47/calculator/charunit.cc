#include "calculator.ih"

Value Calculator::charUnit()
{
    if (charToken('('))
        return parenthesized();

    if (charToken('+'))
        return rvalue(factor());

    if (charToken('-'))
        return unaryMinus();

    return notOK();
}