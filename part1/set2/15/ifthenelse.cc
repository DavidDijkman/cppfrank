#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
            //max is the amount of combinations, pow(2, n)
    size_t max = 1u << (argc - 1); 

            //we count in binary, where the n'th bit determines whether the
            // n'th argument is printed
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