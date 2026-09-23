#include "functions.h"

string processLine(const string line, const string charsToCollapse) 
{
    string lineResult = line;

    for (char character : charsToCollapse) 
    {
        if (containsChar(lineResult, character)) 
        {
            if (isBlank(character)) 
            {
                lineResult = collapsBlanks(lineResult);
            }
            else 
            {
                lineResult = collapsChar(lineResult, character);
            }
        } 
    }
    return lineResult;

}