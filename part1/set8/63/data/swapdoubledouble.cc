#include "data.ih"

void Data::swapDoubleDouble(Data& other)
{
    double *temp = other.u_double;
    other.u_double = u_double;
    u_double = temp;
}
