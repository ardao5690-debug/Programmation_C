/* ==========================================================
 * SPRINT C2 : Les paramètres des fonctions et valeurs de retour
 * ========================================================== */

#include <stdio.h>

// --- Déclaration des fonctions ---
void afficherNombre(int nombre);
int carre(int nombre);
int cube(int nombre);
int addition(int a, int b);
int maximum(int a, int b);
float aireRectangle(float longueur, float largeur);
float calculTVA(float prixHT);
void tableMultiplication(int nombre);

int main(void) {
    printf("===================================\n");
    printf("   TESTS DES FONCTIONS (SPRINT C2) \n");
    printf("===================================\n\n");

    // Exercice 1 : Afficher un nombre
    printf("--- Exercice 1 : Affichage ---\n");
    afficherNombre(4); // Utilisation de 4

    // Exercice 2 & 3 : Carré et Cube
    printf("\n--- Exercice 2 & 3 : Carré et Cube ---\n");
    int n = 4;
    printf("Le carré de %d est : %d\n", n, carre(n));
    printf("Le cube de %d est : %d\n", n, cube(n));

    // Exercice 4 : Addition
    printf("\n--- Exercice 4 : Addition ---\n");
    int a = 4, b = 2; // Utilisation de 4 et 2
    printf("Addition de %d et %d = %d\n", a, b, addition(a, b));

    // Exercice 5 : Maximum
    printf("\n--- Exercice 5 : Maximum ---\n");
    printf("Le plus grand entre %d et %d est : %d\n", a, b, maximum(a, b));

    // Exercice 6 : Aire d'un rectangle
    printf("\n--- Exercice 6 : Aire d'un rectangle ---\n");
    float longueur = 4.0f, largeur = 2.0f;
    printf("Aire (longueur %.1f, largeur %.1f) = %.2f\n", longueur, largeur, aireRectangle(longueur, largeur));

    // Exercice 7 : TVA (avec ton montant fétiche 96432)
    printf("\n--- Exercice 7 : Calcul de TVA ---\n");
    float prixHT = 96432.0f;
    printf("Prix HT : %.2f EUR -> Prix TVAC (21%%) : %.2f EUR\n", prixHT, calculTVA(prixHT));

    // Exercice 8 : Table de multiplication
    printf("\n--- Exercice 8 : Table de multiplication de 4 ---\n");
    tableMultiplication(4);

    printf("===================================\n");
    return 0;
}

// --- Définition des fonctions ---

// Exercice 1
void afficherNombre(int nombre) {
    printf("La valeur reçue est : %d\n", nombre);
}

// Exercice 2
int carre(int nombre) {
    return nombre * nombre;
}

// Exercice 3
int cube(int nombre) {
    return nombre * nombre * nombre;
}

// Exercice 4
int addition(int a, int b) {
    return a + b;
}

// Exercice 5
int maximum(int a, int b) {
    if (a > b) return a;
    return b;
}

// Exercice 6
float aireRectangle(float longueur, float largeur) {
    return longueur * largeur;
}

// Exercice 7
float calculTVA(float prixHT) {
    return prixHT * 1.21f; // TVA à 21%
}

// Exercice 8
void tableMultiplication(int nombre) {
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", nombre, i, nombre * i);
    }
}