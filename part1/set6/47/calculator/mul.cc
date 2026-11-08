#include "calculator.ih"

bool Calculator::mul(Value &lhs)
{
    Value rhs = factor();

    lhs = rvalue(lhs);
    rhs = rvalue(rhs);


            // switch to doubles if necessary
    Token type = equalize(lhs, rhs);

    if (type == INT)
        lhs = Value(lhs.intValue() * rhs.intValue());
    else
        lhs = Value(lhs.doubleValue() * rhs.doubleValue());

    return true;
}