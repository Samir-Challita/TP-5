#include <iostream>
#include "Functions.h"
using namespace std;

int main() {
    const int N = 50;
    int tableau[N + 1]; // +1 pour pouvoir insérer
    int taille = N;

    // Saisie
    saisirTableau(tableau, taille);

    cout << "\nTableau avant insertion : ";
    afficherTableau(tableau, taille);

    int x, k;
    cout << "Entrer la valeur à insérer : ";
    cin >> x;
    cout << "Entrer la position k (0 à " << taille << ") : ";
    cin >> k;

    insererValeur(tableau, taille, x, k);

    cout << "Tableau après insertion : ";
    afficherTableau(tableau, taille);

    return 0;
}