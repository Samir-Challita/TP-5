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

// Trier le tableau dans l'ordre croissant
void trierTableau(int tab[], int taille) {
    for (int i = 0; i < taille - 1; i++) {
        for (int j = 0; j < taille - 1 - i; j++) {
            if (tab[j] > tab[j + 1]) {
                // échanger tab[j] et tab[j+1]
                int temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
}