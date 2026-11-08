#include "calculator.ih"

bool Calculator::div(Value &lhs)
{
    Value rhs = factor();

    lhs = rvalue(lhs);
    rhs = rvalue(rhs);

            // check for division by 0
    if (rhs.token() == INT && !divisionOK(rhs.intValue() == 0))
        return false;

    if (rhs.token() == DOUBLE && 
            !divisionOK(fabs(rhs.doubleValue()) < s_zeroDouble))
        return false;

            // change to double division if necessary
    equalize(lhs, rhs);

    if (lhs.token() == INT)
        lhs = Value(lhs.intValue() / rhs.intValue());
    else
        lhs = Value(lhs.doubleValue() / rhs.doubleValue());

    return true;
}