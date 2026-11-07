#include "calculator.ih"

Value Calculator::ident()
{
    size_t index = d_symtab.findIdx(d_tokenizer.ident());

    nextToken();

    return Value(index, IDENT);
}