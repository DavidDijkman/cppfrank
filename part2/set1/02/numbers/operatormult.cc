#include "numbers.ih"

Numbers Numbers::operator*(int factor) const
{
    Numbers result(*this);
    result *= factor;
    return result;
}