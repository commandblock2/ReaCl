#ifndef COMPONENT
#define COMPONENT


#include <SFML/Graphics.hpp>
#include <box2d/box2d.h>

#include "Alias.h"

class Component : public sf::Drawable
{
//data and type alias
public:
    int health;
    bool constructing = true;
    fixure_ptr fixure;
    
private:
    std::unique_ptr<sf::Shape> shape;

//functions
public:
    Component(std::unique_ptr<sf::Shape>);
private:
    void draw(sf::RenderTarget&, sf::RenderStates) const override;
};

#endif
