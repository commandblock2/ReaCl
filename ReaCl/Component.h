#ifndef COMPONENT
#define COMPONENT


#include <SFML/Graphics.hpp>
#include <box2d/box2d.h>

#include "Alias.h"

class Component : sf::Drawable
{
//data and type alias
public:
    int health;
    bool constructing = true;
    fixure_ptr fixure;
    
private:
    //sf::Shape shape; //but is abstract, need refactor (further discussion)

//functions
public:

private:
    void draw(sf::RenderTarget&, sf::RenderStates) const override;
};

#endif
