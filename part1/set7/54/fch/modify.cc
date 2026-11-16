#include "fch.ih"

void Fch::modify()
{
    d_line.replace(d_pos, d_target.length(), d_replacement);
                    // we don't need to check what we've already replaced
    d_pos = d_pos + d_replacement.length(); 
}