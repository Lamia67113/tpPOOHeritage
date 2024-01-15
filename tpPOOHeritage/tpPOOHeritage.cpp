// tpPOOHeritage.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Vehicule.h"
#include "Voiture.h"
#include "Bus.h"
using namespace std;

int main()
{
	Vehicule Vehicule1;
	Voiture Voiture1,Voiture2;
	Bus Bus1;
	string a,c;
	int b,d,e,f;

	cout << "Veuillez indiquez la marque du vehicule :" << endl;
	cin >> a;
	Vehicule1.setMarque(a);

	cout << "Indiquez la puissance du vehicule" << endl;
	cin >> b;
	Vehicule1.setPuissance(b);

	cout << "Combien de kilometrage avez-vous parcouru ?" << endl;
	cin >> d;
	Vehicule1.setKilometrage(d);


	Vehicule1.lire_caracteristique(); 

	cout << endl;

	cout << "Veuillez indiquez la marque du vehicule :" << endl;
	cin >> a;
	Voiture1.setMarque(a);

	cout << "Indiquez la puissance du vehicule" << endl;
	cin >> b;
	Voiture1.setPuissance(b);

	cout << "Combien de kilometrage avez-vous parcouru ?" << endl;
	cin >> d;
	Voiture1.setKilometrage(d);
	

	
	cout << "Quel est le type de la voiture ?" << endl;
	cin >> c;
	Voiture1.setType(c);


	Voiture1.lire_caracteristique2();


	cout << endl;

	cout << "Veuillez indiquez la marque du vehicule :" << endl;
	cin >> a;
	Voiture2.setMarque(a);

	cout << "Indiquez la puissance du vehicule" << endl;
	cin >> b;
	Voiture2.setPuissance(b);

	cout << "Combien de kilometrage avez-vous parcouru ?" << endl;
	cin >> d;
	Voiture2.setKilometrage(d);

	cout << "Quel est le type de la voiture ?" << endl;
	cin >> c;
	Voiture2.setType(c);

	Voiture2.lire_caracteristique2();


	cout << "Nombre de place du bus ?" << endl;
	cin >> e;
	Bus1.setPlace(e);

	cout << "Nombre d'essieux :" << endl;
	cin >> f;
	Bus1.setEssieux(f);

	cout << "Le bus contient :" << Bus1.getPlace() << "place"<< endl;
	cout << "Le bus contient :" << Bus1.getEssieux() << "essieux" << endl;


}


