#pragma once
#include "Coordenada.h"
class Forma
{
public:
	Forma();
	~Forma();
	
protected:
	int qtd_coordenadas;
	int controle_coord;
	Coordenada * coordenadas;
	void setCoordenadas(Coordenada * coord);
};

