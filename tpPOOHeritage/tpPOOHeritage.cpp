// tpPOOHeritage.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Vehicule.h"
#include "Voiture.h"
using namespace std;

int main()
{
	Vehicule Vehicule1;
	Voiture Voiture1;
	string a,c;
	int b;

	cout << "Veuillez indiquez la marque du vehicule :" << endl;
	cin >> a;
	Vehicule1.setMarque(a);

	cout << "Indiquez la puissance du vehicule" << endl;
	cin >> b;
	Vehicule1.setPuissance(b);

	Vehicule1.lire_caracteristique(); 

	cout << endl;

	cout << "Veuillez indiquez la marque du vehicule :" << endl;
	cin >> a;
	Voiture1.setMarque(a);

	cout << "Indiquez la puissance du vehicule" << endl;
	cin >> b;
	Voiture1.setPuissance(b);
	
	
	cout << "Quel est le type de la voiture ?" << endl;
	cin >> c;
	Voiture1.setType(c);

	

	Voiture1.lire_type();

}


