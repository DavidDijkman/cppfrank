#include <string>

#include "main.ih"

double sum(size_t argc, char* argv[], double) {
    double total = 0;
    for (size_t idx = 1; idx < argc; ++idx) // sum all command-line arguments
        total += stod(argv[idx]);
        
    return total;
}

// Overloaded function of sum which takes int types as arguments and returns
// and returns the sum of all arguments.