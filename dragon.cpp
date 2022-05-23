#include "dragon.h"

#include <iostream>

Dragon::Dragon(int vspeed) : AnimatedAssets(vspeed, 0)
{

}

void Dragon::animate(sf::Time elapsed, sf::RenderWindow &window)
{
    sf::FloatRect bounds = this->getGlobalBounds();
    // Check if object is not on the ground.
    if(bounds.top < window.getSize().y - bounds.height)
    {
        if(fall_velocity < 1200)fall_velocity += this->acceleration;
        this->move(0, fall_velocity * elapsed.asSeconds());
    }
    else
    {
        fall_velocity = 0;
    }
}

void Dragon::jump(sf::Time elapsed)
{
    this->move(0, this->getVspeed() * elapsed.asSeconds());
}

void Dragon::setlives(int lifenum)
{
    this->lives = lifenum;
}
int Dragon::getlives()
{
    return this->lives;
}
