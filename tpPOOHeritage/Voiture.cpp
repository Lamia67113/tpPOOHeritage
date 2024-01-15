#include "Voiture.h"
#include <iostream>
using namespace std;

void Voiture::lire_caracteristique2()
{
	cout << "La marque du vehicule est :" << getMarque() << endl;
	cout << "La puissance du vehicule est :" << getPuissance()<< endl;
	cout << "Le type de la voiture est " << getType() << endl;
	
}

void Voiture::setType(string c)
{
	type = c;
}

string Voiture::getType()
{
	return type;
}
