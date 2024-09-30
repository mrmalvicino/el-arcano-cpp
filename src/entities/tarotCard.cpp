#include "../../include/entities/tarotCard.h"

TarotCard::TarotCard()
{
    setId(0);
    setName("N/A");
}

int TarotCard::getId()
{
    return _id;
}

void TarotCard::setId(int id)
{
    _id = id;
}

std::string TarotCard::getName()
{
    return _name;
}

void TarotCard::setName(const std::string & name)
{
    strcpy(_name, name.c_str());
}

Effect TarotCard::getEffect()
{
    return _effect;
}

void TarotCard::setEffect(Effect effect)
{
    _effect = effect;
}