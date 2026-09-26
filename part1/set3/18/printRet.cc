#include <iostream>
#include <string>

#include "main.ih"

using namespace std;

bool printRet(bool exists, size_t nr, string value)
{
    if (exists) 
    {
        cout << nr << " " << value << '\n';
        return true;
    }
    
    cout << "Argument nr " << nr << " does not exist." << '\n';
    return false;
}