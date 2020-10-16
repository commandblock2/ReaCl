#include "Structure.h"

void Structure::draw(sf::RenderTarget& target, sf::RenderStates states) const
{
	for (auto && elem : components) {
		target.draw(elem, states);
	}
}
