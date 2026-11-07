#include "value.ih"

void Value::requireSpecial(Token token)
{
    if (token == QUIT || token == ERROR || token == IDENT)
        d_token = token;
    else
        cerr << "internal error: invalid special token " << token << '\n';
}