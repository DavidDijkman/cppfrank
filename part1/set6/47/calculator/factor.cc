#include "calculator.ih"

Value Calculator::factor()
{
            // choose member to evaluate factor
    return (this->*s_unit[d_tokenizer.token()])();
}