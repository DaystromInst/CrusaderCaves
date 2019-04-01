#include "pch.h"
#include "KeyItem.h"
#include <iostream>


KeyItem::KeyItem(std::string title, bool reuse)
{
	//Items(title, reuse);
	this->name = title;
	this->reusable = reuse;
}

KeyItem::KeyItem()
{

}

KeyItem::~KeyItem()
{
	/*for (int i = 0; i < this->places.size(); i=+0)
	{
		this->places.pop_back();
	}
	for (int i = 0; i < this->description.size(); i = +0)
	{
		this->description.pop_back();
	}

	this->places.~vector();
	this->description.~vector();
	this->name.~basic_string();*/
}

void KeyItem::Use(int roomno)
{
	for (int i = 0; i <= this->places.size(); i++)
	{
		try
		{
			if (roomno == places[i])
			{
				std::cout << description[i];
				places.erase(places.begin() + (i - 1));
				description.erase(description.begin() + (i - 1));
				break;
			}
		}
		catch (int fob)
		{
			continue;
		}
	}
	std::cout << "nothing happens...\n";
}

void KeyItem::addPlace(int f, std::string describe)
{
	this->places.push_back(f);
	this->description.push_back(describe);
}
