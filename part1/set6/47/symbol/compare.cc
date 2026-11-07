#include "symbol.ih"

Symbol::Compare Symbol::compare(std::string const &ident) const
{
    if (d_ident < ident)
        return LHS_FIRST;
    if (d_ident > ident)
        return RHS_FIRST;
    return EQUAL;
}
