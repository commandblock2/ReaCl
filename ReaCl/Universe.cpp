#include "Universe.h"

Universe::Universe(sf::RenderWindow & render_wnd) :
    universe(std::make_unique<b2World>(b2Vec2_zero)), // For no gravity
    window(render_wnd)
{
    // kind of like main for now
    
    // since we need to refactor this really hard we will be needing smth.
    
    ships.emplace_back();
    
}

void Universe::exec() 
{
    while (window.isOpen()) {

        sf::Event event;
        while (window.pollEvent(event)) {
            
            if (event.type == sf::Event::Closed)
                window.close();
        }
        
        window.clear();
        
        render();

        window.display();
    }
}

void Universe::render()
{
    for (const auto& elem : ships)
        window.draw(elem);

    for (const auto& elem : other_structures)
        window.draw(elem);
}

void Universe::update()
{
    
}
