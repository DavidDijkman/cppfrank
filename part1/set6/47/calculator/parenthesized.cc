#include "calculator.ih"

Value Calculator::parenthesized()
{
    Value ret = evaluate(); // evaluate insides of parentheses

    if (!d_ok)
        return ret;

    if (!charToken(')'))    // closing parentheses has to match
    {
        cout << "parenthesis mismatch\n";
        d_ok = false;
    }

    return ret;
}