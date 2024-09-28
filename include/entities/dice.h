#pragma once

#include <stdexcept>

class Dice
{
    public:

    Dice();

    int getValue();

    void setValue(int value);

    private:

    static const int SIDES = 8;

    int _value;
};