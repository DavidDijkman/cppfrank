#include "numbers.ih"

namespace
{
    int dummy;              // returned for out-of-range indices
}

int &Numbers::checkRange(size_t index) const
{
    if (index >= d_size)
    {
        cerr << "Numbers::at: index " << index
             << " out of range (size " << d_size << ")\n";
        dummy = 0;         
        return dummy;
    }

    return d_num[index];
}