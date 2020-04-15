#include <iostream>
#include <fstream>
#include <string>
#include "Fala.h"
int main()
{
	//std::ofstream arquivo("dialogos.txt", std::ios::out); cria e abre o arquivo.
	//std::ofstream arquivo;
	//arquivo.open("dialogos.txt"); //cria, caso não exista e abre o arquivo
	//
	//if(!arquivo.is_open())
	//{
	//	std::cout << "Erro ao abrir o arquivo";
	//}
	//arquivo << "1 " << "fala1;fala12;fala13" << std::endl;
	//arquivo.close();
	//std::ifstream lerArq("dialogos.txt", std::ios::in);
	//if (!lerArq.is_open())
	//{
	//	std::cout << "Erro ao abrir o arquivo";
	//}
	//int idPersonagem;
	//std::string fala;
	//lerArq >> idPersonagem >> fala;
	//std::cout << "Id do Personagem = " << idPersonagem << std::endl;
	//std::cout << "Fala do Personagem = " << fala << std::endl;
	//
	//lerArq.close();
	//	
	//std::fstream farq;
	//farq.open("dialogos.txt", std::ios::in);
	//if (!farq.is_open())
	//	std::cout << "Erro ao abrir o arquivo" << std::endl;
	//farq >> fala;
	//std::cout << fala << std::endl;
	//farq.close();
	//cuidar com o tipo da stream, pois ofstream e if
	
	Fala falaP1;
	falaP1.idPersonagem = 1;
	falaP1.idInteracao = 1;
	falaP1.defineFala("Olá me Chamo Raphael, e estou aqui para lhe ensinar!");

	Fala falaP2;
	falaP2.idPersonagem = 2;
	falaP2.idInteracao = 1;
	falaP2.defineFala("Olá me Chamo Maria, e estou programando aqui!");

	Fala falaP3;
	falaP3.idPersonagem = 3;
	falaP3.idInteracao = 1;
	falaP3.defineFala("Olá me Chamo Vinicius, e não estou vendo a sua tela Raphael");

	
	std::ofstream farq_bin("dialogBin.dat", std::ios::binary | std::ios::out);
	int n = 10;
	if (farq_bin.is_open())
	{
		farq_bin.write(reinterpret_cast<char*>(&falaP1),sizeof(Fala));
		farq_bin.write(reinterpret_cast<char*>(&falaP2),sizeof(Fala));
		farq_bin.write(reinterpret_cast<char*>(&falaP3),sizeof(Fala));
	}
	else{
		std::cout << "Erro ao abrir o arquivo" << std::endl;
	}
	farq_bin.close();
	system("pause");
	return 0;
}