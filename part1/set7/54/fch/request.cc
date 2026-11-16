#include "fch.ih"

char Fch::request() const
{
    string input;
    cerr << "change [ynYN]? ";
    getline(cin, input);        // also allows "yes", "No why would i"
    return input.empty() ? '\0' : input[0];
}