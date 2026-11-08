#include "symtab.ih"

Symbol const &Symtab::at(size_t index) const
{
    return *d_symbol[index];
}