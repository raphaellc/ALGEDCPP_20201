#include <iostream>
#include <fstream>
#include <string>
#include "../AulaStreams/Fala.h"
#include "../AulaStreams/Fala.cpp"
int main()
{
	Fala vetorFalas[3];
	std::ifstream inFBin;
	inFBin.open("../AulaStreams/dialogBin.dat", std::ios::binary | std::ios::in);
	int indice = 0;

	while (inFBin.is_open() && !inFBin.eof()) {
		std::cout << inFBin.tellg() << std::endl;
		inFBin.read(reinterpret_cast<char*>(&vetorFalas[indice]), sizeof(Fala));
		indice++;
	}
	for (int i = 0; i < 3; i++) {
		std::cout << "P" << i << " Fala: " << vetorFalas[i].obtemFala() << std::endl;
	}
	
	system("pause");
	return 0;
}