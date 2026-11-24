#ifndef INCLUDED_WRAP_
#define INCLUDED_WRAP_

#include <string>

#include "../data/data.h"

class Wrap
{

    Data d_data;
    Data::Type d_type;

                        // to return in case word() is wrongly called
                        // didn't know how else to handle that case
    inline static std::string const s_backup = "empty";

    public:

        Wrap(size_t value);                 // wrap1.cc
        Wrap(std::string const &string);    // wrap2.cc
        Wrap(double *doubles);              // wrap3.cc

        Wrap(Wrap const &other);            // wrap4.cc Copy constructor
        Wrap(Wrap &&other);                 // wrap5.cc Move constructor

        ~Wrap();                            // wrap0.cc Destructor

        Wrap &operator=(Wrap const &other); // operatorassign1.cc

        void swap(Wrap& other);

        // Accessors
        Data::Type type() const;                  

        size_t value() const;
        std::string const &word() const;
        double const *doubles() const;

    private:
};

#endif