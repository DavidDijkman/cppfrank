#include "charcount.ih"

CharCount::Char *CharCount::rawCapacity(size_t cap)
{
    return static_cast<Char *>(operator new(cap * sizeof(Char)));
}