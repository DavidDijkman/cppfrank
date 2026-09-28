#include <iostream>

#include "main.ih"

void usage(string const &programName)
{
    cout << "Usage: " << programName << " int [args]\n"
        "Where:\n\tint - non-negative integer,"
        " selects the argument to print\n";
}