#include "value.ih"

void Value::requireSpecial(Token token)
{
    if (token != QUIT && token != ERROR && token != IDENT)
    {
    cerr << "internal error: forcing token " << token << 
        " to value QUIT\n";
    d_token = QUIT;
    }    
}