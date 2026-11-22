#include "wrap.ih"

Wrap::Wrap(string const &word)
    : d_data(word),
      d_type(Data::Type::WORD)
{}