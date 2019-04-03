#include "pch.h"
#include "Player.h"


Player::Player() : Person("Crusader")
{
	this->Health = 10; // initialize stats
	this->Soul = 10;
	this->Strength = 10;
	this->Dexterity = 10;
	this->Intelligence = 10;
	this->Resilience = 10;

	this->Level = 1;

	this->damage = 7;
	//this->Backpack->AddThing();
	
	this->Holster.AddThing("short sword", 7);
}


Player::~Player()
{
	//this->Backpack->~Inventory();
}

void Player::PinkFloyd(int earning)
{
	this->Coinpurse = this->Coinpurse + earning;
}

void Player::Spend(int expense)
{
	this->Coinpurse = this->Coinpurse - expense;
}

int Player::CheckBag()
{
	return this->Coinpurse;
}
