#include "symbol.ih"

Token Symbol::type() const
{
    return d_value.token();
}