#include "data.ih"

bool Data::read()
{   
    return d_dataimpl->read(); // delegate to impl class
}
