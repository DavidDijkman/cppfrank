#include "calculator.ih"

bool Calculator::add(Value &lhs)
{
    Value rhs = term();                 // evaluate right hand term

    lhs = rvalue(lhs);
    rhs = rvalue(rhs);

    Token type = equalize(lhs, rhs);    // convert to double if necessary

    if (type == INT)
        lhs = Value(lhs.intValue() + rhs.intValue());
    else
        lhs = Value(lhs.doubleValue() + rhs.doubleValue());

    return true;
}