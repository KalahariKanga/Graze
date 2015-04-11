#include "oNote.h"


oNote::oNote()
{
	velocity.x = -4;
}


oNote::~oNote()
{
}

void oNote::onUpdate()
{
	if (position.x < 0)
		destroyInstance(this);
}

void oNote::draw(Canvas* c)
{
	c->setDrawColour(sf::Color(255, 20, 20));
	c->drawCircle(position.x, position.y, 6, 1);
}