#include "charcount.ih"

size_t CharCount::count(istream &in)
{
    size_t total = 0;
    char ch;

    // Read characters from the input stream
    while (in.get(ch))
    {
        ++total;

        size_t idx = 0;
        
        // Locate the character, determine action and add it to the array
        Action action = locate(static_cast<unsigned int>(ch), idx);
        CharCount::addChar(ch, action, idx);
    }

    return total;
}
