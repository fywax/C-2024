#include <stdlib.h>
#include <iostream>
using namespace std;
#include <cstring>
#include "Professor.h"

Professor::Professor()
{
	setId(0);
	setLastName("");
	setFirstName("");
}

Professor::Professor(int id, const string& nom, const string& prenom)
{
	setId(id);
	setFirstName(prenom);
	setLastName(nom);
}

Professor::Professor(const Professor& cop)
{
    setId(cop.getId());
    setLastName(cop.getLastName());
    setFirstName(cop.getFirstName());
}



Professor& Professor::operator=(const Professor& egal)
{
    if (this != &egal) {  // Vérification de l'auto-affectation
        setId(egal.getId());
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



void Professor::setLastName(const string& nom)
{
	this->lastName = nom;
}

void Professor::setFirstName(const string& prenom)
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
    return lastName + " " + firstName;
}

string Professor::tuple() const
{
    return to_string(getId()) + ";" + lastName + ";" + firstName;
}



Professor::~Professor() {}