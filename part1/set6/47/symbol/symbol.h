#ifndef INCLUDED_SYMBOL_
#define INCLUDED_SYMBOL_

#include <string>
#include "../value/value.h"

class Symbol
{
    std::string d_ident;
    Value d_value;

    public:
        enum Compare
        {
            LHS_FIRST,
            RHS_FIRST,
            EQUAL
        };
        
        Symbol();
        Symbol(std::string const &ident, int value);
        Symbol(std::string const &ident, double value);

        std::string const &ident() const;
        double      doubleValue() const;
        int         intValue() const;
        Token       type() const;
        Value const &value() const;

        Compare compare(std::string const &ident) const;
        void assign(Value const &value);
};
        
#endif
