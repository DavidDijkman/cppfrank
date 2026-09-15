#include <iostream>
#include <string>
#include <bitset>
#include <cstddef>

using namespace std;

int main(int argc, char* argv[])
{

    string direction = argv[2];
    string bits = argv[1];

    size_t width = bits.length();
    size_t value = 0;

        // we manually construct the value from the bitstring
    for (size_t bitPos = 0; bitPos < width; bitPos++)
    {
        if (bits[bitPos] == '1')
            value++;

        value *= 2;
    }
        // the mask ensures we erase shifted bits outside our width
    size_t mask = (1 << width) - 1;

        // we use bitwise or to ensure we keep the carry-over when rotating
    size_t newValue = direction == "rol" ?
        (value << 1 | value >> (width - 1)) & mask :
        (value >> 1 | value << (width - 1)) & mask;


        // I want to use bitset here but I don't think that's allowed
    string newBits = argv[1];
    if (direction == "rol") 
    {
        newBits.insert(width, 1, newBits[0]);
        newBits.erase(0, 1);
    }
    else
    {
        newBits.insert(0, 1, newBits[width - 1]);
        newBits.erase(width, 1);
    }

    cout << newBits << ' ' << newValue << ' ' << hex << newValue << '\n';

    return 0;
}