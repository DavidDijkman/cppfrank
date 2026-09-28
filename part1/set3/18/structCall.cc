#include <string>

#include "main.ih"

bool structCall(size_t argc, char const *argv[]) 
{
    ReturnValues ret = combine(argc, argv);

    return printRet(ret.exists, ret.nr, ret.value);
}

// Function takes arguments, of which a struct is created using bomine() and
// prints whether the index of the first argument exists in the number of 
// arguments.