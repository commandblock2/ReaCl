#ifndef SHIP_H
#define SHIP_H
#include "block.h"
#include <box2d/box2d.h>
#include <SFML/Graphics.hpp>
#include <list>

class Ship
{
private:
    b2Body* this_ship;
    std::list<Block> blocks;
public:
    Ship(b2World* world, b2BodyDef bd);
    void Create_block(b2FixtureDef fd, b2Vec2 v[], int32 c, sf::Color color);
    void Render_ship(sf::RenderWindow* window);
};

#endif // SHIP_H
