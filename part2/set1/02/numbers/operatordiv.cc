#include "numbers.ih"

Numbers Numbers::operator/(int divisor) const
{
    Numbers result(*this);
    result /= divisor;
    return result;
}