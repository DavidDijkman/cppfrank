#include "numbers.ih"

ostream &operator<<(ostream &out, Numbers const &numbers)
{
    for (size_t idx = 0; idx < numbers.d_size; ++idx)
    {
        if (idx != 0)   // no leading space.
            out << ' ';

        out << numbers.d_nums[idx];
    }

    return out;
}