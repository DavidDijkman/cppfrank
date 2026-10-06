#include "main.ih"

void writePersons(Person const personArray[], size_t size)
{
    for (size_t idx = 0; idx != size; ++idx) // insert every person
    {
        personArray[idx].insert(cout);
    }
}