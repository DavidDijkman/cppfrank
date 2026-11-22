#include "wrap.ih"

double const *Wrap::doubles() const
{
    if (d_type == Data::Type::DOUBLE)
        return d_data.doubles();

    return nullptr;
}