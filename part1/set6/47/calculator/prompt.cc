#include "calculator.ih"

void Calculator::prompt()   
{
    d_ok = true;

    cout << "? " << flush;

    d_tokenizer.nextToken();
}
