#include "strings.ih"

Strings::Strings(Strings &&tmp)
:
    d_size(tmp.d_size),
    d_str(tmp.d_str)
{
    tmp.d_size = 0;                         // leave tmp in a valid state
    tmp.d_str = 0;
}