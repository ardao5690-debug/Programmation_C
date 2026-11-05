#include <stdio.h>

int main(void) {
    // ==========================================
    // Activité 1 & Exercice 1 : Présentation / Âge
    // ==========================================
    int age = 17;
    printf("--- Activité 1 & Exercice 1 ---\n");
    printf("Quel est ton âge ?\n> %d\n", age);
    printf("Bonjour !\n");
    printf("Tu as %d ans.\n\n", age);

    // ==========================================
    // Exercice 2 : Addition
    // ==========================================
    int nbr1 = 4, nbr2 = 2, somme;
    printf("--- Exercice 2 : Addition ---\n");
    printf("Entrez le premier nombre :\n> %d\n", nbr1);
    printf("Entrez le deuxième nombre :\n> %d\n", nbr2);
    somme = nbr1 + nbr2;
    printf("La somme est : %d\n\n", somme);

    // ==========================================
    // Exercice 3 : Calculatrice
    // ==========================================
    float c_nbr1 = 4.0f, c_nbr2 = 2.0f;
    printf("--- Exercice 3 : Calculatrice ---\n");
    printf("Entrez le premier nombre :\n> %.1f\n", c_nbr1);
    printf("Entrez le deuxième nombre :\n> %.1f\n", c_nbr2);
    printf("Somme : %.2f\n", c_nbr1 + c_nbr2);
    printf("Différence : %.2f\n", c_nbr1 - c_nbr2);
    printf("Produit : %.2f\n", c_nbr1 * c_nbr2);
    if (c_nbr2 != 0) {
        printf("Quotient : %.2f\n\n", c_nbr1 / c_nbr2);
    } else {
        printf("Quotient : Division par zéro impossible.\n\n");
    }

    // ==========================================
    // Exercice 4 : Aire d'un rectangle
    // ==========================================
    float longueur = 4.0f, largeur = 2.0f;
    printf("--- Exercice 4 : Aire d'un rectangle ---\n");
    printf("Entrez la longueur :\n> %.1f\n", longueur);
    printf("Entrez la largeur :\n> %.1f\n", largeur);
    printf("L'aire du rectangle est : %.2f\n\n", longueur * largeur);

    // ==========================================
    // Exercice 5 : Périmètre
    // ==========================================
    printf("--- Exercice 5 : Périmètre ---\n");
    printf("Entrez la longueur :\n> %.1f\n", longueur);
    printf("Entrez la largeur :\n> %.1f\n", largeur);
    printf("Le périmètre du rectangle est : %.2f\n\n", 2 * (longueur + largeur));

    // ==========================================
    // Exercice 6 : Moyenne
    // ==========================================
    float note1 = 4.0f, note2 = 2.0f, note3 = 6.0f; // 4, 2 et 6 (si 3 nombres demandés)
    printf("--- Exercice 6 : Moyenne ---\n");
    printf("Entrez la première note :\n> %.1f\n", note1);
    printf("Entrez la deuxième note :\n> %.1f\n", note2);
    printf("Entrez la troisième note :\n> %.1f\n", note3);
    printf("La moyenne est : %.2f\n\n", (note1 + note2 + note3) / 3.0f);

    // ==========================================
    // Exercice 7 : Conversion Celsius -> Fahrenheit
    // ==========================================
    float celsius = 4.0f;
    printf("--- Exercice 7 : Conversion Celsius -> Fahrenheit ---\n");
    printf("Entrez une température en degrés Celsius :\n> %.1f\n", celsius);
    printf("Température en Fahrenheit : %.2f °F\n\n", (celsius * 9.0f / 5.0f) + 32.0f);

    // ==========================================
    // Exercice 8 : Conversion Euros (TVA 21%)
    // ==========================================
    float montant = 96432.0f;
    printf("--- Exercice 8 : Conversion Euros (TVA 21%%) ---\n");
    printf("Entrez un montant en euros :\n> %.2f\n", montant);
    printf("Montant après une TVA de 21%% : %.2f €\n\n", montant * 1.21f);

    // ==========================================
    // Exercice 9 : IMC
    // ==========================================
    float poids = 110.0f, taille = 1.85f;
    printf("--- Exercice 9 : IMC ---\n");
    printf("Entrez le poids en kg :\n> %.1f\n", poids);
    printf("Entrez la taille en m :\n> %.2f\n", taille);
    printf("Votre IMC est : %.2f\n\n", poids / (taille * taille));

    // ==========================================
    // Exercice 10 : Intérêts
    // ==========================================
    float capital = 96432.0f, taux = 4.0f;
    printf("--- Exercice 10 : Intérêts ---\n");
    printf("Entrez le capital :\n> %.2f\n", capital);
    printf("Entrez le taux d'intérêt (en %%) :\n> %.1f\n", taux);
    printf("Les intérêts obtenus après une année sont : %.2f €\n\n", capital * (taux / 100.0f));

    // ==========================================
    // Défi : Ma fiche personnelle
    // ==========================================
    int defi_age = 17;
    float defi_taille = 1.85f, defi_poids = 110.0f;
    printf("--- Défi : Ma fiche personnelle ---\n");
    printf("Entrez votre âge :\n> %d\n", defi_age);
    printf("Entrez votre taille (en m) :\n> %.2f\n", defi_taille);
    printf("Entrez votre poids (en kg) :\n> %.1f\n", defi_poids);

    printf("\n-----------------------------------\n");
    printf("         MA FICHE\n");
    printf("-----------------------------------\n");
    printf("Âge    : %d ans\n", defi_age);
    printf("Taille : %.2f m\n", defi_taille);
    printf("Poids  : %.1f kg\n", defi_poids);
    printf("-----------------------------------\n");
    printf("Merci d'avoir utilisé ce programme !\n");

    return 0;
}