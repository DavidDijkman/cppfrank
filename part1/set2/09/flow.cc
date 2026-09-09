#include <iostream>

using namespace std;

int main() 
{

    char c;
    size_t aCount = 0;
    size_t eCount = 0;
    size_t iCount = 0;

    while (cin.get(c)) 
    {
        switch (tolower(c))
        {
            case 'a':
                aCount++;
                break;
            case 'e':
                eCount++;
                break;
            case 'i':
                iCount++;
                break;
        }
    }

    cout << "# a-chars: " << aCount << ", # e-chars: "<< eCount <<", # i-chars: " << iCount << endl;
}