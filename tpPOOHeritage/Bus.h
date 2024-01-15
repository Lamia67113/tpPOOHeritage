#pragma once
#include "Vehicule.h"
class Bus : public Vehicule
{
private:
	int place;
	int essieux;

public:
	void setPlace(int e);
	int getPlace();

	void setEssieux(int f);
	int getEssieux();

};

