#include "main.ih"

bool anyDecimal(size_t argc, char const *const argv[])
{
    bool all_int = true;

                            // check if any arguments contain a decimal point
    for (size_t idx = 1; idx < argc; ++idx) 
    {
        string arg = argv[idx];
        if (arg.find('.'))          
        {
            all_int = false; // any decimal point makes the list not all_int
            break;
        }
    }

    return all_int;
}