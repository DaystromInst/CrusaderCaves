#include "pch.h"
#include "Person.h"
#include <iostream>


Person::Person(std::string title)
{
	this->name = title;
	this->HPnow = this->Health;

	int a = 50; // create an int for standardised increments
	this->LevelTable[0] = 50; // assign the first value in the array
	a += 50; // increment

	for (int i = 1; i < 20; i++) // assign values to other array cells and increment 'a'
	{
		this->LevelTable[i] = a;
		a += 50;
	}

}

Person::Person()
{

}

Person::~Person()
{
}

std::string Person::getName()
{
	return this->name;
}

void Person::Leveling()
{
	this->Level++; //level increases

	int reply = 0; //create and initialize input storage

	int points = 10; //points for raising stats

	while (points > 0) //loop until the player runs out of points
	{
		std::cout << "STATS\n"; // show the stats, their current levels, and assign a number to each for the player to choose where points go.
		std::cout << "(1)Health: " << this->Health << "  (2)Soul: " << this->Soul << std::endl;
		std::cout << "(3)Strength: " << this->Strength << "  (4)Dexterity: " << this->Dexterity << std::endl;
		std::cout << "(5)Intelligence: " << this->Intelligence << "  (6)Resilience: " << this->Resilience << std::endl;


		std::cout << "You have " << points << "points left.\n"; //amount of points remaining
		std::cout << "Choose a stat (enter its number):\n"; //input prompt
		std::cin >> reply; // input
		switch (reply) // easier to manage than nested else-if statements
		{
		case 1: this->Health++; //raise health and toss a point
			points--;
		case 2: this->Soul++; // raise soul and toss a point
			points--;
		case 3: this->Strength++; // raise strength and toss a point
			points--;
		case 4: this->Dexterity++; // raise dex and toss a point
			points--;
		case 5: this->Intelligence++; // raise smarty and toss a pointy
			points--;
		case 6: this->Resilience++; // harder to hurt
			points--;
		}
	}
}

void Person::ExpGain(int a) // simple experience gaining
{
	this->Experience = this->Experience + a;
}

int Person::attack() // calculate and return damage amount
{
	/*
		TO DO
	figure out how to manage equipping weapons and armour
	calculate stats
	*/

	damage = Holster.UseIt(); // get the weapon (or fist's) damage


	return damage;
}

void Person::spellcast() // perform a miracle
{
}

void Person::Calc_Def() // calculate defence rating
{
	this->Defence = this->Resilience;
}

void Person::calcMods()
{
	// strength mod
	if (this->Strength <= 5)
	{
		this->str = 0;
	}
	else if (this->Strength > 5 && this->Strength <= 10)
	{
		this->str = 1;
	}
	else
	{
		this->str = 2;
	}

	// dex mod
	if (this->Dexterity <= 5)
	{
		this->dex = 0;
	}
	else if (this->Dexterity > 5 && this->Dexterity <= 10)
	{
		this->dex = 1;
	}
	else
	{
		this->dex = 2;
	}

	// intelligence mod
	if (this->Intelligence <= 5)
	{
		this->Intel = 0;
	}
	else if (this->Intelligence > 5 && this->Intelligence <= 10)
	{
		this->Intel = 1;
	}
	else
	{
		this->Intel = 2;
	}

	// Resilience mod

}

int Person::tankHit(int Bite) // compare damage and attack roll to defence. return damage taken
{
	int damage = 1;

	damage = this->Defence - Bite;

	if (damage < 0)
	{
		damage = 0;
	}

	this->HPnow -= damage;
	return damage;
}

int Person::getMod(int i)
{
	switch (i)
	{
	case 0: return this->str;

	case 1: return this->dex;

	case 2: return this->Intel;

	case 3: return this->Res;
	}
	return 0;
}