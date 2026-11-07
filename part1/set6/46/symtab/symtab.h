#ifndef INCLUDED_SYMTAB_
#define INCLUDED_SYMTAB_

#include <string>
#include "../symbol/symbol.h"

class Symtab
{
    size_t d_size;
    size_t d_capacity;
    Symbol **d_symbol;

    public:
        Symtab();
        ~Symtab();

        Symtab(Symtab const &other) = delete;       
        Symtab &operator=(Symtab const &other) = delete;
        
        Symbol &find(std::string const &ident);
        size_t findIdx(std::string const &ident);

        size_t size() const;
        Symbol &at(size_t index);
        Symbol const &at(size_t index) const;

    private:
        void enlarge();
        void insert(size_t index, std::string const &ident);
};

#endif
