#include <iostream>
#include <string>
#include <vector>

using namespace std;

#include "main.ih"

int main(int argc, char *argv[], char *environ[]) 
{
    const size_t environ_len = 59;
    string list[59];

    size_t index = 0;
    while (environ[index] != nullptr && index < 59)
    {
        list[index] = environ[index];
        ++index;
    }

    quicksort(list, 0, environ_len);

    printList(list, environ_len);
}