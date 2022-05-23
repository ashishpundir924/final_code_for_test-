#include "animatedassets.h"

// Constructor
AnimatedAssets::AnimatedAssets(int vspeed, int hspeed)
{
    this->vspeed_ = vspeed;
    this->hspeed_ = hspeed;
}

//Seters and Getters
void AnimatedAssets::setVspeed(int vspeed)
{
    this->vspeed_ = vspeed;
}
int AnimatedAssets::getVspeed()
{
    return this->vspeed_;
}

void AnimatedAssets::setHspeed(int hspeed)
{
    this->hspeed_ = hspeed;
}
int AnimatedAssets::getHspeed()
{
    return this->hspeed_;
}
