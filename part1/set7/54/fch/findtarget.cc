#include "fch.ih"

bool Fch::findTarget()
{
                    // +1 to stop us finding the same instance again
    d_pos = d_line.find(d_target, d_pos + 1); 
    return d_pos != string::npos;
}