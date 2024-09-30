#pragma once

#include <string>
#include <cstring>
#include "effect.h"

class TarotCard
{
    public:

    TarotCard();

    int getId();

    void setId(int id);

    std::string getName();

    void setName(const std::string & name);

    Effect getEffect();

    void setEffect(Effect effect);

    private:

    static const int SIZE = 30;

    int _id;

    char _name[SIZE];

    Effect _effect;
};