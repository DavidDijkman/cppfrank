#include "calculator.ih"

Value Calculator::parenthesized()
{
    Value ret = evaluate();

    if (!d_ok)
        return ret;

    if (!charToken(')'))
    {
        cout << "parenthesis mismatch\n";
        d_ok = false;
    }

    return ret;
}