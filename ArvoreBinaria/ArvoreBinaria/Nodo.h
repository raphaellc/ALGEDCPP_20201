#pragma once
template <class T>
class Nodo
{
public:
	Nodo();
	~Nodo();
	Nodo<T> * obterFilhoEsq();
	Nodo<T> * obterFilhoDir();
	Nodo<T> * obterPai();
	void definePai(Nodo<T> * _pai);
	void defineFilhoEsq(Nodo<T> * _esq);
	void defineFilhoDir(Nodo<T> * _dir);
	void defineDado(T _dado);
	T obtemDado();
private:
	Nodo<T> * esq, *dir, *pai;
	T dado;
};

template<class T>
inline Nodo<T>::Nodo()
{
	definePai(nullptr);
	defineFilhoDir(nullptr);
	defineFilhoEsq(nullptr);
}

template<class T>
inline Nodo<T>* Nodo<T>::obterFilhoEsq()
{
	return this->esq;
}

template<class T>
inline Nodo<T>* Nodo<T>::obterFilhoDir()
{
	return this->dir;
}

template<class T>
inline Nodo<T>* Nodo<T>::obterPai()
{
	return this->pai;
}

template<class T>
inline void Nodo<T>::definePai(Nodo<T>* _pai)
{
	this->pai = _pai;
}

template<class T>
inline void Nodo<T>::defineFilhoEsq(Nodo<T>* _esq)
{
	this->esq = _esq;
}

template<class T>
inline void Nodo<T>::defineFilhoDir(Nodo<T>* _dir)
{
	this->dir = _dir;
}

template<class T>
inline void Nodo<T>::defineDado(T _dado)
{
	this->dado = _dado;
}

template<class T>
inline T Nodo<T>::obtemDado()
{
	return this->dado;
}
