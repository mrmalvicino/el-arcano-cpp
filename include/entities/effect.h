#pragma once

#include <string>
#include <cstring>

class Effect
{
    public:

    Effect();

    int getId();

    void setId(int id);

    std::string getName();

    void setName(const std::string & name);

    std::string getDescription();

    void setDescription(const std::string & description);

    private:

    static const int SIZE = 30;

    int _id;

    char _name[SIZE];

    char _description[SIZE * 10];
};