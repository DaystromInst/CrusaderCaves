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
	
}

void KeyItem::Use(int roomno)
{
	/*for (int i = 0; i <= this->places.size(); i++)
	{*/
		try
		{
			/*if (roomno == places[i])
			{*/
				std::cout << description[roomno];
				//description.erase(description.begin() + (roomno - 1)); 
			//}
		}
		catch (int fob)
		{
			//continue;
		}
	//}
}

void KeyItem::addPlace(int f, std::string describe)
{
	//this->places.push_back(f);
	this->description.push_back(describe);
	//this->description[f] = describe;
}
