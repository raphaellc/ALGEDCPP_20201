#pragma once
#include "Nodo.h"
#include <iostream>

template<class T>
class ArvoreBinaria
{
public:
	ArvoreBinaria();
	~ArvoreBinaria();
	void caminharPreOrdem();
	void caminharEmOrdem();
	void caminharPosOrdem();
	void listarTodosElementos();
	void inserirElemento(T _e);
	void removerElemento(T _e);
	bool pesquisaElemento(T _e);
	int altura();
private:
	Nodo<T> * raiz;
	void caminharPreOrdem(Nodo<T> * _r);
	void caminharEmOrdem(Nodo<T> * _r);
	void caminharPosOrdem(Nodo<T> * _r);
	void listarTodosElementos(Nodo<T> * _r);
	void inserirElemento(T _e, Nodo<T> * _r);
	void removerElemento(T _e, Nodo<T> * _r);
	bool pesquisaElemento(T _e, Nodo<T> * _r);
	int altura(Nodo<T> * _r);
};

template <class T>
ArvoreBinaria<T>::ArvoreBinaria()
{
}

template<class T>
inline ArvoreBinaria<T>::~ArvoreBinaria()
{
}

template<class T>
inline void ArvoreBinaria<T>::caminharEmOrdem()
{
	if(this->raiz != nullptr)
	{
		caminharEmOrdem(this->raiz);
	}
}

template<class T>
inline void ArvoreBinaria<T>::inserirElemento(T _e)
{
	if (this->raiz == nullptr) {
		this->raiz = new Nodo<T>();
		this->raiz->defineDado(_e);
	}else
	{
		inserirElemento(_e, this->raiz);
	}
}

template<class T>
inline int ArvoreBinaria<T>::altura()
{
	if(raiz != nullptr)
		return altura(raiz);
	return 0;
}

template<class T>
inline void ArvoreBinaria<T>::caminharEmOrdem(Nodo<T>* _r)
{
	if(_r->obterFilhoEsq() != nullptr)
	{
		caminharEmOrdem(_r->obterFilhoEsq());
	}
	std::cout << _r->obtemDado() << std::endl;
	if (_r->obterFilhoDir() != nullptr)
	{
		caminharEmOrdem(_r->obterFilhoDir());
	}

}

template<class T>
inline void ArvoreBinaria<T>::inserirElemento(T _e, Nodo<T>* _r)
{
	if(_r != nullptr)
	{
		if(_e > _r->obtemDado())
		{
			if(_r->obterFilhoDir() != nullptr)
			{
				inserirElemento(_e, _r->obterFilhoDir());
			}else
			{
				Nodo<T> * aux = new Nodo<T>();
				aux->defineDado(_e);
				aux->definePai(_r);
				_r->defineFilhoDir(aux);
			}

		}else if(_e < _r->obtemDado())
		{
			if(_r->obterFilhoEsq() != nullptr)
			{
				inserirElemento(_e, _r->obterFilhoEsq());
			}else
			{
				Nodo<T> * aux = new Nodo<T>();
				aux->defineDado(_e);
				aux->definePai(_r);
				_r->defineFilhoEsq(aux);
			}
		}
	}
}

template<class T>
inline int ArvoreBinaria<T>::altura(Nodo<T>* _r)
{
	if (_r == nullptr) return -1;
	int alturaE, alturaD;
	alturaE = altura(_r->obterFilhoEsq());
	alturaD = altura(_r->obterFilhoDir());
	if (alturaE > alturaD)
		{return 1 + alturaE;}
	else
		{ return 1 + alturaD; }
	
}
