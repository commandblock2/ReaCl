// ReaCl.cpp : Defines the entry point for the application.
//

#include "ReaCl.h"
#include <box2d/box2d.h>


#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

using namespace std;

int main()
{
	b2BodyDef def;
    b2WeldJointDef jointdef;
    jointdef.bodyA;
    jointdef.bodyB;

    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");
    
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
        // Update the window
        window.display();
    }
    
	return 0;
}
