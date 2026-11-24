#include "data.ih"

void Data::moveDoubles(Data& other)
{
    u_double = other.u_double;
    other.u_double = nullptr;
}