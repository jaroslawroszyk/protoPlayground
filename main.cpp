#include <iostream>
#include "proto/Person.pb.h"

auto main() -> int
{
    PERSON::Person firstPerson;
    const std::string name = "jarek";
    int ID = 01;

    firstPerson.set_name(name);
    firstPerson.set_id(ID);

    if (firstPerson.has_name())
    {
        std::cout << *firstPerson.mutable_name() << std::endl;
    }

    std::cout << firstPerson.DebugString();

}

