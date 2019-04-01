#include "pch.h"
#include "Items.h"


Items::Items(std::string title, bool renew)
{
	this->name = title;
	this->reusable = renew;
}

Items::Items()
{

}

Items::~Items()
{

}

void Items::Use()
{
	if (this->reusable)
	{
		this->reusable = false;
	}
}

int Items::getNum()
{
	return 0;
}

std::string Items::getName()
{
	return this->name;
}

bool Items::usable()
{
	return this->reusable;
}

void Items::setComs(std::string com1, std::string com2, std::string com3, std::string com4) // don't forget to call this in a try-catch if you pass less than four coms
{
	this->commandyBois.push_back(com1);
	this->commandyBois.push_back(com2);
	this->commandyBois.push_back(com3);
	this->commandyBois.push_back(com4);
}
