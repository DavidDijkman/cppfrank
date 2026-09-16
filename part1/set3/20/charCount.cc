#include <iostream>

#include "main.ih"

using namespace std;

int charCount()
{
    int count = 0;
    char dummy;
    while (cin.get(dummy))
        count++;
    return count;
}
