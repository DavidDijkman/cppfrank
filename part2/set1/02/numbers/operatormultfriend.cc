#include "numbers.ih"

Numbers operator*(int factor, Numbers const &numbers)
{
    Numbers result(numbers);
    result *= factor;
    return result;
}