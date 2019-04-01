#include "pch.h"
#include "HereticPawn.h"


HereticPawn::HereticPawn()
{

}

HereticPawn::HereticPawn(std::string title)
{
	this->name = title;
	this->Health = 25;
	this->Soul = 15;
	this->Strength = 15;
	this->Dexterity = 10;
	this->Intelligence = 13;
	this->Resilience = 18;

	this->damage = 5;
	this->Holster.AddThing("short sword", 4);

	this->Calc_Def();
	this->Holster.AddThing("Hammer of Hell", 10);
}


HereticPawn::~HereticPawn()
{
}
