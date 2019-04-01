#include "pch.h"
#include "Ouch.h"


Ouch::Ouch(std::string name, int blood)
{
	this->damage = blood;
	this->weapon = name;
}

Ouch::Ouch()
{

}


Ouch::~Ouch()
{
}

int Ouch::getNum() // pass back damage
{
	return this->damage;
}

void Ouch::Use()
{
}
