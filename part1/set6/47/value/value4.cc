#include "value.ih"

Value::Value(size_t index, Token identType)
:
    u_IDENTIdx(index),
    d_token(identType)
{}
