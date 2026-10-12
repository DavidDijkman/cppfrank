#include "charcount.ih"

    // by 

CharCount::Action CharCount::locate(unsigned char uchar, size_t &idx) const
{
    for (size_t i = 0; i != d_info.nCharObj; ++i)
    {
        unsigned char current = d_info.ptr[i].ch;

        // Character found, increment its count
        if (current == uchar)          
        {
            idx = i;
            return INC;
        }
        
        // Character not found, insert it in the correct position
        if (current > uchar)
        {
            idx = i;
            return INSERT;
        }
    }

    // Character not found, append it to the end of the array
    idx = d_info.nCharObj;
    return APPEND;
}
