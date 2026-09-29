#include <vector>
#include <string>
#include <iostream>

#include "main.ih"

void quicksort(string list[], size_t left, size_t right)
{
    if (left >= right)          // <= 1 element, already sorted
        return;

    size_t mid = partition(list, left, right); // arrange pivot

    quicksort(list, left, mid); // recursively apply for the two half-arrays
    quicksort(list, mid + 1, right);
}