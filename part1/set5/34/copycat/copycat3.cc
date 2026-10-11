#include "copycat.ih"

CopyCat::CopyCat(char const *const *data)
:
    d_size(nElements(data)),
    d_data(duplicate(data, d_size))
{}