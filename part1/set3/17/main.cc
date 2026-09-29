#include "main.ih"

int main(int argc, char *argv[]) 
{

    if (argc < 2)
    {
        usage(argv[0]);
        return 1;
    }

                        // check if any arguments contain a decimal point
    bool all_int = anyDecimal(argc, argv);

    if (all_int)        // select whether to use double or int sum function
        cout << sum(argc, argv, 0) << '\n';
    else 
        cout << sum(argc, argv, 0.0) << '\n';
}