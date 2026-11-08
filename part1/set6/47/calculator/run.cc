#include "calculator.ih"

void Calculator::run()
{
    while (true)
    {
        prompt();   // prompt for new line

        if (d_tokenizer.token() == QUIT)
        {
            break;
        }

        if (atEoln())
        {
            continue;
        }

        Value value = evaluate();   // evaluate line

        if (!ok())
            cout << "error(s) in expression\n";
        else
            show(value);            // success

        d_tokenizer.reset();
    }
}