#include "Personnage.h"
#include "Magicien.h"

Magicien::Magicien(std::string nomMage, int vieMage, int manaMage) : Personnage(nomMage, vieMage) , mana(manaMage){};
/* _________Fonctionnement du constructeur______________
 * 
 * Le constructeur est appellé lors de l'instanciation de la classe
 * Si on avait déclaré un constructeur sans paramètre, ce sera lui le constructeur par défaut  
 *		ex: Magicien mage; 
 *			ou même Magicien mage();
 * Ici, on lui a mis 3 paramètres, donc voilà comment l'appeller:
 *		ex: Magicien mage(bob,100,100)
 * Comme on peut le voir dans l'implémentation, on a appellé une suite de constructeurs par défaut
 *		ex: Personnage(nomMage, vieMage)
 *				Il appelle le constructeur qu'on a implémenté précédement de son parent Personnage.
 *		ex: mana(manaMage)
 *				Il appelle un constructeur par défaut de l'attribut mana, ce qui fait que mana prend la valeur de manaMage, qui en paramètre. 
 */

int Magicien::get_mana() {
	return mana;
};

std::string Magicien::stat() {
	std::string statistique_perso = Personnage::stat();
	return statistique_perso + "	| Mana : " + std::to_string(mana);
};

