#pragma once
#include "Nodo.h"
#include <iostream>
template<class T>
class Lista
{
public:
	Lista();
	~Lista();
	void listarTodos();
	T buscarPosicao(int pos);
	void inserir(T n);
	void deletar(int pos);
private:
	void inserirRecursivo2(T n, Nodo<T> * percorre);

	Nodo<T> * nodoInicial;
};

template<class T>
Lista<T>::Lista()
{
	nodoInicial = nullptr;
}

template<class T>
Lista<T>::~Lista()
{
}

template<class T>
void Lista<T>::listarTodos()
{
	if (nodoInicial == nullptr) {
		std::cout << "Lista nula" << std::endl;
	}
	else {
		Nodo<T> *aux;
		aux = nodoInicial;

		while (aux != nullptr) {
			std::cout << aux->getDado() << std::endl;
			aux = aux->getProximo();
		}
	}
}

template<class T>
T Lista<T>::buscarPosicao(int pos)
{
	if (nodoInicial == nullptr)
	{
		return NULL;
	}
	else
	{
		Nodo<T> * aux;
		aux = nodoInicial;
		for (int i = 0; i < pos; i++)
		{
			aux = aux->getProximo();
		}
		return aux->getDado();
	}
}

template<class T>
void Lista<T>::inserir(T n)
{
	if (nodoInicial == nullptr) {
		nodoInicial = new Nodo<T>;
		nodoInicial->setProximo(nullptr);
		nodoInicial->setDado(n);
	}
	else
	{
		inserirRecursivo2(n, nodoInicial);
	}
}

template<class T>
void Lista<T>::deletar(int pos)
{
	if (nodoInicial != nullptr)
	{
		Nodo<T> *aux;
		aux = nodoInicial;
		for (int i = 0; i < pos - 1; i++) {
			aux = aux->getProximo();
		}
		if (aux->getProximo() != nullptr)
		{
			aux->setProximo(aux->getProximo()->getProximo());
		}

	}
}

template<class T>
void Lista<T>::inserirRecursivo2(T n, Nodo<T> * percorre)
{
	if (percorre->getProximo() != nullptr) {
		inserirRecursivo2(n, percorre->getProximo());
	}
	else
	{
		percorre->setProximo(new Nodo<T>);
		percorre->getProximo()->setDado(n);
	}
}