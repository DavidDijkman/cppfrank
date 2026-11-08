#include "value.ih"

void Value::doubleValue(double value)
{
    d_token = DOUBLE;
    u_DOUBLE = value;
}
