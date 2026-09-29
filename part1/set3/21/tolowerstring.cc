#include <iostream>
#include <string>

#include "main.ih"

string toLowerString(const string& text) 
{
    string lower = "";
    
    for (size_t idx = 0 ; idx < text.length() ; idx++)
        lower += tolower(text[idx]);

    return lower;
}