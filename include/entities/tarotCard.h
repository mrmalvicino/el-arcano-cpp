#pragma once

#include <string>
#include <cstring>

class TarotCard
{
    public:

    TarotCard();

    std::string getName();

    void setName(const std::string & name);

    private:

    static const int SIZE = 30;

    char _name[SIZE];
};