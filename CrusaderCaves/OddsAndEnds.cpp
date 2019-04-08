#include "pch.h"
#include "OddsAndEnds.h"


OddsAndEnds::OddsAndEnds()
{
}


OddsAndEnds::~OddsAndEnds()
{
	//for (KeyItem *s : this->wares)
	//{
	//	s->~KeyItem();
	//	this->wares.pop_front();
	//}
	//this->wares.~list();
}

void OddsAndEnds::Add(std::string name, bool renew)
{
	this->wares.push_back(new KeyItem(name, renew));
}

void OddsAndEnds::Lose(std::string title)
{
	for (KeyItem *s : this->wares)
	{
		if (title == s->getName())
		{
			this->wares.remove(s);
			break;
		}
	}
}

void OddsAndEnds::ContextAdd(int i, std::string title, std::string labels)
{
	for (KeyItem *s : this->wares)
	{
		if (s->getName() == title)
		{
			s->addPlace(i, labels);
			std::cout << "success!\n"; // debug response
		}
	}
}

void OddsAndEnds::UseThing(std::string title, int num)
{
	for (KeyItem *s : this->wares)
	{
		if (title == s->getName())
		{
			s->Use(num);
			if (!s->usable()) // is it a one shot item?
			{
				Lose(title); // yeah, pitch it
			}
			break;
		}
	}
}
