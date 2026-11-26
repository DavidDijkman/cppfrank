#include "numbers.ih"

Numbers &Numbers::operator-=(Numbers const &other)
{
    if (d_size != other.d_size)
    {
        cerr << "Error: Numbers have different sizes\n";
        return *this;
    }

    for (size_t idx = 0; idx < d_size; ++idx)
        d_nums[idx] -= other.d_nums[idx];

    return *this;
}