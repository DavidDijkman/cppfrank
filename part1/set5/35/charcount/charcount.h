#ifndef INCLUDED_CHARCOUNT_
#define INCLUDED_CHARCOUNT_

#include <iostream>

struct CharCount
{
    enum Action                         // Struct defining action to be taken
    {
        INC,
        INSERT,
        APPEND
    };

    struct Char                         // Struct defining char and its count
    {
        char ch;
        size_t count;
    };

    struct CharInfo                     // Struct defining pointer to Char and
    {                                   // number of Char objects
        Char *ptr = nullptr;
        size_t nCharObj = 0;
    };
    
    CharCount();

    size_t count(std::istream &in);
    CharInfo const &info() const;

private:
    CharInfo d_info;
                                        // Locate the character in the array
    Action locate(unsigned char uchar, size_t &idx) const;
                // Perform action on the character based on the Action enum
    void addChar(char ch, Action action, size_t idx);
};

// Inline function to return the character information
inline CharCount::CharInfo const &CharCount::info() const
{
    return d_info;
}
        
#endif
