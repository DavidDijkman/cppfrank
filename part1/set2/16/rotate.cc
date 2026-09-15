#include <iostream>
#include <string>
#include <bitset>
#include <cstddef>

using namespace std;

int main(int argc, char* argv[])
{
    if (argc != 3)
    {
        std::cerr << "Usage: rotate <binary value> <rol|ror>\n";
        return 1;
    }

    string bits = argv[1];
    string direction = argv[2];

    size_t width = bits.length();
    size_t value = bitset<64>(bits).to_ullong();
    size_t mask = (size_t{1} << width) - 1;

    size_t newValue = direction == "rol" ?
        (value << 1 | value >> (width - 1)) & mask :
        (value >> 1 | value << (width - 1)) & mask;

    string binaryString =
        bitset<64>(newValue).to_string().substr(64 - width);

    cout << binaryString << ' ' << newValue << ' '
               << hex << newValue << '\n';

    return 0;
}