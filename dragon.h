#pragma once

#include "animatedassets.h"

class Dragon : public AnimatedAssets
{
private:
    int acceleration = 150;
    float fall_velocity = 0;

    int lives = 3;

public:
    Dragon(int vspeed);

    void animate(sf::Time elapsed, sf::RenderWindow &window);

    void jump(sf::Time elapsed);

    void setlives(int lifenum);
    int getlives();
};
