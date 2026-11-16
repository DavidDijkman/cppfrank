#include "fch.ih"

bool Fch::openInput(char const *fname)
{
    d_file = fstream{fname};
    return d_file.is_open();    // false if failed to open
}