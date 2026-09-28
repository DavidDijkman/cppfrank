#include <iostream>
#include <string>

#include "main.ih"

size_t wordCount()
{
    size_t count = 0;
    string word;
    while (cin >> word)
        ++count;
    return count;
}