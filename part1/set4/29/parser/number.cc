#include "parser.ih"

Parser::Return Parser::number(double *dest)
{
    string token = d_line.next();

    if (token.empty())  // if token is empty, end-of-line is returned
        return Parser::Return::EOLN;

    return convert(dest, token);
}