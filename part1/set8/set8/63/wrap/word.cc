#include "wrap.ih"

string const &Wrap::word() const
{
    if (d_type == Data::Type::WORD)
        return d_data.word();

    return s_backup;
}