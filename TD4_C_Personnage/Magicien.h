#pragma once
#include <iostream>
#include "Personnage.h"

class Magicien : public Personnage
{
public:
	Magicien(std::string nom, int vie, int mana);
	int get_mana();
	std::string stat();

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
