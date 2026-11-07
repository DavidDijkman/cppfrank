#include "symtab.ih"

void Symtab::insert(size_t index, std::string const &ident)
{
    if (d_size == d_capacity)
        enlarge();

    for (size_t idx = d_size; idx > index; --idx)
        d_symbol[idx] = d_symbol[idx - 1];

    d_symbol[index] = new Symbol(ident, 0);
    ++d_size;    
}