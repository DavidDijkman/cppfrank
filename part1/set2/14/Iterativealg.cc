#include <iostream>

using namespace std;

int main() 
{
    double x1;
    double x0 = 1;
    double number;

    while (true) 
    {
        cout << "Enter a value to compute the sqrt of (<= 0  to stop): ";
        cin >> number;

        if (number <= 0)
        {
            break;
        }
        
        x1 = number;
        int step = 1;
        while (true) 
        {
            x1 = x0 + (number - x0 * x0) / (2 * x0);
            if (x0 == x1)
                break;
            cout << step << ": x0:" << x0 << " x1: " << x1 << " sqr: " << x1 * x1 << endl;
            x0 = x1;
            step++;
        }
        cout << "sqrt(" << number << ") is " << x1 << endl;
    }
}