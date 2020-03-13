#pragma once
class Coordenada
{
public:
	Coordenada();
	~Coordenada();
	
	void setX(float _x);
	float getX();
	void setY(float _y);
	float getY();
private:
	float x, y;

};

