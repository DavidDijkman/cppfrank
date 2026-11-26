#include "numbers.ih"

int const &Numbers::operator[](size_t index) const
{
    return d_nums[index];   // can not be used to change the object.
}