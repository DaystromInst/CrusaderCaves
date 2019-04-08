#pragma once
#include <list>
#include <string>
#include "Person.h"
#include "KeyItem.h"
#include "Baphomet_Boss.h"


class Room
{
public:
	Room(std::string title);
	~Room();

	Items* getThing(std::string title);
	void addLoot(KeyItem *thing);
	void addPointy(Ouch *thing);
	void Finder(); // find items
	void addUseful(std::string title, std::string desc); // add to the list of items the player can use in this room
	//void UsefulEvent(std::string title);

	Person getAlly(int index);
	Person* getAxis(int index);

	void addAlly();
	void addAxis(int p, std::string title);
	void addAxis(Baphomet_Boss *Boss);
	int AxCount;
	int AllyCount;

	void Connection(Room* Nordwall, Room* Suedwall, Room* Westwall, Room* Ostwall);
	Room* getNext(std::string compass);

	std::string getDesc();
private:
	Room* Norden;
	Room* Sueden;
	Room* Westen;
	Room* Osten;

	std::vector<Person*> Allies;
	std::vector<Person*> Axis;
	//std::vector<Items*> stuff;

	std::string describe;
	std::vector<KeyItem*> Loot; // loot
	std::vector<Ouch*> PointyBits; // weapons in room

	//std::vector<std::string> usables; // items usable in this room
	//std::vector<std::string> UseEvent; // Items are assumed to have the same index # as their desc

};
