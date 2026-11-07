#include "calculator.ih"

bool Calculator::ok()
{
    return d_ok && atEoln();
}