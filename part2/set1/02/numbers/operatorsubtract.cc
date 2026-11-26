#include "numbers.ih"

Numbers Numbers::operator-(Numbers const &other) const
{
    Numbers result(*this);
    result -= other;
    return result;
}