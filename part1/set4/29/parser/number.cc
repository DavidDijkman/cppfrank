#include "parser.ih"

Parser::Return Parser::number(double *dest)
{
    string new_line = d_line.next();

    if (new_line.empty())
        return Parser::Return::EOLN;

    return convert(dest, new_line);
}