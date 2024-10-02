#pragma once

#include <iostream>
#include "../utils/math.h"

class Dice
{
    public:

    Dice();

    int getValue();

    void setValue(int value);

    void roll(bool random = true);

    private:

    static const int _SIDES = 8;

    int _value;
};