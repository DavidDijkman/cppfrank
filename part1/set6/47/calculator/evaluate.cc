#include "calculator.ih"

Value Calculator::evaluate()
{
    Value ret = expr();

    while (charToken('='))
    {
        Value rhs = evaluate();

        if (!d_ok)
            return ret;

        assign(ret, rhs);
    }

    return ret;
}