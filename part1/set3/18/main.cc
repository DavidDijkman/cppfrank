#include <iostream>
#include <string>

#include "main.ih"

using namespace std;

int main(int argc, char* argv[])
{
    if (argc < 2)           // exit early if no arguments are given
    {
        usage(argv[0]);
        return 1;
    }

    structCall(argc, argv);
    boundCall(argc, argv);
}