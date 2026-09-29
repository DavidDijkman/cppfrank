#include "person.ih"

void Person::extract(istream &input)
{
    string name_buf;            // declare buffers
    string address_buf;
    string phone_buf;
    string mass_buf;
                                // read input into buffers
    getline(input, name_buf, ',');    
    getline(input, address_buf, ',');
    getline(input, phone_buf, ',');
    getline(input, mass_buf, ',');

    trim(name_buf);             // remove starting and ending blank chars
    trim(address_buf);          // from data fields
    trim(phone_buf);
    trim(mass_buf);

    setName(name_buf);          // save to data members
    setAddress(address_buf);
    setPhone(phone_buf);        // has to be validated
    setMass(stoul(mass_buf));   
}