#pragma once
class Nodo
{
public:
	Nodo();
	~Nodo();

	Nodo * getProximo();
	void setProximo(Nodo *prox);

	int getDado();
	void setDado(int data);
	
private:
	int dado;
	Nodo *proximo;

};

