#pragma once
#include "Inventory.h"
#include "Ouch.h"
#include <list>
#include <string>
#include <iostream>

class Weaponry :
	public Inventory
{
public:
	Weaponry();
	~Weaponry();
	void AddThing(std::string name, int damage);
	void contents() { for (Ouch *s : this->Claws) { std::cout << s->getName(); } }
	void UseIt(std::string title); // change equipped weapon


protected:
	std::list<Ouch*> Claws; // list of weapons
	std::string Equipped; // name of equipped member of Claws
};
