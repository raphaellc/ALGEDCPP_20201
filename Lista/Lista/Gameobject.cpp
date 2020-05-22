#include "Gameobject.h"



Gameobject::Gameobject()
{
}


Gameobject::~Gameobject()
{
}

int Gameobject::getId()
{
	return this->id;
}

void Gameobject::setID(int _id)
{
	id = _id;
}
//go1 == go2
//go1->operator==(go2)
bool Gameobject::operator==(Gameobject * _go)
{
	return (this->id == _go->id);
}

