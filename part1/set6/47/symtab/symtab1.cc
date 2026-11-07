#include "symtab.ih"

    // by 

Symtab::Symtab()
:
    d_size(0),
    d_capacity(8),
    d_symbol(new Symbol*[8])
{
}
