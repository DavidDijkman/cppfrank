#include "main.ih"

void collapsBlanks(string &line) 
{
    bool lastWasBlank = isBlank(line[0]);
    size_t idx = 1;             // skip the first character
    while (idx < line.size())   // line.size changes as we erase chars
    {
                                // erase if repeated
        if (isBlank(line[idx]) && lastWasBlank)
        {
            line.erase(idx, 1);
            continue;
        }
        
        lastWasBlank = isBlank(line[idx]);
        ++idx;                  // only iterate if we don't erase a char
    }
}

// You could also do this with a string::iterator. But we were unsure
// which would be preferred. the same is true for collapsChar.cc