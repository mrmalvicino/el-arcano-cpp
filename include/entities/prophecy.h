#pragma once

#include <string>
#include <cstring>

class Prophecy
{
    public:

    Prophecy();

    int getId();

    void setId(int id);

    std::string getName();

    void setName(const std::string & name);

    std::string getDescription();

    void setDescription(const std::string & description);

    private:

    int _id;

    char _name[30];

    char _description[500];
};