#include "pch.h"
#include "Weaponry.h"


Weaponry::Weaponry()
{
}


Weaponry::~Weaponry()
{
}

void Weaponry::AddThing(std::string name, int damage)
{
	Claws.push_back(new Ouch(name, damage));
}

void Weaponry::UseIt(std::string title)
{
}
