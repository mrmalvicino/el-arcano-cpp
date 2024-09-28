#include "../../include/entities/dice.h"

Dice::Dice()
{

}

int Dice::getValue()
{
    return _value;
}

void Dice::setValue(int value)
{
    if (value <= 0 || SIDES < value)
    {
        throw std::runtime_error("Dice value out of boundaries.");
    }

    _value = value;
}