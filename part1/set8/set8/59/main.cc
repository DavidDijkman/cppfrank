#include "strings/strings.ih"

#include <iostream>

using namespace std;

extern char **environ;

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        cout << "Usage: " << argv[0] << " <nIterations> [move]\n";
        return 1;
    }

    size_t nIterate = stoul(argv[1]);
    bool copy = (argc == 2);

    Strings str(nIterate, copy);
    str.iterate(environ);

    if (str.size() > 0)
    {
        cout << "First: " << str.at(0) << '\n'
             << "Last:  " << str.at(str.size() - 1) << '\n';
    }
}