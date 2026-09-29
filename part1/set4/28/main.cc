#include <iostream>
#include <string>

#include "line/line.h"

int main()
{
    Line line;
    line.getLine();

    while (true)
    {
        std::string text = line.next();
        if (text.empty())
            break;
        std::cout << text << '\n';
    }
}