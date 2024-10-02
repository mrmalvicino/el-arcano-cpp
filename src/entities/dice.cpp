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
    if (value <= 0 || _SIDES < value)
    {
        throw std::runtime_error("Dice value out of boundaries.");
    }

    _value = value;
}

void Dice::roll(bool random)
{
    if(random == true)
    {
        _value = Math::generateRandom(_SIDES);
    }
    else
    {
        std::cout << "Ingresar valor de dado:/n";
        std::cin >> _value;
    }
}