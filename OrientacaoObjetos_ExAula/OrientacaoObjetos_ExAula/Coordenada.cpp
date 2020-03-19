#include "Coordenada.h"

Coordenada::Coordenada()
{
	x = 0.0f;
	y = 0.0f;
}

Coordenada::~Coordenada()
{
}

void Coordenada::setX(float _x)
{
	this->x = _x;
}

float Coordenada::getX()
{
	return this->x;
}

void Coordenada::setY(float _y)
{
	this->y = _y;
}

float Coordenada::getY()
{
	return this->y;
}
