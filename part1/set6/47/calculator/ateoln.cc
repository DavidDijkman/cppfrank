#include "calculator.ih"

bool Calculator::atEoln()
{
                // reset tokenizer if eol is reached
    if (d_tokenizer.token() == CHAR &&
        d_tokenizer.charValue() == '\n')
    {
        d_tokenizer.reset();
        return true;
    }

    return false;
}