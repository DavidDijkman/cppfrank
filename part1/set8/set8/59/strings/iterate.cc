#include "strings.ih"

void Strings::iterate(char **environLike)
{
    for (size_t iter = 0; iter != d_nIterate; ++iter)
    {
        delete[] d_str;
        d_size = 0;
        d_str = nullptr;

        for (char **ptr = environLike; *ptr; ++ptr)
            add(*ptr);
    }
}