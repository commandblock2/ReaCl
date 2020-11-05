#include <iostream>
#include <box2d/box2d.h>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "ship.h"

int main(){
    // video set
    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;

    sf::RenderWindow window = sf::RenderWindow(sf::VideoMode(800, 600),
                                               "TestWindow", sf::Style::Default, settings);
    // physics set
    b2Vec2 gravity(0.0f, 10.0f);
    b2World world(gravity);

    float timeStep = 1.0f / 60.0f;
    int32 velocityIterations = 6;
    int32 positionIterations = 2;
    // floor def
    b2BodyDef groundBodyDef;
    groundBodyDef.position.Set(40.0f, 60.0f);

    b2FixtureDef ground_fixture;
    b2PolygonShape groundBox;
    b2Vec2 v[4];
    v[0].Set(-40.0f, -0.2f);
    v[1].Set(40.0f, -0.2f);
    v[2].Set(40.0f, 0.2f);
    v[3].Set(-40.0f, 0.2f);
    groundBox.Set(v, 4);

    ground_fixture.shape = &groundBox;

    Ship floor(&world, groundBodyDef);
    floor.Create_block(ground_fixture, v, 4, sf::Color(100, 50, 50));

    // block def
    b2BodyDef blockBodyDef;
    blockBodyDef.type = b2_dynamicBody;
    blockBodyDef.position.Set(40.0f, 40.0f);


    b2FixtureDef block_fixture;
    b2PolygonShape blockBox;
    b2Vec2 vblock[4];
    vblock[0].Set(-4.0f, 0.0f);
    vblock[1].Set(-4.0f, 4.0f);
    vblock[2].Set(4.0f, 0.0f);
    vblock[3].Set(4.0f, -4.0f);
    blockBox.Set(vblock, 4);

    block_fixture.shape = &blockBox;
    block_fixture.density = 1.0f;
    block_fixture.friction = 10.0f;
    block_fixture.restitution = 0.0f;



    Ship blocks(&world, blockBodyDef);
    blocks.Create_block(block_fixture, vblock, 4, sf::Color(50, 50, 100));
    vblock[0].Set(-4.0f, 0.0f);
    vblock[1].Set(-4.0f, 4.0f);
    vblock[2].Set(-10.0f, 4.0f);
    vblock[3].Set(-10.0f, 0.0f);
    blockBox.Set(vblock, 4);
    block_fixture.density = 0.2f;
    block_fixture.friction = 0.0f;
    block_fixture.restitution = 0.9f;
    blocks.Create_block(block_fixture, vblock, 4, sf::Color(50, 100, 50));

    while(window.isOpen()){
        sf::Event event;
        world.Step(timeStep, velocityIterations, positionIterations);
        while (window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                    window.close();
            }
        window.clear(sf::Color::Black);
        blocks.Render_ship(&window);
        floor.Render_ship(&window);
        window.display();
        for(int i=0; i<5000000; i++);
    }

    return 0;
}
