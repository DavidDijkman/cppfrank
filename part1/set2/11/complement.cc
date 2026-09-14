#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    int number = stoi(argv[1]);
    int mask = 1;

    string bits;
    string sum;

    while (mask != 0)
    {
        if (number == (number | mask)) {
            number -= mask;
            sum.insert(0, to_string(mask));
            if (number != 0) {
                sum.insert(0, " + ");
            }
            bits.insert(0, "1");
        } 
        else
        {
            bits.insert(0, "0");
        }
        mask = mask << 1;
    }

    cout << argv[1] << " = " << bits << " = " << sum << endl;
}