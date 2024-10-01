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

    int _id;

    char _name[30];
};