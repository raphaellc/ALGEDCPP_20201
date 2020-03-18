#pragma once
#include "Coordenada.h"
#include <iostream>

class Retangulo
{
public:
		Retangulo();
		~Retangulo();
		float calculaArea();
		float calculaPerimetro();
		bool ehQuadrado();
		void setComprimento();
		float getComprimento();
		void setLargura();
		float getLargura();
		
private:
		float comprimento;
		float largura;
		Coordenada * coordenadas[4];
		void defineCoordenadas();


};

