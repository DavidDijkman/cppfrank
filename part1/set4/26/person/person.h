#ifndef INCLUDED_PERSON_
#define INCLUDED_PERSON_

#include <string>
#include <iostream>

class Person
{
    std::string d_name;         // name of person
    std::string d_address;      // address field
    std::string d_phone;        // phone number
    size_t      d_mass;         // mass in kg


    public:
        Person();           //person1.cc
                            //person2.cc
        Person(std::string const &name, std::string const &address,
               std::string const &phone, size_t mass);
        
        void setName(std::string const &name);
        void setAddress(std::string const &address);
        void setPhone(std::string const &phone);
        void setMass(size_t size);

        std::string const &name()           const;
        std::string const &address()        const;
        std::string const &phone()          const;
        size_t mass()                       const;

        void insert(std::ostream &output)  const;
        void extract(std::istream &input);
        

    private:
        bool hasOnly(char const *characters, std::string const &object) const;
        void trim(std::string &text)        const;
};
        
#endif
