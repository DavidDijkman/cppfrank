#include "copycat.ih"

extern char **environ;

inline CopyCat::CopyCat()
: 
    d_size(nElements(environ)),
    d_data(duplicate(environ, d_size))
{}
