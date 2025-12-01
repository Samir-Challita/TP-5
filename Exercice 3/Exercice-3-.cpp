#include <iostream>
#include "Functions.h"
using namespace std;

int main() {
    const int TAILLE = 10;
    int tableau[TAILLE];
    int somme[TAILLE];
    int produit[TAILLE];

    // Saisie
    saisirTableau(tableau, TAILLE);

    // Calculs
    calculSomme(tableau, TAILLE, somme);
    calculProduit(tableau, TAILLE, produit);

    // Affichage
    cout << "\nTableau saisi : ";
    afficherTableau(tableau, TAILLE);

    cout << "Somme cumulée : ";
    afficherTableau(somme, TAILLE);

    cout << "Produit cumulée : ";
    afficherTableau(produit, TAILLE);

    return 0;
}