#include "calculator.ih"

void Calculator::toDouble(Value &rvalue)
{
    if (rvalue.token() == INT)
        rvalue = Value(static_cast<double>(rvalue.intValue()));
}