#include <iostream>
#include <string>
#include <vector>

#include "main.ih"

void printList(string list[], size_t len)
{
    for (size_t idx = 0; idx < len; idx++)
    {
        cout << list[idx] << '\n';
    }
}