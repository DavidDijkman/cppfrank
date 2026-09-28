#include <string>

#include "main.ih"

using namespace std;

ReturnValues combine(size_t argc, char const *argv[])
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

// Function takes arguments with first argument an string type, which 
// is converted to an unsigned long. The function checks whether the index of
// this argument is in range of all arguments. A struct is returned whether 
// this is the case or not.