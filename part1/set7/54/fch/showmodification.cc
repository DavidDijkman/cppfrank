#include "fch.ih"

void Fch::showModification() const
{
    cerr << '\t' << d_line << '\n';

    string spaces(d_pos, ' ');                  // sets the offset
    string indicators(d_target.length(), '^');

    cerr << '\t' << spaces << indicators << '\n';
    cerr << '\t' << spaces << d_replacement << '\n';
}