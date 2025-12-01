#include <iostream>
#include "Functions.h"
using namespace std;

int main() {
    const int TAILLE = 10;
    int tableau[TAILLE];

    // Saisie
    saisirTableau(tableau, TAILLE);

    cout << "\nTableau saisi : ";
    afficherTableau(tableau, TAILLE);

    int N;
    cout << "Entrer la valeur à chercher : ";
    cin >> N;

    // Chercher la valeur
    if (existeDansTableau(tableau, TAILLE, N)) {
        cout << "La valeur " << N << " existe dans le tableau." << endl;
    }
    else {
        cout << "La valeur " << N << " n'existe pas dans le tableau." << endl;
    }

    return 0;
}