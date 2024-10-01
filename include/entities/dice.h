#pragma once

#include <iostream>
#include <random>
#include <stdexcept>

class Dice
{
    public:

    Dice();

    int getValue();

    void setValue(int value);

    void roll(bool random = true);

    private:

    static const int SIDES = 8;

    int _value;
};