#include "fch.ih"

Fch::Fch(char const *fname)
{
    d_ok = openInput(fname);
    
    if (d_ok)
        searchReplace();
}
