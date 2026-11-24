#include "data.ih"

void Data::moveWord(Data& other)
{
    new (&u_word) std::string(std::move(other.u_word));
}