#include "strings.ih"

void Strings::add(std::string const &next)
{
    if (d_size == d_capacity)   // reserve double capacity if full
        reserve(d_capacity ? 2 * d_capacity : 1);

    d_str[d_size++] = new std::string(next);
}