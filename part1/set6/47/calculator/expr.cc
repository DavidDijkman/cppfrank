#include "calculator.ih"

Value Calculator::expr()
{
    Value ret = term();                                 // first term

    while ((this->*s_term[charTokens("+-")])(ret))      // add or sub terms
        ;

    return ret;
}