#pragma once
template<class T>
class Nodo
{
public:
	Nodo();
	~Nodo();

	Nodo * getProximo();
	void setProximo(Nodo *prox);

	T getDado();
	void setDado(T data);
	
private:
	T dado;
	Nodo *proximo;

};

template<class T>
Nodo<T>::Nodo()
{
	proximo = nullptr;
}

template<class T>
Nodo<T>::~Nodo()
{
}

template<class T>
Nodo<T> * Nodo<T>::getProximo()
{
	return proximo;
}

template<class T>
void Nodo<T>::setProximo(Nodo * prox)
{
	proximo = prox;
}

template<class T>
T Nodo<T>::getDado()
{
	return dado;
}

template<class T>
void Nodo<T>::setDado(T data)
{
	dado = data;
}

