#include "main.ih"

void collapsChar(string &line, char charToCollapse) 
{
    char lastChar = line[0];    
    size_t idx = 1;             // skip the first character
    while (idx < line.size())   // line.size changes as we erase chars
    {
                                // erase if repeated
        if (line[idx] == lastChar && line[idx] == charToCollapse)
        {
            line.erase(idx, 1);
            continue;
        }
        
        lastChar = line[idx];
        ++idx;                  // only iterate if we don't erase a character
    }
}