#include "data.ih"

void Data::destroyWord()
{
    u_word.~basic_string();
}