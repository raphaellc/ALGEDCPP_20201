#include "Forma.h"



Forma::Forma()
{
	comprimento = 0.0f;
	largura = 0.0f;
}


Forma::~Forma()
{
}

float Forma::area()
{
	return 0.0f;
}



void Forma::setCoordenadas(Coordenada * coord)
{
	for (;controle_coord < qtd_coordenadas; controle_coord++)
		this->coordenadas[controle_coord] = *coord;
}
