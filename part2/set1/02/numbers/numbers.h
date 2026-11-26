#ifndef INCLUDED_NUMBERS_H_
#define INCLUDED_NUMBERS_H_

#include <iosfwd>

class Numbers
{
    size_t d_size = 0;
    int *d_nums = 0;

    public:
        explicit Numbers(size_t size);
    
        Numbers(size_t size, int value);
        Numbers(size_t size, int *values);
        Numbers(std::initializer_list<int> iniList);
        Numbers(Numbers const &other);
        Numbers(Numbers &&tmp);
        ~Numbers();

        void swap(Numbers &other);

        Numbers &operator=(Numbers const &other);
        Numbers &operator=(Numbers &&tmp);

        // members of the public interface, like accessors

        int &operator[](size_t index);          // operatorindex1.cc, lvalue
                                                // operatorindex2.cc, rvalue
        int const &operator[](size_t index) const;      

        friend std::ostream &operator<<(std::ostream &out,
                            Numbers const &numbers);  // operatorinsertion.cc
        
        bool operator==(Numbers const &other);  // operatorequality.cc
        bool operator!=(Numbers const &other);  // operatorinequality.cc

        // Compound assignment operators
        Numbers &operator+=(Numbers const &other); // 
        Numbers &operator-=(Numbers const &other);

        Numbers &operator*=(int value);
        Numbers &operator/=(int value);

        // Binary arithmetic operators
        Numbers operator+(Numbers const &other) const;
        Numbers operator-(Numbers const &other) const;

        Numbers operator*(int value) const;
        Numbers operator/(int value) const;

        friend Numbers operator*(int value, Numbers const &numbers);
            
    private:
        // support members for this class, if any
};

#endif