#include "numbers.ih"

Numbers::Numbers(size_t count)
:
    d_size(count),
    d_num(new int[count])
{}