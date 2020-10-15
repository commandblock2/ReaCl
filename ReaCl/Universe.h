#ifndef UNIVERSE
#define UNIVERSE

#include <vector>
#include <box2d/box2d.h>

#include "Ship.h"

class Universe
{
//data and type alias
public:
    
private:
    b2World universe;
    std::vector<Ship> ships;
    std::vector<Structure> other_structures;

public:
    

private:
    void step();
    void render();
    
};

#endif
