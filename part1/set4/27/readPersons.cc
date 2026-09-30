#include "main.ih"

void readPersons(Person personArray[], size_t size)
{
    for (size_t idx = 0; idx != size; ++idx)
    {
        cout << "?" << '\n';
        personArray[idx].extract(cin);
    }
}