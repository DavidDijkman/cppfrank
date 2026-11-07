#include "calculator.ih"

bool Calculator::sub(Value &lhs)
{
    Value rhs = term();

    lhs = rvalue(lhs);
    rhs = rvalue(rhs);

    Token type = equalize(lhs, rhs);

    if (type == INT)
        lhs = Value(lhs.intValue() - rhs.intValue());
    else
        lhs = Value(lhs.doubleValue() - rhs.doubleValue());

    return true;
}