#pragma once
#include <string>
#include "Inventory.h"
#include "Weaponry.h"
#include "OddsAndEnds.h"
#include "Ouch.h"

class Person
{
public:
	Person(std::string title);
	Person();
	~Person();
	std::string getName();
	int damage;

	int Defence;
	int HPnow;
	void Leveling();
	void ExpGain(int a);
	int attack();
	void spellcast();
	void Calc_Def();
	void calcMods();
	int tankHit(int Bite);
	int getMod(int i);

	OddsAndEnds Backpack; // general inventory
	Weaponry Holster; // weapon inventory

protected:

	std::string name;
	int Level;
	int Experience = 0;
	int LevelTable[20];

	int Health;
	int Soul;
	int Strength;
	int Dexterity;
	int Intelligence;
	int Resilience;

	// modifiers
	int str;
	int dex;
	int Intel;
	int Res;


	std::string ArmourName;
	std::string Blade;

	//Inventory MedBag; // medicine bag
};

