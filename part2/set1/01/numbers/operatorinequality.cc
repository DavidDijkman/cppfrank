#include "numbers.ih"

bool Numbers::operator!=(Numbers const &other)
{
            // if any is not equal, return true;
    for (size_t idx = 0; idx < d_size; ++idx)
        if (d_nums[idx] != other[idx])
            return true;
    
    return false;
}