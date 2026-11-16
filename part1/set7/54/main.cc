#include <iostream>
#include <string>

#include "fch/fch.h"

using namespace std;

int main(int argc, char *argv[])
{
    if (argc < 2) 
        return 1;

    Fch fch = Fch(argv[1]); // argv[1] is filename
    return fch.run();
}