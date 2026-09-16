#include <iostream>
#include <string>

#include "main.ih"
#include "structCall.ih"
#include "boundCall.ih"

using namespace std;

int main(int argc, char* argv[])
{

    if (argc < 2) {
        cout << "Usage: " << argv[0] << " int <string>" << endl;
        return 0;
    }

    structCall(argc, argv);
    boundCall(argc, argv);
}