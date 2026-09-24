#include "main.ih"

string collapsBlanks(const string line) 
{
    string lineResult;
    bool lastWasBlank = false;

    for (char character : line) 
    {
        if (isBlank(character)) 
        {
            if (!lastWasBlank) 
            {
                lineResult += ' ';
            }
            lastWasBlank = true;
        } 
        else 
        {
            lineResult += character;
            lastWasBlank = false;
        }
    }
    return lineResult;
}