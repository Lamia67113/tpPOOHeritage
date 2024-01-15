#include "Voiture.h"
#include <iostream>
using namespace std;

string Voiture::lire_type()
{
	cout << "La marque du vehicule est :" << getMarque() << endl;
	cout << "La puissance du vehicule est :" << getPuissance();
	cout << "Le type de la voiture est " << lire_type() << endl;
	

	return type;
}

void Voiture::setType(string c)
{
	type = c;
}
