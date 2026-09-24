#include <string>
#include <iostream>

#include "main.ih"

using namespace std;

int main(int argc, char* argv[])
{
    if (argc < 2) 
    {
        cout << "Add -c, -w, or -l" << endl;
        return 0;
    }

    int count = 0;
    string arg1 = argv[1];

    if (arg1 == "-c") 
        count = charCount();
    else if (arg1 == "-w") 
        count = wordCount();
    else if (arg1 == "-l") 
        count = lineCount();

    cout << count << endl;
}