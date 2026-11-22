#include "data.ih"

Data::Data(const Data& other, Type type)
{
    (this->*s_copy[type])(other);
}