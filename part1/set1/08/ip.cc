#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    // we offset the more significant octets
    // and apply the netmask to obtain our masked ip
    size_t ip4 = (stoul(argv[1]) << 24 | 
                stoul(argv[2]) << 16 |
                stoul(argv[3]) << 8 | 
                stoul(argv[4])) &
                (~0UL << (32 - stoul(argv[5])));

    cout << ((ip4 >> 24) & 0xff) << "." 
        << ((ip4 >> 16) & 0xff) << "." 
        << ((ip4 >> 8) & 0xff) << "." 
        << (ip4 & 0xff) << endl;
}