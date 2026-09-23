#include <string>

#include "main.ih"

using namespace std;

ReturnValues combine(int argc, char* argv[])
{
    int req = stoul(argv[1]) - 1;
    
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