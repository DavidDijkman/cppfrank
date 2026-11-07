#include "charcount.ih"

void CharCount::insert(char ch, size_t idx)
{
    if (d_info.nCharObj == d_capacity)
        enlarge();

    // Shift elements idx on place up, such that a new char can be inserted
    for (size_t i = d_info.nCharObj; i != idx; --i)
        d_info.ptr[i] = d_info.ptr[i - 1];

    // Place new
    new (d_info.ptr + idx) Char{ ch, 1 };   // placement new
    ++d_info.nCharObj;
}