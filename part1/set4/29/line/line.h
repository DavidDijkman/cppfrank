#ifndef INCLUDED_LINE_
#define INCLUDED_LINE_

#include <string>

class Line
{
    std::string d_line;     // holds line obtained from std::cin
    size_t d_pos;           // keeps track of start of non-ws substring

    public:
        Line();

        bool getLine();     // writes a new line from std::cin to d_line
        std::string next(); // returns next substring of non-ws from d_line 
};
        
#endif
