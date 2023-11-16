#include "Personnage.h"
#include "Magicien.h"

Magicien::Magicien(std::string nomMage, int vieMage, int manaMage) : Personnage(nomMage, vieMage) , mana(manaMage){};
/* _________Fonctionnement du constructeur______________
 * 
 * Le constructeur est appell� lors de l'instanciation de la classe
 * Si on avait d�clar� un constructeur sans param�tre, ce sera lui le constructeur par d�faut  
 *		ex: Magicien mage; 
 *			ou m�me Magicien mage();
 * Ici, on lui a mis 3 param�tres, donc voil� comment l'appeller:
 *		ex: Magicien mage(bob,100,100)
 * Comme on peut le voir dans l'impl�mentation, on a appell� une suite de constructeurs par d�faut
 *		ex: Personnage(nomMage, vieMage)
 *				Il appelle le constructeur qu'on a impl�ment� pr�c�dement de son parent Personnage.
 *		ex: mana(manaMage)
 *				Il appelle un constructeur par d�faut de l'attribut mana, ce qui fait que mana prend la valeur de manaMage, qui en param�tre. 
 */

int Magicien::get_mana() {
	return mana;
};

std::string Magicien::stat() {
	std::string statistique_perso = Personnage::stat();
	return statistique_perso + "	| Mana : " + std::to_string(mana);
};

