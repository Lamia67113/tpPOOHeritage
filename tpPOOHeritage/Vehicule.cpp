#include "Vehicule.h"
using namespace std;
#include <iostream>

void Vehicule::parcourir(int distance)
{

}

void Vehicule::lire_caracteristique()
{
	cout << "La marque du vehicule est :" << getMarque() << endl;
	 cout <<"La puissance du vehicule est :"<< getPuissance();

}

string Vehicule::getMarque()
{
	return marque;
}

int Vehicule::getPuissance()
{
	return puissance;
}

float Vehicule::getKilometrage()
{
	return kilometrage;
}

void Vehicule::setMarque(string a)
{
	marque = a;
}

void Vehicule::setPuissance(int b)
{
	puissance = b;
}

void Vehicule::setKilometrage(int d)
{
	kilometrage = d;
}

