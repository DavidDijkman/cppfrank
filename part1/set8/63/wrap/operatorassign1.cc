#include "wrap.ih"

Wrap& Wrap::operator=(Wrap const& other)
{
    Wrap temp(other);
    swap(temp);

    return *this;
}