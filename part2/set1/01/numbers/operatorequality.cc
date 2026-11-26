#include "numbers.ih"

bool Numbers::operator==(Numbers const &other)
{
        // opposite of inequality operator
    return !operator!=(other);
}