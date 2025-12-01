#include <iostream>
using namespace std;

// Saisie des éléments du tableau
void saisirTableau(int tab[], int taille) {
    for (int i = 0; i < taille; i++) {
        cout << "Entrer l'entier " << i + 1 << " : ";
        cin >> tab[i];
    }
}

// Afficher un tableau
void afficherTableau(int tab[], int taille) {
    for (int i = 0; i < taille; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;
}

// Insérer une valeur x à la k-ème position
void insererValeur(int tab[], int& taille, int x, int k) {
    // Décaler les éléments à droite
    for (int i = taille; i > k; i--) {
        tab[i] = tab[i - 1];
    }
    tab[k] = x; // insérer x à la position k
    taille++;   // taille du tableau augmente de 1
}