#include "functions.h"

string collapsChar(const string line, char charToCollapse) 
{
    string lineResult;
    char lastChar = '\0';

    for (char character : line) 
    {
        if (character == charToCollapse) 
        {
            if (character != lastChar) 
            {
                lineResult += character;
            }
            lastChar = character;
        } 
        else 
        {
            lineResult += character;
            lastChar = character;
        }
    }
    return lineResult;
}