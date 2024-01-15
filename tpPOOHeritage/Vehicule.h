#pragma once
#include <string>
using namespace std;
class Vehicule
{
private:
	string marque;
	int puissance;
	float kilometrage = 0;

public:
	void parcourir(int distance);
	void lire_caracteristique();
	string getMarque();
	int getPuissance();
	float getKilometrage();
	void setMarque(string a);
    void setPuissance(int b);
	void setKilometrage(int d);


};

