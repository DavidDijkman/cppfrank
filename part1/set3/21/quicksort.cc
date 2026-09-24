#include <vector>
#include <string>
#include <iostream>

#include "main.ih"

void quicksort(string list[], size_t left, size_t right)
{
    if (left >= right)
        return;

    size_t mid = partition(list, left, right);

    if (mid > left)
        quicksort(list, left, mid);

    if (mid < right)
        quicksort(list, mid + 1, right);
}