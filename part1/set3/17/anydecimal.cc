#include <iostream>
#include <cstring>

#include "main.ih"

bool anyDecimal(size_t argc, char *argv[])
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