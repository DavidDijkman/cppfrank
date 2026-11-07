#include "calculator.ih"

Token Calculator::equalize(Value &lhs, Value &rhs)
{
    if (lhs.token() == INT && rhs.token() == INT)
        return INT;

    toDouble(lhs);
    toDouble(rhs);

    return DOUBLE;
}