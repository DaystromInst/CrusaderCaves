#pragma once
#include "Items.h"
class Ouch : // weapon class
	public Items
{
public:
	Ouch(std::string name, int blood);
	Ouch();
	~Ouch();

	int getNum();
	std::string getName() { return this->weapon; }
	void Use();
	bool usable() { return true; }


protected:
	int damage;
	std::string weapon;
};
