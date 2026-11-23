#include "numbers.ih"

Numbers::Numbers(size_t count, int value)
:
    d_size(count),
    d_num(new int[count])
{
    for (size_t idx = 0; idx < count; ++idx)
        d_num[idx] = value;
}
