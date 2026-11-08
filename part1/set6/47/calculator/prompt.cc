#include "calculator.ih"

void Calculator::prompt()   
{
    d_ok = true;

    cout << "? ";

    d_tokenizer.nextToken();
}
