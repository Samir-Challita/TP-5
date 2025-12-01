#include <iostream>
using namespace std;

// Saisie des éléments du tableau
void saisirTableau(int tab[], int taille) {
    for (int i = 0; i < taille; i++) {
        cout << "Entrer l'entier " << i + 1 << " : ";
        cin >> tab[i];
    }
}

// Calculer les sommes cumulées
void calculSomme(int tab[], int taille, int somme[]) {
    somme[0] = tab[0];
    for (int i = 1; i < taille; i++) {
        somme[i] = somme[i - 1] + tab[i];
    }
}

// Calculer les produits cumulés
void calculProduit(int tab[], int taille, int produit[]) {
    produit[0] = tab[0];
    for (int i = 1; i < taille; i++) {
        produit[i] = produit[i - 1] * tab[i];
    }
}

// Afficher un tableau
void afficherTableau(int tab[], int taille) {
    for (int i = 0; i < taille; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;
}