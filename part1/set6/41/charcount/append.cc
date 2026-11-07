#include "charcount.ih"

void CharCount::append(char ch, size_t idx)
{
    // Double capacity if required
    if (d_info.nCharObj == d_capacity)
    enlarge();

    // Append character at the end
    new (d_info.ptr + idx) Char{ ch, 1 };   // placement new
    ++d_info.nCharObj;
}