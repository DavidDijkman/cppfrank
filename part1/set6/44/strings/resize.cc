#include "strings.ih"

void Strings::resize(size_t newSize)
{
    if (newSize > d_capacity)
        reserve(newSize);

    while (d_size < newSize)
        d_str[d_size++] = new std::string;

    while (d_size > newSize)
        delete d_str[--d_size];
}