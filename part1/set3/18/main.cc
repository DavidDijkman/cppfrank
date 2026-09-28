#include <iostream>
#include <string>

#include "main.ih"

using namespace std;

int main(int argc, char* argv[])
{
    if (argc < 2)           // exit early if no arguments are given
    {
        cout << "Usage: " << argv[0] << " int <string>" << '\n';
        return 0;
    }

    structCall(argc, argv);
    boundCall(argc, argv);
}