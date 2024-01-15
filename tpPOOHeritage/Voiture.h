#pragma once
#include "Vehicule.h"
class Voiture : public Vehicule
{
private:
	string type;
public:
	string lire_type();
	void setType(string c);
};

