#include <iostream>
#include "Lista.h"
#include "Gameobject.h"


int main()
{	
	setlocale(LC_ALL, "ptb");

	Lista<char> * lista = new Lista<char>();
	
	Gameobject * go1 = new Gameobject();
	Gameobject * go2 = new Gameobject();
	go1->setID(10);
	go2->setID(10);
	std::cout << go1 << std::endl;
	std::cout << go2 << std::endl;
	std::cout << (go1 == go2) << std::endl;
	if(go1 == go2)
	{
		std::cout << "iguais" << std::endl;
	}else
	{
		std::cout << "diferentes" << std::endl;
	}
	std::cout << std::endl;

	//Adicionando n�meros
	lista->inserir('a');
	lista->inserir('b');
	lista->inserir('c');

	//Mostrando os valores
	std::cout << "Os itens adicionados s�o:\n";
	lista->listarTodos();

	//Removendo o �ltimo
	lista->deletar(2);
	std::cout << "O �ltimo nodo foi deletado!\n";

	//Mostrando os valores atualizados
	std::cout << "Os itens atualizados s�o:\n";
	lista->listarTodos();

	//Buscando um valor
	std::cout << "Buscando pela posi��o 0:\n" << lista->buscarPosicao(0) << std::endl;

	system("pause");
	return 0;
}