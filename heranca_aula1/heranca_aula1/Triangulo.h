#pragma once
#include "Forma.h"
class Triangulo :
	public Forma
{
public:
	Triangulo();
	~Triangulo();
	float area() override;
};

