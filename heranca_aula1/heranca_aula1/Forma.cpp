#include "Forma.h"



Forma::Forma()
{
}


Forma::~Forma()
{
}

void Forma::setCoordenadas(Coordenada * coord)
{
	for (;controle_coord < qtd_coordenadas; controle_coord++)
		this->coordenadas[controle_coord] = *coord;
}
