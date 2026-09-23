#include <iostream>
#include <string>

#include "main.h"

using namespace std;

bool printRet(bool exists, size_t nr, string value)
{
    if (exists) {
        cout << nr << " " << value << endl;
        return true;
    }
    
    cout << "Argument nr " << nr << " does not exist." << endl;
    return false;
}