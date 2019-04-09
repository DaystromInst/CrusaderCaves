#include "pch.h"
#include "Room.h"
#include "HereticPawn.h"
#include "Czarownica.h"


Room::Room(std::string title)
{
	this->describe = title; // room description assignment
}


Room::~Room()
{
}

Items* Room::getThing(std::string title)
{
	std::string ItemName; // temporary name storage

	for (KeyItem *s : this->Loot) // for each item in the list
	{
		ItemName = s->getName(); // pass the name into storage
		if (ItemName == title) // if the name matches the one we're looking for
		{
			return s; // return the entire item
		}
		else
		{
			ItemName.clear(); // otherwise clear the string and move on
		}
	}
	return nullptr; // couldn't find the item, sorry
}

void Room::addLoot(KeyItem *thing)
{
	this->Loot.push_back(thing);
}

void Room::addPointy(Ouch * thing)
{
	this->PointyBits.push_back(thing);
}

void Room::Finder()
{
	if (!this->Loot.empty())
	{
		std::cout << "You search the room and find these items: ";
		for (int i = 0; i < this->Loot.size(); i++)
		{
			std::cout << this->Loot[i]->getName() << ", ";
		}
	}
	else
	{
		std::cout << "After searching the room, you don't find any useful equipment.\n";
	}

	if (!this->PointyBits.empty())
	{
		std::cout << "As for weapons, you find these: ";
		for (int i = 0; i < this->PointyBits.size(); i++)
		{
			std::cout << this->PointyBits[i]->getName();
			if (i != (this->PointyBits.size() - 1))
			{
				std::cout << ", ";
			}

		}
	}
	else
	{
		std::cout << "You find no weapons in this room.\n";
	}
}

void Room::addUseful(std::string title)
{
	this->usables.push_back(title); // take the name of the usable item and push to back of the vector
	//this->UseEvent.push_back(desc); // push the description to back
}

bool Room::UsefulEvent(std::string title)
{
	int i = 0;

	bool present = false; // is usable
	//std::cout << "in UsefulEvent() entering the loop\n\n";

	for (std::string s : this->usables)
	{
		//std::cout << i << std::endl;
		
		if (s == title) // if the item the player chose is usable here
		{
			//std::cout << this->UseEvent[i] << std::endl;
			//this->UseEvent.erase(this->UseEvent.begin() + (i-1));

			//if (i == 0)
			//{
			//	this->usables.erase(this->usables.begin()); // remove the item and the description
			//}
			//else if (i == 1)
			//{

			//}
			this->usables.erase(this->usables.begin() + i); // remove the item and the description
			
			
			present = true;
			break; 
		}
		i++; // write down the next index number and move on
	}

	if (!present)
	{
		std::cout << "nothing happened...\n";
	}
	return present; // yes the item is here
}

Person Room::getAlly(int index)
{
	return Person();
}

Person* Room::getAxis(int index)
{
	Person *s = this->Axis[index];
	return s;
}

void Room::addAlly()
{

}

void Room::addAxis(int p, std::string title)
{
	if (p == 0)
	{
		this->Axis.push_back(new HereticPawn(title));
		this->AxCount = this->Axis.size();
	}
	else if (p == 1)
	{
		this->Axis.push_back(new Czarownica());
		this->AxCount = this->Axis.size();
	}

}

void Room::addAxis(Baphomet_Boss *Boss)
{
	this->Axis.push_back(Boss);
	this->AxCount++;
}

void Room::Connection(Room * Nordwall, Room * Suedwall, Room * Westwall, Room * Ostwall)
{
	// Sometimes when I make things that involve real places I try to incorporate the local language into my variable name schemes
	// In this case I used the german words for the cardinal directions as the names for the room's neighbors and added wall (which translates literally) for the parameters
	this->Norden = Nordwall; // assign north room connection
	this->Sueden = Suedwall; // assign south room conection
	this->Westen = Westwall; // assign west room connection
	this->Osten = Ostwall; // assign east room connection
}

Room* Room::getNext(std::string compass)
{
	try
	{
		if (compass == "west") // does the player want to go west?
		{
			return this->Westen; // return the desired room
		}
		else if (compass == "east") // does the player want to go east?
		{
			return this->Osten; // return yadda yadda
		}
		else if (compass == "south") // south?
		{
			return this->Sueden;
		}
		else if (compass == "north") // north?
		{
			return this->Norden;
		}
		else
		{
			return this; // if the user input didn't even match the context, they're staying put.
		}
	}
	catch (int e) // if there isn't a room in the direction the player wants to go
	{
		return this; // you're here forever, kid!
	}
}

std::string Room::getDesc()
{
	return this->describe; // describe the room for us
}
