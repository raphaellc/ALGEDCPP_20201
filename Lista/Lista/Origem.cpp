#include <iostream>
#include "Lista.h"

int main()
{	
	/*int vetor[100];
	for (int i = 0 ; i<100 ; i++)
	{
		vetor[i] =  i/2 ;
	}*/

	Lista * lista = new Lista();

	//Adicionando números
	lista->inserir(0);
	lista->inserir(2);
	lista->inserir(4);

	//mostrando os valores
	std::cout << "Os números adicionados são:\n";
	lista->listarTodos();
	/*cout << lista->buscarPosicao(0) << endl;
	cout << lista->buscarPosicao(1) << endl;
	cout << lista->buscarPosicao(2) << endl;*/

	//Removendo o último
	/*lista->delete(4);
	cout << "O último nodo foi deletado!\n";*/

	//mostrando os valores atualizados
	/*cout << "Os números atualizados são:\n";
	lista->listarTodos();*/
	/*cout << lista->buscarPosicao(0) << endl;
	cout << lista->buscarPosicao(1) << endl;
	cout << lista->buscarPosicao(2) << endl;*/

	system("pause");
	return 0;
}