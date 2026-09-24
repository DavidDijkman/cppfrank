#include <string>  
#include "main.ih"

using namespace std;

int sum(int argc, char* argv[], int) {
    int total = 0;
    for (int i = 1; i < argc; i++) 
    {
        total += stoi(argv[i]);
    }
    return total;
}

