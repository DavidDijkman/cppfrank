#include <iostream>
#include <string>

using namespace std;

int main()
{
    string text;
    getline(cin, text);

                //substr prints from the first, and until last, non-blank
    cout << "`" << text.substr(
        text.find_first_not_of(" \t"), 
        text.find_last_not_of(" \t") - text.find_first_not_of(" \t") + 1)
        << "\"\n";
}