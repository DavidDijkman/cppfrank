#include "calculator.ih"

size_t Calculator::charTokens(string const &chars)
{

    if (d_tokenizer.token() != CHAR)
        return chars.length();

    size_t idx = chars.find(d_tokenizer.charValue());

    if (idx == string::npos)
        return chars.length();

    nextToken();

    return idx;
}