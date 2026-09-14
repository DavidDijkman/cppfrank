#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    size_t max = 1u << (argc - 1);
    for (size_t ctr = 0 ; ctr < max ; ctr++) 
    {
        cout << ctr + 1 << ":";
        for (int arg = 0 ; arg < argc ; arg++)
        {
            if (1 << arg & ctr) 
                cout << " " << argv[arg + 1];
        }
        cout << endl;
    }
}