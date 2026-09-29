#include <iostream>
#include <string>
#include <vector>

using namespace std;

#include "main.ih"

int main(int argc, char *argv[]) 
{
    extern char *environ[];

    const size_t environ_len = 59;
    string list[59];

    for (size_t idx = 0; idx < 59; ++idx)
        list[idx] = environ[idx];

    quicksort(list, 0, environ_len);

    printList(list, environ_len);
}