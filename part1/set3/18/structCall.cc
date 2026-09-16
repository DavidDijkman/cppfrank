#include <string>

#include "structCall.ih"
#include "combine.ih"
#include "printRet.ih"

bool structCall(int argc, char* argv[]) 
{
    
    ReturnValues ret = combine(argc, argv);

    return printRet(ret.exists, ret.nr, ret.value);
}