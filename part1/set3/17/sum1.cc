#include <string>  

#include "main.ih"

int sum(size_t argc, char* argv[], int) {
    int total = 0;
    for (size_t idx = 1; idx < argc; ++idx) // sum all command-line arguments
        total += stoi(argv[idx]);
    
    return total;
}

