#include "block.h"

Block::Block(b2Body *b, b2FixtureDef fd, b2Vec2 v[], int32 c, sf::Color color)
{
    float body_x, body_y;
    this_body = b;
    body_x = b->GetPosition().x;
    body_y = b->GetPosition().y;
    b->CreateFixture(&fd);
    render_shape.setPosition(body_x*alpha, body_y*alpha);
    render_shape.setPointCount(static_cast<unsigned long>(c));
    for (unsigned long i=0; i<static_cast<unsigned long>(c); i++) {
        render_shape.setPoint(i, sf::Vector2f(v[i](0)*alpha, v[i](1)*alpha));
    }
    block_color = color;
}

void Block::Render_block(sf::RenderWindow* window){
    b2Vec2 position = this_body->GetPosition();
    float angle = this_body->GetAngle();

    render_shape.setRotation(angle*RAD2DEG);
    render_shape.setPosition(position.x*alpha, position.y*alpha);
    render_shape.setFillColor(block_color);
    window->draw(render_shape);
}
