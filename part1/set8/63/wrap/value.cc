#include "wrap.ih"

size_t Wrap::value() const
{
    if (d_type == Data::Type::VALUE)
        return d_data.value();

    return 0;
}