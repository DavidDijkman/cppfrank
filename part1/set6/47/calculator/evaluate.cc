#include "calculator.ih"

Value Calculator::evaluate()
{
    Value ret = expr();

    while (charToken('='))
    {
                // handle rightside evaluation before assignment
        Value rhs = evaluate(); 

        if (!d_ok)
            return ret;

        assign(ret, rhs);
    }

    return ret;
}