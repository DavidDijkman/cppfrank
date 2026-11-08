#include "calculator.ih"

bool Calculator::mod(Value &lhs)
{
    Value rhs = factor();

    lhs = rvalue(lhs);
    rhs = rvalue(rhs);

    rhs = rvalue(rhs);

                // check for division by 0
    if (rhs.token() == INT && !divisionOK(rhs.intValue() == 0))
        return false;

    if (rhs.token() == DOUBLE && 
            !divisionOK(fabs(rhs.doubleValue()) < s_zeroDouble))
        return false;

                // switch to doubles if necessary
    equalize(lhs, rhs);

    if (lhs.token() == INT)
        lhs = Value(lhs.intValue() % rhs.intValue());
    else
        lhs = Value(fmod(lhs.doubleValue(), rhs.doubleValue()));

    return true;
}