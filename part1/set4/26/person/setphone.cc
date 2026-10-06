#include "person.ih"

void Person::setPhone(string const &phone) 
{
    if (phone.empty())      // accept only phone numbers with only digits
        d_phone = " - not available -";
    else if (hasOnly("0123456789", phone))
        d_phone = phone;
    else 
        cout << "A phone number may only contain digits\n";
}
