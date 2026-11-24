#include "data.ih"

void Data::swap(Data &other, Type thisType, Type otherType)
{
        // safe: type-specific swaps preserve the lifetime of union members.
    (this->*s_swap[thisType][otherType])(other);
}
