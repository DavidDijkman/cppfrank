#include "data.ih"

void Data::swapDoubleWord(Data& other)
{
    double* temp = u_double;

    // Move the string out before destroying it.
    std::string tempW(std::move(other.u_word));

    other.u_word.~basic_string(); // destroy string in other

    other.u_double = temp;
    new (&u_word) std::string(std::move(tempW));
}