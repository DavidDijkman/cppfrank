#include "copycat.ih"

char * CopyCat::ntbsCopy(char const * str)
{
    size_t len = 0;

    while (str[len] != '\0')
        ++len;

    char *copy = new char[len + 1]; // len + 1 because we include the '\0'

                                    // copy all chars
    for (size_t idx = 0; idx != len + 1; ++idx)
        copy[idx] = str[idx];

    return copy;
}