#include <iostream>
#include <fstream>
#include <string>
int main()
{
	//std::ofstream arquivo("dialogos.txt", std::ios::out); cria e abre o arquivo.
	std::ofstream arquivo;
	arquivo.open("dialogos.txt"); //cria, caso não exista e abre o arquivo
	
	if(!arquivo.is_open())
	{
		std::cout << "Erro ao abrir o arquivo";
	}
	arquivo << "1 " << "fala1;fala12;fala13" << std::endl;
	arquivo.close();
	std::ifstream lerArq("dialogos.txt", std::ios::in);
	if (!lerArq.is_open())
	{
		std::cout << "Erro ao abrir o arquivo";
	}
	int idPersonagem;
	std::string fala;
	lerArq >> idPersonagem >> fala;
	std::cout << "Id do Personagem = " << idPersonagem << std::endl;
	std::cout << "Fala do Personagem = " << fala << std::endl;
	
	lerArq.close();
		
	std::fstream farq;
	farq.open("dialogos.txt", std::ios::in);
	if (!farq.is_open())
		std::cout << "Erro ao abrir o arquivo" << std::endl;
	farq >> fala;
	std::cout << fala << std::endl;
	system("pause");

	
	return 0;
}