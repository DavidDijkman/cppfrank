#include "value.ih"

void Value::charValue(char value)
{
    d_token = CHAR;
    u_CHAR = value;
}
