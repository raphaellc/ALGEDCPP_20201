#include <iostream>
#include "Lista.h"
#include "Gameobject.h"

int main()
{	
	Gameobject * go1 = new Gameobject();
	Gameobject * go2 = new Gameobject();
	std::cout << go1 << std::endl;
	go1->getId() == go2->getId();

	Lista<Gameobject *> * lst = new Lista<Gameobject*>
		
	/*int vetor[100];
	for (int i = 0 ; i<100 ; i++)
	{
		vetor[i] =  i/2 ;
	}*/

	Lista<int> * lista = new Lista<int>();
	Lista<Gameobject> * game_objects = new Lista<Gameobject>();
	//Adicionando n�meros
	lista->inserir(0);
	lista->inserir(2);
	lista->inserir(4);

	//mostrando os valores
	std::cout << "Os n�meros adicionados s�o:\n";
	lista->listarTodos();
	/*cout << lista->buscarPosicao(0) << endl;
	cout << lista->buscarPosicao(1) << endl;
	cout << lista->buscarPosicao(2) << endl;*/

	//Removendo o �ltimo
	/*lista->delete(4);
	cout << "O �ltimo nodo foi deletado!\n";*/

	//mostrando os valores atualizados
	/*cout << "Os n�meros atualizados s�o:\n";
	lista->listarTodos();*/
	/*cout << lista->buscarPosicao(0) << endl;
	cout << lista->buscarPosicao(1) << endl;
	cout << lista->buscarPosicao(2) << endl;*/

	system("pause");
	return 0;
}