#pragma once

#include "prophecy.h"
#include "card.h"
#include "crystal.h"

class Player
{
    public:

    Player();

    std::string getName();

    void setName(const std::string & name);

    Prophecy getProphecy();

    void setProphecy(Prophecy prophecy);

    private:

    char _name[30];

    Prophecy _prophecy;

    Card * _cards;

    Crystal * _crystals;
};