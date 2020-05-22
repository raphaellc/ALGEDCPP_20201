#pragma once
#include <iostream>
class Gameobject
{
public:
	Gameobject();
	~Gameobject();
	int getId();
	void setID(int _id);
	friend bool operator==(const Gameobject & go1, const Gameobject & _go)
	{
		return go1.id == _go.id;
	}
	friend std::ostream& operator<<(std::ostream& out, Gameobject * _go);
	
private:
	int id, x, y;
};

