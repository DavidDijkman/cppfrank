#include <iostream>

#include "main.ih"

size_t charCount()
{
    size_t count = 0;
    char dummy;
    while (cin.get(dummy))
        ++count;
    return count;
}
