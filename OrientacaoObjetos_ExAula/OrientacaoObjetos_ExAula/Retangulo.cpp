#include "Retangulo.h"

Retangulo::Retangulo()
{
	comprimento = 1.0f;
	largura = 1.0f;
	setCoordenadas();
}

void Retangulo::setCoordenadas()
{
	int i = 0;
	float x, y;
	Coordenada* coord;
		while (i < 4) {
			std::cout << "Informe x" << i+1 << std::endl;
			std::cin >> x;
			std::cout << "Informe y" << i+1 << std::endl;
			std::cin >> y;
			if (x > 0.0f && x < 20.0f && y > 0 && y < 20.0f) {
				coord = new Coordenada();
				coord->setX(x);
				coord->setY(y);
				coordenadas[i] = coord;
				i++;
			}
		}
}

void Retangulo::setComprimento()
{
	float comp1, comp2;
	Coordenada* c1 = coordenadas[0];
	for (int i = 1; i < 4; i++) {
		if (coordenadas[i]->getX() == c1->getX())
			comp1 = coordenadas[i]->getY() - c1->getY();
		if (coordenadas[i]->getX() != c1->getX())
			comp2 = coordenadas[i]->getX() - c1->getX();
	}
	if (comp1 > comp2) {
		comprimento = comp1;
		largura = comp2;
	}
	else {
		comprimento = comp2;
		largura = comp1;
	}
}
