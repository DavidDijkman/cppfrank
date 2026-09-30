#include "calculator.ih"

void Calculator::parseline()
{
    double num1;
    double num2;

    Parser::Return ret = d_parser.number(num1);
    if (ret == Parser::Return::EOLN)
        break;

    if (ret == Parser::Return::NO_NUMBER)
        error();

    d_parser.isIntegral()

    operator = d_parser.next();
    ret = d_parser.number(number2);
}