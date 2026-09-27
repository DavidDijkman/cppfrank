#include <string>

#include "main.ih"

bool structCall(size_t argc, char* argv[]) 
{
    ReturnValues ret = combine(argc, argv);

    return printRet(ret.exists, ret.nr, ret.value);
}