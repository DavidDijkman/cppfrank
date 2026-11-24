#include "data.ih"

Data::Data(Data&& other, Type type)
{
    (this->*s_move[type])(other);
}