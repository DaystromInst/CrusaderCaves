#pragma once
#include "Inventory.h"
#include "KeyItem.h"
#include <vector>
#include <list>
#include <string>
#include <iostream>

class OddsAndEnds :
	public Inventory
{
public:
	OddsAndEnds();
	~OddsAndEnds();

	void contents() { for (KeyItem *s : this->wares) { std::cout << s->getName() << std::endl; } }
	void Add(std::string name, bool renew);
	void Lose(std::string title);
	void ContextAdd(int i, std::string title, std::string labels);
	void UseThing(std::string title, int num);

protected:
	std::list<KeyItem*> wares;
};
