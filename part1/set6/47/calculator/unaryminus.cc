#include "calculator.ih"

Value Calculator::unaryMinus()
{
    Value ret = rvalue(factor());

            // negate factor to the right
    if (ret.token() == INT)
        ret = Value(-ret.intValue());

    else if (ret.token() == DOUBLE)
        ret = Value(-ret.doubleValue());

    return ret;
}