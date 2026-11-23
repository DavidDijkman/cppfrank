#include "numbers.ih"

void Numbers::write(ostream &out) const
{
    out << "Numbers of length " << d_size << ":\n";
    for (size_t idx = 0; idx < d_size; ++idx)
        out << d_num[idx] << ' ';
    out << '\n';
}
