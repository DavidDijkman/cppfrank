#include "parser.ih"

Parser::Return Parser::number(double *dest)
{
    string token = d_line.next();

    if (token.empty())
        return Parser::Return::EOLN;

    return convert(dest, token);
}