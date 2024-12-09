#include <stdlib.h>
#include <iostream>
using namespace std;
#include <cstring>
#include "schedulable.h"

Schedulable::Schedulable()
{
	setID(0);
}

Schedulable::Schedulable(int ID)
{
	setID(ID);
}

Schedulable::Schedulable(const schedulable& cop)
{
    setID(cop.getID());
}

void Schedulable::setId(int ID)
{
	if(ID<=0) 
		return;
	this->id = ID;
}

int Schedulable::getId()
{
	return this->id
}

Schedulable::~Schedulable() {}