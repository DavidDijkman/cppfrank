#include "strings.ih"

void Strings::reserve(size_t newCapacity)
{
    if (newCapacity <= d_capacity)  // return if trying to shrink capacity
        return;

    std::string **tmp = rawPointers(newCapacity);

                                    // copy all string pointers to new array
    for (size_t idx = 0; idx != d_size; ++idx)
        tmp[idx] = d_str[idx];

    delete[] d_str;

    d_str = tmp;                    // replace d_str with newly sized array
    d_capacity = newCapacity;
}