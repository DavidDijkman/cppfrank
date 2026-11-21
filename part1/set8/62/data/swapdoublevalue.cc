#include "data.ih"

void Data::swapDoubleValue(Data& other)
{
    double* tempD = u_double;
    u_value = other.u_value;

    other.u_double = tempD;
}