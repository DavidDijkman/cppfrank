#include <string>

#include "main.ih"

void boundCall(int argc, char* argv[])
{
    auto [exists, nr, value] = combine(argc, argv);

    printRet(exists, nr, value);
}