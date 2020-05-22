#pragma once
class Gameobject
{
public:
	Gameobject();
	~Gameobject();
	int getId();
	void setID(int _id);
	bool operator==(Gameobject * _go);
private:
	int id, x, y;
};

