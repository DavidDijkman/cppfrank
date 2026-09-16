#include <string>
#include "sum.h"

using namespace std;

double sum(int argc, char* argv[], double) {
    double total = 0;
    for (int i = 1; i < argc; i++) {
        total += stod(argv[i]);
    }
    return total;
}