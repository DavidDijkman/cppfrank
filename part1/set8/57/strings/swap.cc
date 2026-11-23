#include "strings.ih"

void Strings::swap(Strings &other)
{
    string *tmp = d_str;                        // swap the pointers
    d_str = other.d_str;
    other.d_str = tmp;

    size_t size = d_size;                       // swap the sizes
    d_size = other.d_size;
    other.d_size = size;
}
