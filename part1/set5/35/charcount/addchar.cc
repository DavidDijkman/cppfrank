#include "charcount.ih"

    // by 

void CharCount::addChar(char ch, Action action, size_t idx)
{
    if (action == INC)
    {
        ++d_info.ptr[idx].count;       // Increment the count of the character
        return;
    }

    size_t newSize = d_info.nCharObj + 1;
    Char *newPtr = new Char[newSize];   // assign new memory for a new pointer

    // Append characters with index lower than new inserted character
    for (size_t i = 0; i != idx; ++i)
        newPtr[i] = d_info.ptr[i];
    
    // Insert the new character
    newPtr[idx] = Char{ch, 1};

    // Append characters with index higher than new inserted character
    for (size_t i = idx; i!= d_info.nCharObj; ++i)
        newPtr[i + 1] = d_info.ptr[i];
    
    d_info.ptr = newPtr;
    d_info.nCharObj = newSize;
}
