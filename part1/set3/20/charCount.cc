#include <iostream>

#include "main.ih"

int charCount()
{
    size_t count = 0;
    char dummy;
    while (cin.get(dummy))
        ++count;
    return count;
}
