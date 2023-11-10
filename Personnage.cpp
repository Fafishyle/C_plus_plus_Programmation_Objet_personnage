#include "Personnage.h"
#include <iostream>

Personnage::Personnage(std::string nomPerso, int viePerso) : nom(nomPerso), vie(viePerso) {};
std::string Personnage::stat() {
	return "Nom du joueur : " + nom + "	| Point de vie : " + std::to_string(vie);
};
void Personnage::operator<< (Personnage autre_joueur)
{
	vie += autre_joueur.vie;
};
void Personnage::operator++()
{
	vie +=10;
};




