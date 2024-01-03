// TD4.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Personnage.h"
#include "Magicien.h"

std::ostream& operator<< (std::ostream& os, const Personnage& p)
{
    os << "Nom du joueur : " << p.nom << "	| Point de vie : " + std::to_string(p.vie);
    return os;
};

void simulation_combat_personnage(Personnage joueur1 , Personnage joueur2)
{
    srand(time(NULL));
    std::cout << "______ DEBUT :: Simulation de combat entre " << joueur1.nom << " et " << joueur2.nom << " ______ " << std::endl;
    for(int i = 0 ; i<10 ; i++)
    {
        /* valeur entre -50 et 50 */
        int vie_randomn1 = (rand() % 101) -50;
        int vie_randomn2 = (rand() % 101) - 50;
        joueur1.changeVie(joueur1.vie + vie_randomn1);
        joueur2.changeVie(joueur2.vie + vie_randomn2);
        std::cout << joueur1.stat() << std::endl;
        std::cout << joueur2.stat() << std::endl;
        std::cout << "  ____  ____  ____  ____" << std::endl;
    }
    
    int vie_gagnant = std::max(joueur1.vie, joueur2.vie);
    std::string nom_gagnant;
    if (joueur1.vie == vie_gagnant)
    {
        nom_gagnant = joueur1.nom;
    }
    else
    {
        nom_gagnant = joueur2.nom;
    }
    std::cout << "Gagnant   :   " << nom_gagnant << std::endl;
    std::cout << "______FIN :: Simulation de combat entre " << joueur1.nom << " et " << joueur2.nom << " ______ " << std::endl;
    std::cout << std::endl;
}


void simulation_combat_magicien_personnage(Magicien mage, Personnage joueur)
{
    srand(time(NULL));
    std::cout << "______ DEBUT :: Simulation de combat entre " << mage.nom << " et " << joueur.nom << " ______ " << std::endl;
    for (int i = 0; i < 10; i++)
    {
        /* valeur entre -50 et 50 */
        int vie_randomn1 = (rand() % 101) - 50;
        int vie_randomn2 = (rand() % 101) - 50;
        mage.changeVie(mage.vie + vie_randomn1);
        joueur.changeVie(joueur.vie + vie_randomn2);
        std::cout << mage.stat() << std::endl;
        std::cout << joueur.stat() << std::endl;
        std::cout << "  ____  ____  ____  ____" << std::endl;
    }

    int vie_gagnant = std::max(mage.vie, joueur.vie);
    std::string nom_gagnant;
    if (mage.vie == vie_gagnant)
    {
        nom_gagnant = mage.nom;
    }
    else
    {
        nom_gagnant = joueur.nom;
    }
    std::cout << "Gagnant   :   " << nom_gagnant << std::endl;
    std::cout << "______FIN :: Simulation de combat entre " << mage.nom << " et " << joueur.nom << " ______ " << std::endl;
    std::cout << std::endl;
}

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
    Magicien mage1("Merlin", 5,500);
    std::cout << mage1.stat() << std::endl;
    std::cout << std::endl;

    std::cout << "______Modification de vie du magicien______ " << std::endl;
    mage1.changeVie(40);
    std::cout << mage1.stat() << std::endl;
    std::cout << std::endl;

    joueur1.changeVie(1000);
    joueur2.changeVie(1000);
    simulation_combat_personnage(joueur1, joueur2);

    mage1.changeVie(1000);
    Magicien mage2("Mr_Propre", 1000, 500);
    simulation_combat_magicien_personnage(mage1, joueur1);


    
    





}
