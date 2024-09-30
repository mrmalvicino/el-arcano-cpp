#include "../../include/entities/prophecy.h"

Prophecy::Prophecy()
{
    setId(0);
    setName("N/A");
}

int Prophecy::getId()
{
    return _id;
}

void Prophecy::setId(int id)
{
    _id = id;
}

std::string Prophecy::getName()
{
    return _name;
}

void Prophecy::setName(const std::string & name)
{
    strcpy(_name, name.c_str());
}

std::string Prophecy::getDescription()
{
    return _description;
}

void Prophecy::setDescription(const std::string & description)
{
    strcpy(_description, description.c_str());
}