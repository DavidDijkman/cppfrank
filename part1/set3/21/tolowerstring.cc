#include <iostream>
#include <string>

using namespace std;

#include "main.ih"

string toLowerString(const string& text) 
{
    string lower = "";
    
    for (size_t index = 0 ; index < text.length() ; index++)
    {
        lower += tolower(text[index]);
    }

    return lower;
}