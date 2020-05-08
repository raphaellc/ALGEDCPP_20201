#pragma once
#include "Nodo.h"
#include <iostream>
class Lista
{
public:
	Lista();
	~Lista();
	void listarTodos();
	int buscarPosicao(int pos);
	void inserir(int n);
	void deletar(int n);
	void inserirRecursivo(int n);
private:
	Nodo *nodoInicial;
	//1 - Nodo *aux = nodoInicial;
};