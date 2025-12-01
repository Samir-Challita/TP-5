#include <iostream>
using namespace std;

// Saisie des éléments du tableau
void saisirTableau(int tab[], int taille) {
    for (int i = 0; i < taille; i++) {
        cout << "Entrer l'entier " << i + 1 << " : ";
        cin >> tab[i];
    }
}

// Chercher si une valeur existe dans le tableau
bool existeDansTableau(int tab[], int taille, int valeur) {
    for (int i = 0; i < taille; i++) {
        if (tab[i] == valeur) {
            return true; // valeur trouvée
        }
    }
    return false; // valeur non trouvée
}

// Afficher un tableau
void afficherTableau(int tab[], int taille) {
    for (int i = 0; i < taille; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;
}