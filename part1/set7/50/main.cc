#include <fstream>

using namespace std;

void hello(ostream &out)
{
    out << "hello world\n";
}

int main()
{
    ofstream out1{ "out1" };
    hello(out1);

    fstream out2{ "out2" , ios::out};
    hello(out2);
}