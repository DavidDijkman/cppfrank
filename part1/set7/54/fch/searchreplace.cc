#include "fch.ih"

void Fch::searchReplace()
{
    cerr << "what is the target?\n";
    getline(cin, d_target);
    cerr << "what are we replacing it with?\n";
    getline(cin, d_replacement);
}
