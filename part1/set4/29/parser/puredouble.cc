#include "parser.ih"

bool Parser::pureDouble(double *dest, std::string const &str)
{
    size_t buf;

    *dest = stod(str, &buf);    // throws on failure

    if (buf != str.size())      // not all characters were used
        return false;

    d_integral = (str.find_first_of(".eE") == string::npos);

    return true;
}