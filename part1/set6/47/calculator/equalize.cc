#include "calculator.ih"

Token Calculator::equalize(Value &lhs, Value &rhs)
{
    if (lhs.token() == INT && rhs.token() == INT)
        return INT;

    toDouble(lhs);  // if one value is double, make both double
    toDouble(rhs);

    return DOUBLE;
}