#include "wrap.ih"

void Wrap::swap(Wrap& other)
{
    d_data.swap(other.d_data, d_type, other.d_type);

    Data::Type temp = other.d_type;
    other.d_type = d_type;
    d_type = temp;
}