#pragma once
#include <iostream>
#include "Personnage.h"

class Magicien : public Personnage
{
public:
	Magicien(std::string nom, int vie, int mana);
	/* déclarer une fonction membre const:
	 * indiquant au compilateur qu'elle ne modifie pas l'état de l'objet
	 */
	int get_mana() const;
	std::string stat();
	void changeVie(int vie_nouvelle);

protected:
	int mana;
};

/* Déclaration : classe A hérite classe B. B->A
 * 
 * class A : public B{
 *		autres attributs que B
 *		fonctions de A 
 *			Autre fonction que B
 *			Surcharge
 *			Redéfinition
 * }; 
 */
