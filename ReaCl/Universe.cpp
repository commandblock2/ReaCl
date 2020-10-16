#include "Universe.h"

Universe::Universe(sf::RenderWindow & render_wnd) :
    universe(std::make_unique<b2World>(b2Vec2_zero)), // For no gravity
    window(render_wnd)
{
    
}

void Universe::exec() 
{
    
}

void Universe::render()
{
    
}

void Universe::update()
{
    
}
