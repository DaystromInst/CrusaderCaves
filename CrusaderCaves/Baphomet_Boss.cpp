#include "pch.h"
#include "Baphomet_Boss.h"


Baphomet_Boss::Baphomet_Boss()
{
	this->name = "Demon Lord Baphomet";
	this->Health = 30;
	this->Soul = 30;
	this->Strength = 15;
	this->Dexterity = 14;
	this->Intelligence = 20;
	this->Resilience = 14;
	this->calcMods();
	this->Calc_Def();
}


Baphomet_Boss::~Baphomet_Boss()
{

}
