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

void Dice::roll(bool random)
{
    if(random == true)
    {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<int> dist(1, SIDES);
        _value = dist(gen);
    }
    else
    {
        std::cout << "Ingresar valor de dado:/n";
        std::cin >> _value;
    }
}