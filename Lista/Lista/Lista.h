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
	void deletar(T n);
	void inserirRecursivo(T n);
private:
	Nodo<T> *nodoInicial;
	//1 - Nodo *aux = nodoInicial;
};