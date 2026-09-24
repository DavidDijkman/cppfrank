#include <vector> 
#include <string> 

#include "main.ih"

size_t partition(string list[], size_t left, size_t right)
{
    string const pivotKey = toLowerString(list[left]);
    size_t desc = right;
    size_t asc = left + 1;

    while (asc < desc)
    {
        if (toLowerString(list[asc]) > pivotKey)
        {
            desc--;
            swap(list[asc], list[desc]);
        }
        else
        {
            asc++;
        }
    }

    swap(list[asc - 1], list[left]);

    return asc - 1;
}