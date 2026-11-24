#include "data.ih"

void Data::copyWords(const Data& other)
{
    new (&u_word) std::string(other.u_word);
}