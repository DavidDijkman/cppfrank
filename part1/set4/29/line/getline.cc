#include "line.ih"

bool Line::getLine()
{
    getline(cin, d_line);
                                // set d_pos to first non-ws character
    d_pos = d_line.find_first_not_of(" \t\n");
                                // return true if line contains non-ws chars
    return d_pos != string::npos;
}