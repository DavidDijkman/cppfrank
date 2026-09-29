#include <string>

#include "main.ih"

ReturnValues combine(size_t argc, char *argv[])
{
    size_t req = stoul(argv[1]) - 1;
    
    ReturnValues ret{false, req, ""};
    
    if (req < argc)         // check if index is in range and modify struct
    {
        ret.exists = true;
        ret.value = argv[req];
    }

    return ret;
}