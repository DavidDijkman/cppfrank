#include "numbers.ih"

int &Numbers::operator[](size_t index)
{
    return d_nums[index];   // can be used to change the object.
}