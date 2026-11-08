#ifndef INCLUDED_VALUE_
#define INCLUDED_VALUE_

#include "../enum/enum.h"

class Value
{
    union 
    {
        double  u_DOUBLE;
        int     u_INT;
        char    u_CHAR;
        int     u_IDENTIdx;
    };

    // Enum for value types
    Token d_token;

    public:
        Value();                                // INT, default value 0
        Value(int value);                       // INT
        Value(double value);                    // DOUBLE
        Value(size_t index, Token identType);   // IDENT

        // Accessors and modifiers
        int intValue() const;
        void intValue(int value);

        double doubleValue() const;
        void doubleValue(double value);
    
        char charValue() const;
        void charValue(char value);

        int identidxValue() const;
        void identidxValue(int value);

        Token token() const;

        void requireSpecial(Token token);
};
        
#endif
