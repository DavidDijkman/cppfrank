#include "calculator.ih"

void Calculator::assign(Value &lhs, Value const &rhs)
{
    if (lhs.token() != IDENT)
    {
        cout << "lhs of = must be a symbol\n";
        d_ok = false;
        return;
    }

    d_symtab.at(lhs.identidxValue()).assign(rvalue(rhs));
}