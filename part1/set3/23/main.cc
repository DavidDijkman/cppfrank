#include <iostream>

using namespace std;

#include "functions.h"

int main(int, char *argv[]) 
{
    string charsToCollapse = argv[1];

    string line;

    while (getline(cin, line)) 
    {
        line = processLine(line, charsToCollapse);
        cout << line << "\n";
    }

    return 0;
}