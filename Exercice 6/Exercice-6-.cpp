#include <iostream>
#include "Functions.h"
using namespace std;

int main() {
    const int TAILLE = 10;
    int tableau[TAILLE];
    int tableauInverse[TAILLE];

    // Saisie
    saisirTableau(tableau, TAILLE);

    cout << "\nTableau original : ";
    afficherTableau(tableau, TAILLE);

    // Méthode 1 : inverser dans le même tableau
    inverserTableauMeme(tableau, TAILLE);
    cout << "Tableau inversé (même tableau) : ";
    afficherTableau(tableau, TAILLE);

    // Pour tester la méthode 2, on récupère le tableau original
    saisirTableau(tableau, TAILLE); // ou garder le tableau original

    // Méthode 2 : inverser dans un nouveau tableau
    inverserTableauNouveau(tableau, tableauInverse, TAILLE);
    cout << "Tableau inversé (nouveau tableau) : ";
    afficherTableau(tableauInverse, TAILLE);

    return 0;
}