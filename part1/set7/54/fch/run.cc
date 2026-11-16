#include "fch.ih"

int Fch::run()
{
    if (!d_ok)  // failed to open input file
        return 1;
    
    while (getline(d_file, d_line))
    {
        process();
        insertLine();   // print line to cout
    }

    return 0;
}