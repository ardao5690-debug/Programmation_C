#include <stdio.h>

int main(void) {
    // ==========================================
    // Activité 1 : Premier programme avec for
    // ==========================================
    printf("--- Activité 1 : Compter de 1 à 10 (for) ---\n");
    int i;
    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n\n");

    // ==========================================
    // Activité 2 : Comparer avec while
    // ==========================================
    printf("--- Activité 2 : Même chose avec while ---\n");
    int j = 1;
    while (j <= 10) {
        printf("%d ", j);
        j++;
    }
    printf("\n\n");

    // ==========================================
    // Exercice 1 : Compter jusqu'à 100
    // ==========================================
    printf("--- Exercice 1 : Compter de 1 à 100 ---\n");
    for (int k = 1; k <= 100; k++) {
        printf("%d ", k);
    }
    printf("\n\n");

    // ==========================================
    // Exercice 2 : Compte à rebours
    // ==========================================
    printf("--- Exercice 2 : Compte à rebours ---\n");
    for (int c = 20; c >= 1; c--) {
        printf("%d\n", c);
    }
    printf("Décollage !\n\n");

    // ==========================================
    // Exercice 3 : Les nombres pairs (2 à 100)
    // ==========================================
    printf("--- Exercice 3 : Nombres pairs de 2 à 100 ---\n");
    for (int p = 2; p <= 100; p += 2) {
        printf("%d ", p);
    }
    printf("\n\n");

    // ==========================================
    // Exercice 4 : Les multiples de 3 (jusqu'à 99)
    // ==========================================
    printf("--- Exercice 4 : Multiples de 3 ---\n");
    for (int m = 3; m <= 99; m += 3) {
        printf("%d ", m);
    }
    printf("\n\n");

    // ==========================================
    // Exercice 5 : Table de multiplication (pour 4)
    // ==========================================
    printf("--- Exercice 5 : Table de multiplication de 4 ---\n");
    int base = 4; // Utilisation de ton nombre 4
    for (int t = 1; t <= 10; t++) {
        printf("%d x %d = %d\n", base, t, base * t);
    }
    printf("\n");

    // ==========================================
    // Exercice 6 : Les puissances de 2 (jusqu'à 2^10)
    // ==========================================
    printf("--- Exercice 6 : Puissances de 2 ---\n");
    int puissance = 1;
    for (int pow = 1; pow <= 10; pow++) {
        puissance *= 2;
        printf("2^%d = %d\n", pow, puissance);
    }
    printf("\n");

    // ==========================================
    // Exercice 7 : Factorielle (ex: 5!)
    // ==========================================
    printf("--- Exercice 7 : Factorielle ---\n");
    int n = 5;
    long long factorielle = 1;
    for (int f = 1; f <= n; f++) {
        factorielle *= f;
    }
    printf("%d! = %lld\n\n", n, factorielle);

    // ==========================================
    // Exercice 8 : Somme des carrés (1^2 + ... + 10^2)
    // ==========================================
    printf("--- Exercice 8 : Somme des carrés ---\n");
    int somme_carres = 0;
    for (int s = 1; s <= 10; s++) {
        somme_carres += (s * s);
    }
    printf("La somme des carrés de 1 à 10 est : %d\n\n", somme_carres);

    // ==========================================
    // Exercice 9 : Suites numériques (5 en 5 jusqu'à 100)
    // ==========================================
    printf("--- Exercice 9 : Suite numérique ---\n");
    for (int suite = 5; suite <= 100; suite += 5) {
        printf("%d ", suite);
    }
    printf("\n\n");

    // ==========================================
    // Exercice 10 : Dessin simple
    // ==========================================
    printf("--- Exercice 10 : Dessin simple ---\n");
    for (int d = 1; d <= 10; d++) {
        printf("*");
    }
    printf("\n\n");

    // ==========================================
    // Défi : Générateur de tableaux de multiplication
    // ==========================================
    printf("--- Défi : Générateur de tableaux (Table de 4) ---\n");
    int nb_defi = 4; // Utilisation de ton nombre 4
    for (int df = 1; df <= 20; df++) {
        printf("%d * %d = %d\n", nb_defi, df, nb_defi * df);
    }
    printf("-----------------------------------\n");

    return 0;
}