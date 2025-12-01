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

// Méthode 1 : inverser dans le même tableau
void inverserTableauMeme(int tab[], int taille) {
    for (int i = 0; i < taille / 2; i++) {
        int temp = tab[i];
        tab[i] = tab[taille - 1 - i];
        tab[taille - 1 - i] = temp;
    }
}

// Méthode 2 : inverser dans un nouveau tableau
void inverserTableauNouveau(int tab[], int nouveau[], int taille) {
    for (int i = 0; i < taille; i++) {
        nouveau[i] = tab[taille - 1 - i];
    }
}