#include "data.ih"

void Data::display() const
{
    d_dataimpl->display(); // delegate to impl class
}
