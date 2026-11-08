#ifndef INCLUDED_CHARCOUNT_
#define INCLUDED_CHARCOUNT_

#include <cstddef>
#include <iostream>

class CharCount
{
    public:
        enum Action                     // Struct for possible actions
        {
            INC,
            INSERT,
            APPEND
        };
        
        struct Char                     // Struct defining char and its count
        {
            char ch;
            size_t count;
        };

        struct CharInfo                 // Struct defining pointer to Char and
        {                               // number of Char objects
            Char *ptr = nullptr;
            size_t nCharObj = 0;
        };

        CharCount();                    // Constructor and destructor
        ~CharCount();
                                        // Disable copy constructor and 
                                        // assignment operator
        CharCount(CharCount const &other) = delete; 
        CharCount &operator=(CharCount const &other) = delete;
                                        // Accessors and mutators
        size_t count(std::istream &in);
        CharInfo const &info() const;
        size_t capacity() const;

    private:
        // Type alias for pointer to member function and static array of
        // function pointers for actions
        using ActionPtr = void (CharCount::*)(char ch, size_t idx);                                    
        static ActionPtr const s_action[];

        CharInfo d_info;
        size_t d_capacity = 8;
                                        // Manage memory for Char objects
        static Char *rawCapacity(size_t cap);
        void enlarge();
        
        Action locate(unsigned char uchar, size_t &idx) const;
                                        // Separate functions for each action
        void inc(char ch, size_t idx);
        void insert(char ch, size_t idx);
        void append(char ch, size_t idx);
};

inline CharCount::CharInfo const &CharCount::info() const
{
    return d_info;
}

inline size_t CharCount::capacity() const
{
    return d_capacity;
}


#endif