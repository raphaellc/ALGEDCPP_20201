#include <iostream>
#include "Retangulo.h"
#include "Triangulo.h"
int main()
{
	Forma * formas[10];
	formas[0] = new Retangulo;
	formas[1] = new Triangulo;
	for (int i=0; i < 2; i++)
	{
		std::cout << "area = " << formas[i]->area() << std::endl;
	}
	system("pause");
	return 0;
}