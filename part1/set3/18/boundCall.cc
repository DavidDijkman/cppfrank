#include <string>

#include "main.ih"

void boundCall(size_t argc, char* argv[])
{
    auto [exists, nr, value] = combine(argc, argv);

    printRet(exists, nr, value);
}

// Function takes arguments, of which a struct is created using bomine() and
// prints whether the index of the first argument exists in the number of 
// arguments.