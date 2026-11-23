#include "numbers.ih"

Numbers::Numbers(Numbers const &other)
:
    d_size(other.d_size),
    d_num(new int[other.d_size])
{
    for (size_t idx = 0; idx != d_size; ++idx)
        d_num[idx] = other.d_num[idx];
}