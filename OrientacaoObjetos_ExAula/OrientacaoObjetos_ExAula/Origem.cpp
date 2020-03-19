#include <iostream>
#include "Retangulo.h"
using namespace std;

int main()
{
	Retangulo * ret = new Retangulo();
	ret->setComprimento();
	cout << "Comprimento = " << ret->getComprimento() << endl;
	cout << "Largura "  << ret->getLargura() << endl;
	cout << "Eh Quadrado = " << ret->ehQuadrado() << endl;
	cout << "Perimetro = " << ret->calculaPerimetro() << endl;
	system("pause");
	return 0;
}

