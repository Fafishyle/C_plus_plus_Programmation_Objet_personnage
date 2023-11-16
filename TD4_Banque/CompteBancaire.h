#pragma once
class CompteBancaire
{
	int id;
	double solde;
public:
	CompteBancaire(int identifiant, double argent);
	void deposerArgent(double argent);
	bool retraitArgent(double argent);
	void consulteSolde();
};



