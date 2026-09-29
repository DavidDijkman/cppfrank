#include "main.ih"

double sum(size_t argc, char const *const argv[], double) 
{
    double total = 0;
    for (size_t idx = 1; idx < argc; ++idx) // sum all command-line arguments
        total += stod(argv[idx]);
        
    return total;
}
