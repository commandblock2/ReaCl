#ifndef STRUCTURE
#define STRUCTURE

#include <vector>
#include <SFML/Graphics.hpp>

#include "Alias.h"
#include "Component.h"

class Structure : public sf::Drawable
{
//data and type alias
public:
    
protected:
    body_ptr body;
    std::vector<Component> components;
private:
    

public:

private:
    void draw(sf::RenderTarget&, sf::RenderStates) const override;
};

#endif
