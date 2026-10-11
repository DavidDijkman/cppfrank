#include "copycat.ih"

char **CopyCat::duplicate(char const *const *data, size_t count)
{
    char **copy = new char *[count + 1];

                            // copy all NTBSs in data
    for (size_t idx = 0; idx != count; ++idx)
        copy[idx] = ntbsCopy(data[idx]);

    copy[count] = nullptr;  // terminate array with nullptr, like environ

    return copy;
}