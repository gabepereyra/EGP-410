#include "Hitbox.h"

#include "Vector2D.h"

Hitbox::Hitbox()
{

}

Hitbox::Hitbox(Vector2D position, float width, float height)
{
	minX = position.getX();
	minY = position.getY();
	maxX = minX + width;
	maxY = minY + height;
}

Hitbox::Hitbox(float x1, float y1, float x2, float y2)
{
	minX = x1;
	minY = y1;
	maxX = x2;
	maxY = y2;
}

Hitbox::~Hitbox()
{

}

bool Hitbox::checkCollision(Hitbox& otherBox)
{
	if (minX < otherBox.maxX && maxX > otherBox.minX &&
		minY < otherBox.maxY && maxY > otherBox.minY)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Hitbox::update(float deltaX, float deltaY)
{
	minX += deltaX;
	maxX += deltaX;
	minY += deltaY;
	maxY += deltaY;
}