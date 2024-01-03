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

	std::string stat() const;
	void operator << (Personnage autre_joueur);
	void operator ++ ();
	int operator- (Personnage autre_joueur);
	//friend std::ostream& operator << (std::ostream&, const Personnage&);
	// MOT CLE : virtual permet, en cas de polymorphe (par pointeur ou reference), permet d'adapter l'objet pointé 
	virtual void changeVie(int vie_nouvelle);

};




