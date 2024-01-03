#pragma once
#include <iostream>
#include "LivretA.h"
#include "CompteBancaire.h"

LivretA::LivretA(int identifiant, double argent, unsigned int limite) : CompteBancaire( identifiant, argent), plafond(limite){};

void LivretA::consulteSolde() {
	std::cout << "Livret A	:	"<<std::endl;
	CompteBancaire::consulteSolde();
	std::cout<< "	| Plafond	:	"<<plafond;
};

void LivretA::deposerArgent(double argent)
{
	CompteBancaire::deposerArgent(argent);
	if (solde > plafond)
	{
		std::cout << "---Vous avez dépassé votre plafond!----";
		solde = plafond;
	}
};