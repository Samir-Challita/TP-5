#include <iostream>
using namespace std;

// Saisie des entiers dans un tableau
void saisirTableau(int tab[], int taille) {
    for (int i = 0; i < taille; i++) {
        cout << "Entrer l'entier " << i + 1 << " : ";
        cin >> tab[i];
    }
}

// Compter les éléments non-nuls
int compterNonNuls(int tab[], int taille) {
    int count = 0;
    for (int i = 0; i < taille; i++) {
        if (tab[i] != 0)
            count++;
    }
    return count;
}

// Trouver le maximum et sa position
void trouverMax(int tab[], int taille, int& max, int& pos) {
    max = tab[0];
    pos = 0;
    for (int i = 1; i < taille; i++) {
        if (tab[i] > max) {
            max = tab[i];
            pos = i;
        }
    }
}

// Trouver le minimum et sa position
void trouverMin(int tab[], int taille, int& min, int& pos) {
    min = tab[0];
    pos = 0;
    for (int i = 1; i < taille; i++) {
        if (tab[i] < min) {
            min = tab[i];
            pos = i;
        }
    }
}
