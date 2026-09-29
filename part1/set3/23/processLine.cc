#include "main.ih"

void processLine(string &line, string const &charsToCollapse) 
{
    for (char character : charsToCollapse) 
    {
        if (isBlank(character)) 
            collapsBlanks(line);
        else 
            collapsChar(line, character);
    }
}