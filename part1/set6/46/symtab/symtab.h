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
        // Constructors and destructor
        Symtab();
        ~Symtab();

        // Disable copy constructor and assignment operator
        Symtab(Symtab const &other) = delete;       
        Symtab &operator=(Symtab const &other) = delete;
        
        // Members to find a symbol by its identifier or index
        Symbol &find(std::string const &ident);
        size_t findIdx(std::string const &ident);

        // Accesors
        size_t size() const;
        Symbol &at(size_t index);
        Symbol const &at(size_t index) const;

    private:
        // Manage allocation and insertion of symbols
        void enlarge();
        void insert(size_t index, std::string const &ident);
};

#endif
