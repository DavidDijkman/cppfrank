#include <iostream>
#include <string>

using namespace std;

istream &promptGet(istream &in, string &str)
{
    cout << "Enter a line or ^D\n";     // ^D signals end-of-input

    return getline(in, str);
}

void process(const string &str)
{
    cout << "You entered: " << str << endl;
}

int main()
{
    string str;
    while (promptGet(cin, str))
        process(str);
}