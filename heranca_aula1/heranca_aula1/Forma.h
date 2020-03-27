#pragma once
#include "Coordenada.h"
class Forma
{
public:
	Forma();
	~Forma();
	virtual float area();
	
protected:
	int qtd_coordenadas;
	float comprimento, largura;
	int controle_coord;
	Coordenada * coordenadas;
	Coordenada * coordenadasEstatica[4];
	
	void setCoordenadas(Coordenada * coord);
};

