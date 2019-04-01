#pragma once
#include <list>
#include "Items.h"
#include "Ouch.h"

class Inventory
{
public:
	Inventory();
	~Inventory();

	virtual void contents() = 0;
	virtual void UseThing(std::string Title);
	virtual void LoseThing(std::string Title);
	virtual void AddThing();

protected:
	//std::list<Ouch*> Claws; // list of weapon
};

