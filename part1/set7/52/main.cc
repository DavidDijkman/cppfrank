#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

ostream &now(ostream &stream)
{
    time_t now = time(nullptr);

    return stream << put_time(localtime(&now), "%c");
}

int main()
{
    cout << now << '\n';
}