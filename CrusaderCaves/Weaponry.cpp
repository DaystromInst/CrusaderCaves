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

int Weaponry::UseIt()
{
	int damage;

	for (Ouch *s : this->Claws)
	{
		if (s->getName() == this->Equipped)
		{
			damage = s->getNum();
		}
	}
	return damage;
}
