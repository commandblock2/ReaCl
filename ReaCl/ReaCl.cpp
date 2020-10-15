// ReaCl.cpp : Defines the entry point for the application.
//

#include "ReaCl.h"
#include <box2d/box2d.h>


#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

using namespace std;

int main()
{
    b2Vec2 gravity(0.0f,0.0f);
    b2World world(gravity);
    

    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");
    
    

    sf::RectangleShape shape(sf::Vector2f(100.f,100.f));
    shape.setFillColor(sf::Color(150, 50, 250));
    shape.setRotation(4);
    
    while (window.isOpen())
    {
        // Process events
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window: exit
            if (event.type == sf::Event::Closed)
                window.close();
        }
        // Clear screen
        window.clear();
        window.draw(shape);
        // Update the window
        window.display();
    }
    
	return 0;
}
