// TD3_Banque.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "CompteBancaire.h"

CompteBancaire::CompteBancaire(int identifiant, double argent) : id(identifiant), solde(argent){};

void CompteBancaire::deposerArgent(double argent) {
	solde += argent;
};

bool CompteBancaire::retraitArgent(double argent) {
	if(solde>0)

	return
};