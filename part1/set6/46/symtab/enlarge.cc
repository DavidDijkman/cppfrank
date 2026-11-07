#include "symtab.ih"

Symbol &Symtab::find(std::string const &name)
{
    // Double the capacity of a new memory
    d_capacity *= 2;
    Symbol **newSym = new Symbol*[d_capacity];
    
    // Copy old pointer
    for (size_t idx = 0; idx != d_capacity; ++idx)
        newSym[idx] = d_symbol[idx];

    // Delete old pointer and update variables
    delete[] d_symbol;
    d_sym = newSym;
}