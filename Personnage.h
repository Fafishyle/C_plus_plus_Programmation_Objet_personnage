#pragma once
#include <string>

class Personnage
{
public:	
	std::string nom;
	int vie;

public:
	Personnage(std::string nom, int vie);
	~Personnage();	//destructeur

	std::string stat();
	void operator << (Personnage autre_joueur);
	void operator ++ ();
	int operator- (Personnage autre_joueur);
	friend std::ostream& operator << (std::ostream&, const Personnage&);
	void changeVie(int vie_nouvelle);

};




