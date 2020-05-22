#include "Lista.h"

Lista::Lista()
{
	nodoInicial = nullptr;
}

Lista::~Lista()
{
}

void Lista::listarTodos()
{	if (nodoInicial == nullptr) {
		std::cout << "Lista nula" << std::endl;
	}else{
		Nodo *aux;
		aux = nodoInicial;
		
		while (aux != nullptr){
			std::cout << aux->getDado() << std::endl;
			aux = aux->getProximo();
		}
	}
	/* 1 -
	listarTodos(aux){
		if (nodoInicial == nullptr) {
		std::cout << "Lista nula" << std::endl;
		}else{
		listarTodos(aux->getProximo);
		return aux->getDado();
		}
	}
	*/
}

template<class T>
bool Lista<T>::buscarValor(T _valorABuscar)
{
	//percorer a lista
	//Pra cada nó
	//no->dado == valorABuscar

	return false;
}

void Lista::inserir(int n)
{
	if(nodoInicial == nullptr){
		nodoInicial = new Nodo;
		nodoInicial->setProximo(nullptr);
		nodoInicial->setDado(n);
	}
	else{
		Nodo *aux;
		aux = nodoInicial;
		while(aux->getProximo() != nullptr){
			aux = aux->getProximo();
		}
		aux->setProximo(new Nodo);
		aux->getProximo()->setDado(n);
	}
}