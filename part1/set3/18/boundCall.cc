#include <string>

#include "boundCall.ih"
#include "combine.ih"
#include "printRet.ih"

void boundCall(int argc, char* argv[])
{
    auto [exists, nr, value] = combine(argc, argv);

    printRet(exists, nr, value);
}