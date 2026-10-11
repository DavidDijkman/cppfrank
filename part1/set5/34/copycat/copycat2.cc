#include "copycat.ih"

CopyCat::CopyCat(size_t argc, char const *const *argv)
:
    d_size(argc),
    d_data(duplicate(argv, d_size))
{}