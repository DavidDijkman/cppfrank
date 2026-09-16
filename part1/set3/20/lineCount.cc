#include <iostream>
#include <string>

#include "main.ih"

using namespace std;

int lineCount()
{
    int count = 0;
    string dummy;
    while (getline(cin, dummy))
        count++;
    return count;
}