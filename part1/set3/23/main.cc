#include <iostream>

#include "main.ih"

int main(int argc, char *argv[]) 
{
    if (argc < 2)
    {
        usage(argv[0]);
        return 1;
    }
    string charsToCollapse = argv[1];

    string line;
    while (getline(cin, line))          // process input line by line
    {
        processLine(line, charsToCollapse);
        cout << line << '\n';
    }
}