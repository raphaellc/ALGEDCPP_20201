#pragma once
#include <string>
class Fala
{
public:
	Fala();
	~Fala();
	int idPersonagem;
	int idInteracao;
	std::string obtemFala();
	void defineFala(std::string fl);
private:
	std::string fala;
};

