#include "data.ih"

void (Data::*Data::s_move[])(Data&) =
{
    &Data::moveDoubles,
    &Data::moveWord,
    &Data::moveValue
};