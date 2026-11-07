#include "calculator.ih"

void Calculator::run()
{
    while (true)
    {
        prompt();


        if (d_tokenizer.token() == QUIT)
        {
            break;
        }

        if (atEoln())
        {
            continue;
        }

        Value value = evaluate();

        if (!ok())
            cout << "error(s) in expression\n";
        else
            show(value);

        d_tokenizer.reset();
    }
}