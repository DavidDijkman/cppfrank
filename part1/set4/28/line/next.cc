#include "line.ih"

string Line::next()
{
    if (d_pos == string::npos)  // return empty string if no substr available.
        return "";

    size_t start = d_pos;       // start of non-ws substring

                                // end of non-ws substring
    size_t end = d_line.find_first_of(" \t\n", start);
                        
                                // find the start of the next non ws-substring
    d_pos = d_line.find_first_not_of(" \t\n", end);
                                // return next non-ws substring
    return d_line.substr(start, end - start);
}