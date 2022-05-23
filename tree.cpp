#include "tree.h"

Tree::Tree(int hspeed) : AnimatedAssets(0, hspeed)
{

}

void Tree::moveTree(sf::Time &elapsed, sf::RenderWindow &window)
{
    sf::FloatRect bounds = this->getGlobalBounds();
    if(bounds.left <= 0.0) // Dont exit screen on left side
    {
        this->setPosition(window.getSize().x - bounds.width, window.getSize().y - bounds.height);
    }
    this->move(this->getHspeed() * elapsed.asSeconds(), 0);
}
