#include <iostream>
#include <cstring>

#include "main.ih"

using namespace std;

int main(int argc, char* argv[]) {
    bool all_int = true;
    for (int i = 1; i < argc; ++i) 
    {
        if (strchr(argv[i], '.')) 
        {
            all_int = false;
            break;
        }
    }

    if (all_int) 
    {
        cout << sum(argc, argv, 0) << '\n';
    } 
    else 
    {
        cout << sum(argc, argv, 0.0) << '\n';
    }

    return 0;
}
