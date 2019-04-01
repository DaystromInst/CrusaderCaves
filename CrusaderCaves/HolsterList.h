#pragma once
#include "Ouch.h"
#include <cstddef>

struct Node
{
public:

	Node(int i, Ouch thing, Node* brother1, Node* brother2);
	Node();
	~Node();

	void SetHind(Node* brother); // set last
	void SetNext(Node* brother); // duh
	void undoNxt();
	void undoHind();
	Node* getHind(); // get last
	Node* getNext(); // duh
	Ouch GetThing();

protected:
	int Position;
	Node* next;
	Node* prev;
	Ouch Thing; // object to hold in node
};


class HolsterList
{
public:
	HolsterList();
	~HolsterList();

	void PushBack(Ouch Floob); // tack an object onto the back of pockets
	int getSize(); // duh
	Node* Premiere(); // get first node
	Node* Finale(); // get last node
	//void remove(int i); // remove a node with the position i
	//Node* GetPart(int i); // get a node object with the position i


protected:
	int size;
	Node pockets[25];
	Node* First;
	Node* Last;
};


inline Node::Node(int i, Ouch thing, Node* brother1, Node* brother2)
{
	this->Position = i;
	this->Thing = thing;
	if (i > 0)
	{
		this->SetHind(brother1);
	}
	else if (i == 0)
	{
		this->SetHind(nullptr);
	}
	if (i < 24)
	{
		this->SetNext(brother2);
	}
	else if (i == 24)
	{
		this->SetNext(nullptr);
	}
}


inline Node::Node()
{

}


inline Node::~Node()
{
	//delete(this->Thing);
	//delete(this->next);
	//delete(this->prev);
}


inline void Node::SetHind(Node* brother)
{
	this->prev = brother;
	brother->~Node();
}


inline void Node::SetNext(Node* brother)
{
	this->next = brother;
	brother->~Node();
}

inline void Node::undoNxt()
{
}


inline void Node::undoHind()
{
}


inline Node* Node::getHind()
{
	return this->prev;
}


inline Node* Node::getNext()
{
	return this->next;
}


inline Ouch Node::GetThing()
{
	return this->Thing;
}

