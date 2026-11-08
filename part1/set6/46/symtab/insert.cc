#include "symtab.ih"

void Symtab::insert(size_t index, std::string const &ident)
{
    // Enlarge capacity if necessary
    if (d_size == d_capacity)
        enlarge();

    // Shift symbols to the right to make space for the new symbol
    for (size_t idx = d_size; idx > index; --idx)
        d_symbol[idx] = d_symbol[idx - 1];

    // Insert the new symbol at the specified index with a default value of 0
    d_symbol[index] = new Symbol(ident, 0);
    ++d_size;    
}