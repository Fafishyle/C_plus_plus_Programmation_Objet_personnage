#pragma once
#include <iostream>
#include "Personnage.h"

class Magicien : public Personnage
{
public:
	Magicien(std::string nom, int vie, int mana);
	/* d�clarer une fonction membre const:
	 * indiquant au compilateur qu'elle ne modifie pas l'�tat de l'objet
	 */
	int get_mana() const;
	std::string stat();
	void changeVie(int vie_nouvelle);

protected:
	int mana;
};

/* D�claration : classe A h�rite classe B. B->A
 * 
 * class A : public B{
 *		autres attributs que B
 *		fonctions de A 
 *			Autre fonction que B
 *			Surcharge
 *			Red�finition
 * }; 
 */
