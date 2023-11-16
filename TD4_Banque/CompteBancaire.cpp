#include "CompteBancaire.h"
#include <iostream>

CompteBancaire::CompteBancaire(int identifiant, double argent) : id(identifiant), solde(argent) {};

void CompteBancaire::deposerArgent(double argent) {
	solde += argent;
};

bool CompteBancaire::retraitArgent(double argent) {
	solde -= argent;
	return (solde >= 0);
};

void CompteBancaire::consulteSolde()
{
	std::cout << "Solde actuel	:	"<< solde << std::endl;
};