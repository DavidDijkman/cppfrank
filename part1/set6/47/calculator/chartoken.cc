#include "calculator.ih"

bool Calculator::charToken(int ch)           // eolns end expressions
{
    if (d_tokenizer.token() == CHAR &&
        d_tokenizer.charValue() == ch)
    {
        nextToken();
        return true;
    }

    return false;
}
