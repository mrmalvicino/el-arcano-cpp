#pragma once

#include <string>
#include <cstring>

class ProphecyCard
{
    public:

    ProphecyCard();

    std::string getName();

    void setName(const std::string & name);

    private:

    static const int SIZE = 30;

    char _name[SIZE];
};