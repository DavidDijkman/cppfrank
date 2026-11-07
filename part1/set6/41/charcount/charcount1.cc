#include "charcount.ih"

CharCount::CharCount()
{
    d_info.ptr = rawCapacity(d_capacity);   // allocate room for 1 Char
}