#include "person.ih"

void Person::extract(istream &input)
{
    string phone_buf;
    string mass_buf;

    getline(input, d_name, ',');
    getline(input, d_address, ',');
    getline(input, phone_buf, ',');
    getline(input, mass_buf, ',');

    trim(d_name);
    trim(d_address);
    trim(phone_buf);
    trim(mass_buf);

    setPhone(phone_buf);
    setMass(stoul(mass_buf));
}