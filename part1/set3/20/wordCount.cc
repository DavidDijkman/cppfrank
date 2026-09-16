#include <iostream>
#include <string>

#include "main.ih"

using namespace std;

int wordCount()
{
    int count = 0;
    string word;
    while (cin >> word)
        count++;
    return count;
}