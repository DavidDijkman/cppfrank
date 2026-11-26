#include "numbers.ih"

Numbers &Numbers::operator/=(int divisor)
{
    if (divisor == 0)
    {
        cerr << "Error: Division by zero\n";
        return *this;
    }

    for (size_t idx = 0; idx < d_size; ++idx)
        d_nums[idx] /= divisor;

    return *this;
}