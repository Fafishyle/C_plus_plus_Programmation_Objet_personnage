#pragma once
class CompteBancaire
{
protected:
	int id;
	double solde;
public:
	CompteBancaire(int identifiant, double argent);
	void deposerArgent(double argent);
	bool retraitArgent(double argent);
	void consulteSolde();
};



