#pragma once
#include "Vehicule.h"
class Voiture : public Vehicule
{
private:
	string type;
public:
	void lire_caracteristique2();
	void setType(string c);
	string getType();
};

