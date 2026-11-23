#include "numbers.ih"

Numbers::Numbers(Numbers &&tmp)
:
    d_size(tmp.d_size),
    d_num(tmp.d_num)
{
    tmp.d_size = 0;
    tmp.d_num = nullptr;
}