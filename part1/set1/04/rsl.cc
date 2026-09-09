#include <iostream>

using namespace std;

char rsl[] =
    R"rsl(^\s+Encryption key:(\w+)
^\s+Quality=(\d+)
^\s+E?SSID:"([[:print:]]+)"
^\s+ssid="([[:print:]]+)"
)rsl";

int main()
{
    cout << rsl;
}