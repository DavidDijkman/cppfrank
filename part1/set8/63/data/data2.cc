#include "data.ih"

Data::Data(const std::string &word)
{
    new (&u_word) std::string(word);
}