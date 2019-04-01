#include "pch.h"
#include "HolsterList.h"
#include <cstddef>

HolsterList::HolsterList()
{

}

HolsterList::~HolsterList()
{
	/*for (int i = 0; i <= 24; i++)
	{
		this->pockets[i].~Node();
	}
	this->pockets->~Node();
	delete(this->pockets);
	this->First->~Node();
	delete(this->First);
	this->Last->~Node();
	delete(this->Last);*/
}


void HolsterList::PushBack(Ouch Floob)
{
	int i = 0;

	for (Node s : this->pockets)
	{
		i++;
	}
	if (i <= 24)
	{
		//this->pockets[i] = struct Node(i, Floob, pockets[i - 1], 0);
	}
	/*for (int i = 0; i <= 24; i++)
	{
		if (this->pockets[i] == nullptr)
		{
			this->pockets[i] = Node(i, Floob, pockets[i-1], NULL);
			break;
		}
	}*/
}


int HolsterList::getSize()
{
	int i = 0;
	for (i; i <= 24; i++) // run through pockets
	{
		//if (this->pockets[i] == nullptr) // reached an unfilled node slot
		//{
		//	i--; // size is one less
		//	break; // done in loop
		//}
	}
	return i;
}


Node* HolsterList::Premiere()
{
	return this->First;
}


Node* HolsterList::Finale()
{
	return this->Last;
}


//void HolsterList::remove(int i)
//{
//	//this->pockets[i - 1].setNext(this->pockets[i + 1]); // bridge the gap to the new neighbour
//	//this->pockets[i + 1].setHind(this->pockets[i - 1]); // bridge the gap again
//	Node *Now = GetPart(i);
//	Node *B4 = GetPart(i - 1);
//	Node *After = GetPart(i + 1); // bring in the nodes
//	Node Replace; // storage for sorting op
//	B4->SetNext(After);
//	After->SetHind(B4);
//	Now->SetHind(nullptr); // nullify connections
//	Now->SetNext(nullptr);
//
//	// remove pockets[i] and fill the gap
//	for (int f = i; f <= 24; f++)
//	{
//		Now = GetPart(f); // bring in the node
//		Now->~Node(); // trash it
//		Replace = GetPart(f + 1); // bring in the replacement
//		this->pockets[f] = Replace; // stuff it
//	}
//	Now->~Node();
//	B4->~Node();
//	After->~Node();
//	Replace.~Node(); // clean up
//}
//
//
//Node* HolsterList::GetPart(int i)
//{
//	return pockets[i];
//}
