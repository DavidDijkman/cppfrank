#include <iostream>

#include "main.ih"

int main(int, char *argv[]) 
{
    string charsToCollapse = argv[1];

    string line;
    while (getline(cin, line))          // process input line by line
    {
        processLine(line, charsToCollapse);
        cout << line << '\n';
    }
}