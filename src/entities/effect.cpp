#include "../../include/entities/effect.h"

Effect::Effect()
{
    setId(0);
    setName("N/A");
    setDescription("N/A");
}

int Effect::getId()
{
    return _id;
}

void Effect::setId(int id)
{
    _id = id;
}

std::string Effect::getName()
{
    return _name;
}

void Effect::setName(const std::string & name)
{
    strcpy(_name, name.c_str());
}

std::string Effect::getDescription()
{
    return _description;
}

void Effect::setDescription(const std::string & description)
{
    strcpy(_description, description.c_str());
}