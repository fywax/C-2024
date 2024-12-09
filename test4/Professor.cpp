#include <stdlib.h>
#include <iostream>
using namespace std;
#include <cstring>
#include "Professor.h"

Professor::Professor()
{
	setID(0);
	setLastName("");
	setFirstName("");
}

Professor::Professor(int id, string nom, string prenom)
{
	setID(id);
	setFirstName(prenom);
	setLastName(nom);
}

Professor::Professor(const Professor& cop)
{
    setID(cop.getID());
    setLastName(cop.getLastName());
    setFirstName(cop.getFirstName());
}



Professor& Professor::operator=(const Professor& egal)
{
    if (this != &egal) {  // Vérification de l'auto-affectation
        setID(egal.getID());
        setLastName(egal.getLastName());
        setFirstName(egal.getFirstName());
    }
    return *this;
}

ostream& operator<<(ostream& os, const Professor& p)
{
    os << p.toString();
    return os;
}



void Professor::setLastName(string nom)
{
	this->lastName = nom;
}

void Professor::setFirstName(string prenom)
{
	this->firstName = prenom;
}



string Professor::getLastName() const
{
	return this->lastName;
}

string Professor::getFirstName() const
{
	return this->firstName;
}


string Professor::toString() const
{
    return "Professor: " + firstName + " " + lastName;
}

string Professor::tuple() const
{
    return "ID: " + to_string(getID()) + ", Name: " + firstName + " " + lastName;
}



Professor::~Professor() {}