#include "main.ih"

void writePersons(Person const personArray[], size_t size)
{
    for (size_t idx = 0; idx != size; ++idx)
    {
        personArray[idx].insert(cout);
    }
}