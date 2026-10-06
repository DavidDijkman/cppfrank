#include "main.ih"

void readPersons(Person personArray[], size_t size)
{
    for (size_t idx = 0; idx != size; ++idx) // extract all persons
    {
        cout << "?" << '\n';
        personArray[idx].extract(cin);
    }
}