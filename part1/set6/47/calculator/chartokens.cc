#include "calculator.ih"

size_t Calculator::charTokens(string const &chars)
{

    if (d_tokenizer.token() != CHAR)
        return chars.length();

            // checks is current token is in the parameter list
    size_t idx = chars.find(d_tokenizer.charValue());

    if (idx == string::npos)
        return chars.length();

    nextToken(); // if found, go to next token

    return idx;
}