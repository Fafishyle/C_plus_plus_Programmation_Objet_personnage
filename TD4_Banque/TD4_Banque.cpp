// TD4_Banque.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
//permet de pas redeclarer plusieurs fois les includes
#pragma once
#include <iostream>
#include "CompteBancaire.h"
#include "LivretA.h"



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

    std::cout << "____Creation de Livret A____" << std::endl;
    LivretA livretA(1,-500,5000);
    livretA.consulteSolde();
    std::cout << std::endl;

    std::cout << "____ Deposer argent dans livret A ____" << std::endl;
    livretA.deposerArgent(10000);
    livretA.consulteSolde();
    std::cout << std::endl;
    



}