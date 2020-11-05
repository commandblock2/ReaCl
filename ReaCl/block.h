#ifndef BLOCK_H
#define BLOCK_H
#include <box2d/box2d.h>
#include <SFML/Graphics.hpp>
#include <list>
#include <stdlib.h>

class Block
{
private:
    static constexpr float RAD2DEG = 180.0f / 3.141592f;
    bool is_connect = false;
    bool is_commandor = false;
    float alpha = 10.0f;
    sf::ConvexShape render_shape;
    sf::Color block_color;
    b2Body *this_body;
    std::list<Block*> neighbours;
public:
    Block(b2Body* b, b2FixtureDef fd, b2Vec2 v[], int32 c, sf::Color color);
    void Render_block(sf::RenderWindow* window);
};

#endif // BLOCK_H
