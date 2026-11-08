#include "calculator.ih"

bool (Calculator::*Calculator::s_term[])(Value &) =
{
    &Calculator::add,
    &Calculator::sub,
    &Calculator::done
};