#include "CompteBancaire.h"
#include <iostream>


//______________________________POUR L AFFICHAGE DU TERMINAL EN COULEUR__________________________________________________________

#include <string>
#include <windows.h>

class setcolor
{
private:
    WORD m_attr;
public:
    explicit setcolor(WORD attr) : m_attr(attr) {}

    template<typename _CharT, typename _Traits>
    std::basic_ostream<_CharT, _Traits>& Apply(std::basic_ostream<_CharT, _Traits>& stm)
    {
        stm.flush();
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), m_attr);
        return stm;
    }
};

template<typename _CharT, typename _Traits>
std::basic_ostream<_CharT, _Traits>& operator<<(std::basic_ostream<_CharT, _Traits>& stm, setcolor sc)
{
    return sc.Apply(stm);
}


WORD GetTextAttribute()
{
    auto info = CONSOLE_SCREEN_BUFFER_INFO();
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
    return info.wAttributes;
}

//________________________________POUR L AFFICHAGE DU TERMINAL EN COULEUR________________________________________________________


CompteBancaire::CompteBancaire(int identifiant, double argent) : id(identifiant), solde(argent) {};

void CompteBancaire::deposerArgent(double argent) {
	solde += argent;
};

bool CompteBancaire::retraitArgent(double argent) {
	solde -= argent;
	return (solde >= 0);
};

void CompteBancaire::consulteSolde()
{
    //Couleur blanche console par defaut
    int Couleur_affichage = 0x07;

    //Si le compte est negatif
	if (!retraitArgent(0))
	{
        //Affiche en rouge
        Couleur_affichage = 0x04; 
	}
	std::cout << "Solde actuel	:	"<< setcolor(Couleur_affichage)<< solde <<setcolor(0x07)<< std::endl;
};