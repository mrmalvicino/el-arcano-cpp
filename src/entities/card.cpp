#include "../../include/entities/card.h"

Card::Card()
{
    setId(0);
    setName("N/A");
}

int Card::getId()
{
    return _id;
}

void Card::setId(int id)
{
    _id = id;
}

std::string Card::getName()
{
    return _name;
}

void Card::setName(const std::string & name)
{
    strcpy(_name, name.c_str());
}

Effect Card::getEffect()
{
    return _effect;
}

void Card::setEffect(Effect effect)
{
    _effect = effect;
}