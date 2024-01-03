//permet de pas redeclarer plusieurs fois les includes
#pragma once
#include "CompteBancaire.h"

class LivretA : public CompteBancaire
{
	unsigned int plafond;
public:
	LivretA(int identifiant, double argent, unsigned int limite);
	void consulteSolde();
	void deposerArgent(double argent);
};



