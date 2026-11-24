#include "data.ih"

void (Data::*Data::s_copy[])(const Data&) =
{
    &Data::copyDoubles,
    &Data::copyWords,
    &Data::copyValue
};