#include <iostream>
#include <string>

#include "main.ih"

size_t lineCount()
{
    size_t count = 0;
    string dummy;
    while (getline(cin, dummy))
        ++count;
    return count;
}