#pragma once
#include "Vehicule.h"
class Voiture : private Vehicule
{
private:
	string type;
public:
	string lire_type();
	void setType(string c);
};

