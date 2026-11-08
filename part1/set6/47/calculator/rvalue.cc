#include "calculator.ih"

Value Calculator::rvalue(Value const &value) const
{
    if (value.token() != IDENT)
        return value;
        
                // exchange symbols for their numerical value
    return d_symtab.at(value.identidxValue()).value();
}