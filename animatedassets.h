#pragma once

#include <SFML/Graphics.hpp>

class AnimatedAssets : public sf::Sprite
{
private:
    int vspeed_;
    int hspeed_;

public:
    // Constructor
    AnimatedAssets(int vspeed=0, int hspeed=0);

    //Seters and Getters
    void setVspeed(int vspeed);
    int getVspeed();

    void setHspeed(int hspeed);
    int getHspeed();

};

