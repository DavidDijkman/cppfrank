#include <iostream>

using namespace std;

int main(int argc, char *argv[]) 
{
    ostream out{ cout.rdbuf() };

    out.setstate(ios::failbit);

    for (size_t index = 0; index != stoul(argv[1]); ++index)
        if (out.good())
            out << "Nr. of command line arguments\n";

}