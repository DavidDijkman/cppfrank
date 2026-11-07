#include "symtab.ih"

Symbol &Symtab::find(std::string const &ident)
{
    return *d_symbol[findIdx(ident)];
}