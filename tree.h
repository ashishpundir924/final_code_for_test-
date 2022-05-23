#pragma once

#include "animatedassets.h"

class Tree : public AnimatedAssets
{
public:
    Tree(int hspeed);

    void moveTree(sf::Time &elapsed, sf::RenderWindow &window);
};

