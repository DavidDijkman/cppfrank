#include "functions.h"

bool containsChar(const std::string str, char charToFInd) {
    for (char character : str) {
        if (character == charToFInd) {
            return true;
        }
    }
    return false;
}