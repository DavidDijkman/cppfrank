#include "data.ih"

void Data::copyDoubles(const Data& other)
{
    u_double = new double[10];

    for (std::size_t i = 0; i < 10; ++i)
        u_double[i] = other.u_double[i];
}