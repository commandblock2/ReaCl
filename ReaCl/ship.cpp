#include "ship.h"

Ship::Ship(b2World* world, b2BodyDef bd)
{
    this_ship = world->CreateBody(&bd);
}

void Ship::Create_block(b2FixtureDef fd, b2Vec2 v[], int32 c, sf::Color color){
    Block new_block(this_ship, fd, v, c, color);
    blocks.push_back(new_block);
}

void Ship::Render_ship(sf::RenderWindow* window){
    std::list<Block>::iterator i;
    for(i=blocks.begin(); i!=blocks.end(); i++){
        i->Render_block(window);
    }
}
