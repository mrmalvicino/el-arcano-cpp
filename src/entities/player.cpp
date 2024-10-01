#include "../../include/entities/player.h"

Player::Player()
{

}

std::string Player::getName()
{
    return _name;
}

void Player::setName(const std::string & name)
{
    strcpy(_name, name.c_str());
}

Prophecy Player::getProphecy()
{
    return _prophecy;
}

void Player::setProphecy(Prophecy prophecy)
{
    _prophecy = prophecy;
}