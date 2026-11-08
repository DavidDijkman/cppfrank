#include "symtab.ih"

size_t Symtab::findIdx(std::string const &ident)
{
    size_t begin = 0;
    size_t end = d_size;

    // Use binary search to find the index of the symbol with the given identifier
    while (begin != end)
    {
        size_t mid = begin + (end - begin) / 2;

        switch (d_symbol[mid]->compare(ident))
        {
            case Symbol::LHS_FIRST:
                begin = mid + 1;
                break;

            case Symbol::RHS_FIRST:
                end = mid;
                break;

            case Symbol::EQUAL:
                return mid;
        }
    }

    insert(begin, ident);
    return begin;
}
