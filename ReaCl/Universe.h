#ifndef UNIVERSE
#define UNIVERSE

#include <vector>
#include <box2d/box2d.h>
#include <SFML/Graphics.hpp>

#include "Ship.h"

class Universe
{
//data and type alias
public:
    
private:
    world_ptr universe; // Since b2World is larger than 100, 000, better to allocate from heap
    std::vector<Ship> ships;
    std::vector<Structure> other_structures;
    
    
    sf::RenderWindow & window;

public:
    Universe(sf::RenderWindow& render_wnd);
    
    void exec();

private:
    void update();
    void render();
    
};

#endif
