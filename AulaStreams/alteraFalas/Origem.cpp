#include <iostream>
#include <fstream>
#include <string>
#include "../AulaStreams/Fala.h"
#include "../AulaStreams/Fala.cpp"
int main()
{
	Fala vetorFalas[3];
	std::ifstream inFBin;

	std::ofstream farq_bin;
	farq_bin.open("../AulaStreams/dialogBin.dat", std::ios::out | std::ios::binary);
	if (farq_bin.is_open()) {
		farq_bin.seekp(1 * sizeof(Fala));
		farq_bin.write(reinterpret_cast<const char*>(&vetorFalas[1]), sizeof(Fala));
		farq_bin.close();
	}

	Fala novaFala;

	inFBin.open("../AulaStreams/dialogBin.dat", std::ios::binary | std::ios::in);
	if (inFBin.is_open()) {
		inFBin.seekg(1 * sizeof(Fala));
		inFBin.read(reinterpret_cast<char*>(&novaFala), sizeof(Fala));
		inFBin.close();
	}
	std::cout << " Fala: " << novaFala.obtemFala() << std::endl;

	system("pause");
	return 0;
}