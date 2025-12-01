#include <iostream>
#include "Function.h"
using namespace std;

int main() {
    const int TAILLE = 10;
    int tableau[TAILLE];

    // Appel des fonctions
    saisirTableau(tableau, TAILLE);

    int nonNuls = compterNonNuls(tableau, TAILLE);
    cout << "\nNombre d'éléments non-nuls : " << nonNuls << endl;

    int max, posMax;
    trouverMax(tableau, TAILLE, max, posMax);
    cout << "Maximum : " << max << " à la position " << posMax << endl;

    int min, posMin;
    trouverMin(tableau, TAILLE, min, posMin);
    cout << "Minimum : " << min << " à la position " << posMin << endl;

    return 0;
}
