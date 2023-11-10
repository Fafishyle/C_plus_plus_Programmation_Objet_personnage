#pragma once
#include <string>

class Personnage
{
	std::string nom;
	int vie;

public:
	Personnage(std::string nom, int vie);
	std::string stat();
	void operator << (Personnage autre_joueur);
	void operator ++ ();
	friend std::ostream& operator<< (std::ostream&, const Personnage&);

};

std::ostream& operator<< (std::ostream& os, const Personnage& p)
{
	os << "Nom du joueur : " << p.nom << "	| Point de vie : " + std::to_string(p.vie);
	return os;
};


