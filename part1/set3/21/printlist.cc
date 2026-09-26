#include <iostream>
#include <string>
#include <vector>

using namespace std;

#include "main.ih"

void printList(string list[], size_t len)
{
    for (size_t index = 0; index < len; index++)
    {
        cout << list[index] << '\n';
    }
}