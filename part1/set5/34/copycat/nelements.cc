#include "copycat.ih"

size_t CopyCat::nElements(char const *const *data)
{
    size_t count = 0;

    while (data[count] != nullptr) // environ-like array ends in nullptr 
        ++count;

    return count;
}