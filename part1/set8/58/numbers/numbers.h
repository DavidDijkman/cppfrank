#ifndef INCLUDED_NUMBERS_
#define INCLUDED_NUMBERS_

#include <iostream>
#include <cstddef>

class Numbers
{
    size_t d_size;
    int *d_num;

    public:
        Numbers();                          // Constructors
        Numbers(size_t count, int value);
        explicit Numbers(size_t count);

        Numbers(Numbers const &other);      // Copy constructor
        Numbers(Numbers &&tmp);             // Move constructor

        ~Numbers();                         // Destructor

        Numbers &operator=(Numbers const &other);   // Copy assignment
        Numbers &operator=(Numbers &&tmp);          // Move assignment

        void swap(Numbers &other);

        int &at(size_t index);                  // Inspect or modify
        int const &at(size_t index) const;      // Inspect
        void write(std::ostream &out) const;
        size_t length() const;

    private:
        int &checkRange(size_t index) const;
};

inline size_t Numbers::length() const
{
    return d_size;
}

inline int &Numbers::at(size_t index)
{
    return checkRange(index);
}

inline int const &Numbers::at(size_t index) const
{
    return checkRange(index);
}

#endif