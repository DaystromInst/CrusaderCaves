#pragma once
#include <list>
#include <string>
#include <vector>

class Items
{
public:
	Items(std::string title, bool renew);
	Items();
	~Items();

	virtual void Use();
	virtual int getNum();
	virtual std::string getName() = 0;
	virtual bool usable() = 0;
	virtual void setComs(std::string com1, std::string com2, std::string com3, std::string com4);

protected:
	std::string name;
	bool reusable;
	std::list<std::string> commandyBois;
};

