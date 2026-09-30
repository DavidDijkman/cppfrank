#include "person.ih"

void Person::extract(istream &input)
{
    string phone_buf;
    string mass_buf;
                                // read input into buffers
    getline(input, d_name, ',');    
    getline(input, d_address, ',');
    getline(input, phone_buf, ',');
    getline(input, mass_buf, ',');

    trim(d_name);             // remove starting and ending blank chars
    trim(d_address);          // from data fields
    trim(phone_buf);
    trim(mass_buf);

    setPhone(phone_buf);        // has to be validated
    setMass(stoul(mass_buf));   
}