#include "../../include/entities/crystal.h"

Crystal::Crystal()
{
    setId(0);
    setName("N/A");
}

int Crystal::getId()
{
    return _id;
}

void Crystal::setId(int id)
{
    _id = id;
}

std::string Crystal::getName()
{
    return _name;
}

void Crystal::setName(const std::string & name)
{
    strcpy(_name, name.c_str());
}