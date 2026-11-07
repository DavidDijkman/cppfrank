#include "calculator.ih"

Value Calculator::notOK()
{
    d_ok = false;
    cout << "error encountered";
    return Value();
}