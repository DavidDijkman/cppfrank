#include "person.ih"

void Person::trim(string &text) const
{
    text.erase(0, text.find_first_not_of(" \n\t")); // first non-blank
    text.erase(text.find_last_not_of(" \n\t")+1);   // last non-blank
}