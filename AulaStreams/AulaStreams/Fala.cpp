#include "Fala.h"



Fala::Fala()
{
	for(int i = 0; i < 100; i++)
	{
		this->fala[i] = ' ';
	}
}


Fala::~Fala()
{
}

char * Fala::obtemFala()
{
	return fala;
}

void Fala::defineFala(std::string fl)
{
	if (fl.length() <= 100) {
		for (unsigned int i = 0; i < fl.length(); i++)
		{
			this->fala[i] = fl.at(i);
		}
		unsigned int j;
		j = (100 - fl.length())+1;
		for (; j < 100; j++)
			this->fala[j] = ' ';
	}
}
