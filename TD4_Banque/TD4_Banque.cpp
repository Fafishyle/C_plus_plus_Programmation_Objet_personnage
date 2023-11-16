// TD4_Banque.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "CompteBancaire.h"



int main()
{
    std::cout<<"____Creation du compte____"<< std::endl;
    CompteBancaire user1(1, 1000);
    std::cout << "____Consultation du compte____" << std::endl;
    user1.consulteSolde();
    std::cout << std::endl;

    std::cout << "____Depot d argent de 500____" << std::endl;
    user1.deposerArgent(500);
    user1.consulteSolde();
    std::cout << std::endl;

    std::cout << "____Retrait d argent de 700____" << std::endl;
    user1.retraitArgent(700);
    user1.consulteSolde();
    std::cout << std::endl;

    std::cout << "____Retrait d argent de 1000____" << std::endl;
    user1.retraitArgent(1000);
    user1.consulteSolde();
    std::cout << std::endl;

}