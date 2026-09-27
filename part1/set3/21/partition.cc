#include <vector> 
#include <string> 

#include "main.ih"

size_t partition(string list[], size_t left, size_t right)
{
    string const pivotKey = toLowerString(list[left]);
    size_t desc = right;   // all idx >= desc are higher than the pivot
    size_t asc = left + 1; // all idx < asc are smaller than the pivot

    while (asc < desc)
    {
        if (toLowerString(list[asc]) <= pivotKey)
        {
            ++asc;
            continue;
        }

        --desc;
        swap(list[asc], list[desc]);
    }

    swap(list[asc - 1], list[left]);

    return asc - 1;
}