#include "../../include/entities/crystal.h"

Crystal::Crystal()
{
    setName("N/A");
}

std::string Crystal::getName()
{
    return _name;
}

void Crystal::setName(const std::string & name)
{
    strcpy(_name, name.c_str());
}