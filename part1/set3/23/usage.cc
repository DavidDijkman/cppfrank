#include <iostream>

#include "main.ih"

void usage(string const &programName)
{
    cout << "Usage: " << programName << " toCollapse\n"
        "Where:\n\ttoCollapse - sting containing all characters"
        " that should have repeats collapsed(including a space"
        " collapses all blank characters\n";
}