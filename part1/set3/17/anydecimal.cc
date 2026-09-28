#include <iostream>
#include <cstring>

#include "main.ih"

bool anyDecimal(size_t argc, char const *argv[])
{
    bool all_int = true;

                            // check if any arguments contain a decimal point
    for (size_t idx = 1; idx < argc; ++idx) 
    {
        string arg = argv[idx];
        if (arg.find('.'))          
        {
            all_int = false;
            break;
        }
    }

    return all_int;
}


// The function will check if any of the arguments contain a decimal point. 
// The function will return a boolean that is true, if neither of the 
// arguments contain a decimal point and are of int type. A boolean of false
// will be returned if any of the arguments contain a decimal point and are
// of float type.  