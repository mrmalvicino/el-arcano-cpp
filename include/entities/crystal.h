#pragma once

#include <string>
#include <cstring>

class Crystal
{
    public:

    Crystal();

    int getId();

    void setId(int id);

    std::string getName();

    void setName(const std::string & name);

    private:

    static const int SIZE = 30;

    int _id;

    char _name[SIZE];
};