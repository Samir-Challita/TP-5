#include <iostream>
#include "Functions.h"
using namespace std;

int main() {
    const int N = 5; // ou N = 10 selon ton exercice
    int tableau[N];

    saisirTableau(tableau, N);

    cout << "\nTableau avant permutation : ";
    afficherTableau(tableau, N);

    permutationGauche(tableau, N);

    cout << "Tableau après permutation circulaire à gauche : ";
    afficherTableau(tableau, N);

    return 0;
}
