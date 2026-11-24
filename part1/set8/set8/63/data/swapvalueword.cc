#include "data.ih"

void Data::swapValueWord(Data& other)
{
    other.swap(*this, WORD, VALUE);
}
