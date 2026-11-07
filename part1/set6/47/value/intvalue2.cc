#include "value.ih"

void Value::intValue(int value)
{
    d_token = INT;
    u_INT = value;
}