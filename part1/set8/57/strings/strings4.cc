#include "strings.ih"
#include "strings.h"

Strings::Strings(istream &in)
:
    d_size(0),
    d_str(0)
{
    string line;
    while (getline(in, line))
        add(line);
}