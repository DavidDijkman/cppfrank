#include "data.ih"

void Data::swapWordValue(Data& other)
{
    // Move the string out before destroying it.
    std::string tempW(std::move(u_word));

    u_word.~basic_string(); // destroy string in this

    u_value = other.u_value;
    new (&other.u_word) std::string(std::move(tempW));
}