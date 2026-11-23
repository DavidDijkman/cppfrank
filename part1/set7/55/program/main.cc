#include <iostream>
#include <fstream>
#include <string>

#include "../lock/lock.h"

using namespace std;

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        cerr << "Usage: " << argv[0] << " file\n";
        return 1;
    }

    Lock lock(argv[1]);

    if (!lock.valid())
    {
        cerr << "Can't lock " << argv[1] << '\n';
        return 1;
    }

    cout << "? " << flush;

    string line;
    getline(cin, line);

    ofstream out(argv[1], ios::app);
    out << line << '\n';
}