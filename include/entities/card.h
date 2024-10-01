#pragma once

#include <string>
#include <cstring>
#include "effect.h"

class Card
{
    public:

    Card();

    int getId();

    void setId(int id);

    std::string getName();

    void setName(const std::string & name);

    Effect getEffect();

    void setEffect(Effect effect);

    private:

    int _id;

    char _name[30];

    Effect _effect;
};