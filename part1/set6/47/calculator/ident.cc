#include "calculator.ih"

Value Calculator::ident()
{   
                // find index of identifier in the symbol table
    size_t index = d_symtab.findIdx(d_tokenizer.ident());

    nextToken();

    return Value(index, IDENT);
}