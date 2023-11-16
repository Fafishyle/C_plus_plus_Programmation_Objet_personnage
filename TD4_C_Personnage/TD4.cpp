// TD4.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Personnage.h"
#include "Magicien.h"

int main()
{
    std::cout << "______Creation des 2 joueurs et affichage de leur statistique______ " << std::endl;
    Personnage joueur1("Bob", 100);
    Personnage joueur2("Ticci", 50);
    std::cout<<joueur1.stat()<<std::endl;
    std::cout<<joueur2.stat() << std::endl;
    std::cout << std::endl;


    std::cout << "______Joueur 1 prend les points de vie de Joueur 2.______"<< std::endl;
    joueur1 << joueur2;
    std::cout << joueur1.stat() << std::endl;
    std::cout << joueur2.stat() << std::endl;
    std::cout << std::endl;


    std::cout << "______Joueur 2 prend 10 points de vie de plus.______" << std::endl;
    ++joueur2;
    std::cout << "______Affichage en flux ostream : ______" << std::endl;
    std::cout << joueur1 << std::endl;
    std::cout << joueur2 << std::endl;
    std::cout << std::endl;


    /*
    std::cout << "Test soustraction de vie " << std::endl;
    std::cout << joueur2 -joueur1  << std::endl;
    std::cout << joueur1 << std::endl;
    std::cout << joueur2 << std::endl;
    */

    std::cout << "______Modifie la vie de Joueur1 en 500 et Joueur2 en -17 : ______" << std::endl;
    joueur1.changeVie(500);
    joueur2.changeVie(-17);
    std::cout << joueur1 << std::endl;
    std::cout << joueur2 << std::endl;
    std::cout << std::endl;

    std::cout << "______Creation de magicien et affichage statistique______ " << std::endl;
    Magicien mage1("Magic_Merlin", 5,100);
    std::cout << mage1.stat() << std::endl;
    std::cout << std::endl;




}
