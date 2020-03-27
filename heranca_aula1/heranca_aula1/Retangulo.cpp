#include "Retangulo.h"



Retangulo::Retangulo()
{
	this->controle_coord = 0;
	this->qtd_coordenadas = 4;
	this->coordenadas = new Coordenada[qtd_coordenadas];
	
	for(;controle_coord < qtd_coordenadas; controle_coord++)
		setCoordenadas(new Coordenada());
	
	
}


Retangulo::~Retangulo()
{
}

bool Retangulo::ehQuadrado()
{
	return true;
}

float Retangulo::area()
{
	return 2.0f;
}
