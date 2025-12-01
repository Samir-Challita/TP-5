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

// Permutation circulaire à gauche
void permutationGauche(int tab[], int taille) {
    int premier = tab[0]; // sauvegarder le premier élément
    for (int i = 0; i < taille - 1; i++) {
        tab[i] = tab[i + 1]; // chaque élément prend la place du précédent
    }
    tab[taille - 1] = premier; // le premier élément va à la fin
}
