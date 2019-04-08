#pragma once
#include "Items.h"

class KeyItem :
	public Items
{
public:
	KeyItem(std::string title, bool reuse);
	KeyItem();
	~KeyItem();

	void Use(int roomno);
	std::string getName() { return this->name; }
	bool usable() { return this->reusable; }
	void addPlace(int f, std::string describe);

protected:
	std::string name;
	bool reusable;

	// potential use for a durability int

	// list/vector of descriptions of each use
	std::vector<std::string> description;
};

// plans for item use:
/*
	plan A:
		store the lists of places an item can be used and the event descriptions in the item itself
		call them up with the use function

	plan B:
		store lists of usable items and event descriptions in the rooms
*/