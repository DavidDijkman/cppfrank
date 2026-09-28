#include <iostream>
#include <string>

#include "main.ih"

bool printRet(bool exists, size_t nr, string const &text)
{
    if (exists) 
    {
        cout << nr << ' ' << text << '\n';
        return true;
    }
    
    cout << "Argument nr " << nr << " does not exist.\n";
    return false;
}

// Function takes arguments exists, nr and value, and returns a 
// print whether the argument at index nr exists in the arguments of main.cc.