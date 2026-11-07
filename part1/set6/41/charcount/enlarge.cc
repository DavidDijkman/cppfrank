#include "charcount.ih"

void CharCount::enlarge()
{
    // Double the capacity of a new memory
    size_t newCapacity = d_capacity * 2;
    Char *newPtr = rawCapacity(newCapacity);

    // Copy old pointer
    for (size_t i = 0; i != d_info.nCharObj; ++i)
        newPtr[i] = d_info.ptr[i];

    // Delete old pointer and update variables
    operator delete(d_info.ptr);
    d_info.ptr = newPtr;
    d_capacity = newCapacity;
}