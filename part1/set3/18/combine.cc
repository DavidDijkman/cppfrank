#include <string>

#include "main.ih"

using namespace std;

ReturnValues combine(size_t argc, char* argv[])
{
    size_t req = stoul(argv[1]) - 1;
    
    ReturnValues ret;
    ret.exists = false;
    ret.nr = req;
    ret.value = "";
    
    if (req < argc) 
    {
        ret.exists = true;
        ret.value = argv[req];
    }

    return ret;
}