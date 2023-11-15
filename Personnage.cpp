#include "Personnage.h"
#include <iostream>

Personnage::Personnage(std::string nomPerso, int viePerso) : nom(nomPerso), vie(viePerso) {};

Personnage::~Personnage() 
{
	std::cout << "____Joueur " << nom << " detruit.____"<<std::endl;
};

std::string Personnage::stat() {
	return "Nom du joueur : " + nom + "	| Point de vie : " + std::to_string(vie);
};

void Personnage::operator<< (Personnage autre_joueur)
{
	vie += autre_joueur.vie;
};
void Personnage::operator ++ ()
{
	vie +=10;
};

int Personnage::operator - (Personnage autre_joueur)
{
	return vie - autre_joueur.vie;
};

//setteur
void Personnage::changeVie(int vie_nouvelle)
{
	if (vie_nouvelle < 0)
	{
		//wcout pour les avertissements
		std::wcout << "__!__Personnage::changeVie > impossible de modifier la valeur de vie car negative.__!__" << std::endl;
	}
	else
	{
		vie = vie_nouvelle;
	}
};

std::ostream& operator<< (std::ostream& os, const Personnage& p)
{
	os << "Nom du joueur : " << p.nom << "	| Point de vie : " + std::to_string(p.vie);
	return os;
};


