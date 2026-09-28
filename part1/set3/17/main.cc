#include <iostream>
#include <cstring>

#include "main.ih"

int main(int argc, char* argv[]) {

                        // check if any arguments contain a decimal point
    bool all_int = anyDecimal(argc, argv);

    if (all_int)        // select whether to use double or int sum function
        cout << sum(argc, argv, 0) << '\n';
    else 
        cout << sum(argc, argv, 0.0) << '\n';
}