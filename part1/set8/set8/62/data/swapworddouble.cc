#include "data.ih"

void Data::swapWordDouble(Data& other)
{
    other.swap(*this, DOUBLE, WORD);
}
