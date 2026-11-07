#include "calculator.ih"

Value Calculator::unaryMinus()
{
    Value ret = rvalue(factor());

    if (ret.token() == INT)
        ret = Value(-ret.intValue());

    else if (ret.token() == DOUBLE)
        ret = Value(-ret.doubleValue());

    return ret;
}