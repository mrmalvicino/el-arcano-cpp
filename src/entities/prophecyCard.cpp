#include "../../include/entities/prophecyCard.h"

ProphecyCard::ProphecyCard()
{
    setName("N/A");
}

std::string ProphecyCard::getName()
{
    return _name;
}

void ProphecyCard::setName(const std::string & name)
{
    strcpy(_name, name.c_str());
}