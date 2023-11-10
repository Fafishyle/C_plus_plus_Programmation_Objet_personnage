// TD4.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Personnage.h"

int main()
{
    Personnage joueur1("Bob", 100);
    Personnage joueur2("Ticci", 50);
    std::cout<<joueur1.stat()<<std::endl;
    std::cout<<joueur2.stat() << std::endl;
    std::cout << "Joueur 1 prend les points de vie de Joueur 2."<< std::endl;
    joueur1 << joueur2;
    std::cout << joueur1.stat() << std::endl;
    std::cout << "Joueur 2 prend 10 points de vie de plus." << std::endl;
    ++joueur2;
    std::cout << joueur2 << std::endl;





}
