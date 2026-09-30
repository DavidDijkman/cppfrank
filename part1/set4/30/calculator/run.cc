#include "calculator.ih"

void Calculator::run()
{

    while (true)
    {
        d_parser.reset();
        parseLine();
    }
}
