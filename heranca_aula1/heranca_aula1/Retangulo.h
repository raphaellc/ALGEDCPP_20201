#pragma once
#include "Forma.h"
class Retangulo : public Forma
{
public:
	Retangulo();
	~Retangulo();
	bool ehQuadrado();
	float area() override;
};

