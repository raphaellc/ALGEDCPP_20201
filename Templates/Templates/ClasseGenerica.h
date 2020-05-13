#pragma once
template <class T, class W>
class ClasseGenerica
{
public:
	ClasseGenerica();
	~ClasseGenerica();
	void setAtri1(T a1);
	T getAtri1();
	void setAtri2(W a2);
	W getAtri2();
private:
	T atributo1;
	W atributo2;
	
};
template <class T, class W>
inline ClasseGenerica<T,W>::ClasseGenerica()
{
	
}
template <class T, class W>
inline T ClasseGenerica<T,W>::getAtri1()
{
	return atributo1;
}
template <class T, class W>
inline W ClasseGenerica<T,W>::getAtri2()
{
	return atributo2;
}
template <class T, class W>
inline void ClasseGenerica<T,W>::setAtri1(T a1)
{
	atributo1 = a1;
}
template <class T, class W>
inline void ClasseGenerica<T,W>::setAtri2(W a2)
{
	atributo2 = a2;
}
template <class T, class W>
inline ClasseGenerica<T,W>::~ClasseGenerica()
{
	
}

