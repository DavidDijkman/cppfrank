#include "person.ih"

void Person::trim(string &text) const
{
    text.erase(0, text.find_first_not_of(" \n\t")); // first non-blank
    text.erase(text.find_last_not_of(" \n\t")+1);   // last non-blank
}

// when &text is a reference to a data member, trim can change data members
// directly, even though the method is const. This should be fine because
// string &text is not const.