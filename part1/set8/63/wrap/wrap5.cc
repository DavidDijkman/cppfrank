#include "wrap.ih"

Wrap::Wrap(Wrap&& other)
    : d_data(std::move(other.d_data), other.d_type),
      d_type(other.d_type)
{
    other.d_data.destroy(other.d_type);

    new (&other.d_data) Data(std::size_t{0});

    other.d_type = Data::VALUE;
}