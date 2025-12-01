#include <iostream>
#include "Functions.h"
using namespace std;

int main() {
    const int TAILLE = 10;
    int tableau[TAILLE];

    // Saisie
    saisirTableau(tableau, TAILLE);

    cout << "\nTableau original : ";
    afficherTableau(tableau, TAILLE);

    // Tri
    trierTableau(tableau, TAILLE);

    cout << "Tableau trié (ordre croissant) : ";
    afficherTableau(tableau, TAILLE);

    return 0;
}