#include "Retangulo.h"



Retangulo::Retangulo()
{
	this->controle_coord = 0;
	this->qtd_coordenadas = 4;
	this->coordenadas = new Coordenada[qtd_coordenadas];
	setCoordenadas(new Coordenada());
	this->controle_coord++;
	setCoordenadas(new Coordenada());
	this->controle_coord++;
	setCoordenadas(new Coordenada());
	this->controle_coord++;
	setCoordenadas(new Coordenada());
	this->controle_coord++;
}


Retangulo::~Retangulo()
{
}
