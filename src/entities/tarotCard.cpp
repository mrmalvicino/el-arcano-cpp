#include "../../include/entities/tarotCard.h"

TarotCard::TarotCard()
{
    setName("N/A");
}

std::string TarotCard::getName()
{
    return _name;
}

void TarotCard::setName(const std::string & name)
{
    strcpy(_name, name.c_str());
}