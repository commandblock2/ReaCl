#include "Component.h"

Component::Component(std::unique_ptr<sf::Shape> shape):
	shape(std::move(shape))
{
}

void Component::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	target.draw(*shape, states);
}
