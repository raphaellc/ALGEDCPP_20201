#pragma once
#include <string>
class Fala
{
public:
	Fala();
	~Fala();
	int idPersonagem;
	int idInteracao;
	char * obtemFala();
	void defineFala(std::string fl);
private:
	char fala[100];
};

