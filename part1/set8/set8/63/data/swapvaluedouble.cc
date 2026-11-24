#include "data.ih"

void Data::swapValueDouble(Data& other)
{
    other.swap(*this, DOUBLE, VALUE);
}
