#include "calculator.ih"

void Calculator::debugToken(char const *where)
{
    cout << "[DEBUG] " << where << ": ";

    switch (d_tokenizer.token())
    {
        case QUIT:
            cout << "QUIT";
            break;

        case CHAR:
            cout << "CHAR ('" << d_tokenizer.charValue() << "')";
            break;

        case INT:
            cout << "INT (" << d_tokenizer.intValue() << ")";
            break;

        case DOUBLE:
            cout << "DOUBLE (" << d_tokenizer.doubleValue() << ")";
            break;

        case IDENT:
            cout << "IDENT (" << d_tokenizer.ident() << ")";
            break;

        case ERROR:
            cout << "ERROR";
            break;
    }

    cout << '\n';
}