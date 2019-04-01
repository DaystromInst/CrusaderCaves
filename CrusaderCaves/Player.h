#pragma once
#include "Person.h"
#include "Inventory.h"

class Player :
	public Person
{
public:
	Player();
	~Player();

	void Spend(int cashyboi);
	void PinkFloyd(int money); // add money to the bag
	int CheckBag(); // count moneys
	//Inventory *Backpack = new Inventory();

protected:
	int Coinpurse;

};

