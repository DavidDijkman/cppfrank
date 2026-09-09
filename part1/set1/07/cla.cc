#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[])
{
    // first argument is converted to int
    cout << "hello " << (argc == 1 ? "world" : argv[stoi(argv[1])]) << endl;
}