#include "Nodo.h"



Nodo::Nodo()
{
	proximo = nullptr;
}

Nodo::~Nodo()
{
}

Nodo * Nodo::getProximo()
{
	return proximo;
}

void Nodo::setProximo(Nodo * prox)
{
	proximo = prox;
}

int Nodo::getDado()
{
	return dado;
}

void Nodo::setDado(int data)
{
	dado = data;
}

