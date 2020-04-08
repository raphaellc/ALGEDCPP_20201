#include "Fala.h"



Fala::Fala()
{
}


Fala::~Fala()
{
}

std::string Fala::obtemFala()
{
	return this->fala;
}

void Fala::defineFala(std::string fl)
{
	this->fala = fl;
}
