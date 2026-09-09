#include <iostream>

using namespace std;

int main()
{

    size_t number;
    cin >> number;

    // modulus 2 gives 1 if odd, 0 if even
    cout << (number % 2 ? "odd" : "even") << '\n';
    // bitwise AND with 0b00000001 gives 1 if odd, 0 if even
    cout << (number & 1 ? "odd" : "even") << '\n';
    // -2 = 0b...111110, this becomes equivalent to bitwise and with 1
    cout << (~(number | -2) ? "even" : "odd") << '\n';
    // integer division loses information of the lsb
    cout << (number / 2 * 2 == number ? "even" : "odd") << '\n';
    // bitshift is identical to  integer division/multiplication by 2
    cout << (number >> 1 << 1 == number ? "even" : "odd") << '\n';
    // XOR with 1 flips the lsb. even becomes 1 larger, odd 1 smaller
    cout << ((number ^ 1) > number ? "even" : "odd") << '\n';
}