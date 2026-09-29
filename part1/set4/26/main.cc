#include <iostream>

#include "person/person.h"

int main()
{
    Person p;
    p.extract(std::cin);
    p.insert(std::cout);
}