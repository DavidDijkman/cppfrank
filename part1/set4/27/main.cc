#include "main.ih"

int main()
{
    Person people[5];
    size_t const size = sizeof(people) / sizeof(people[0]);

    readPersons(people, size);
    writePersons(people, size);
}