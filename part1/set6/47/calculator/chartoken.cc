#include "calculator.ih"

bool Calculator::charToken(int ch)
{
            // checks if character is equal to ch, and absorbs it if true
    if (d_tokenizer.token() == CHAR &&
        d_tokenizer.charValue() == ch)
    {
        nextToken();
        return true;
    }

    return false;
}
