#include "wrap.ih"

Wrap::Wrap(double *doubles)
    : d_data(doubles),
      d_type(Data::Type::DOUBLE)
{}