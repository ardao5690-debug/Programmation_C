#include <stdio.h>

int main(void) {
    // ==========================================
    // Activité 1 & 2 : Rectangles d'étoiles
    // ==========================================
    printf("--- Activité 1 & 2 : Rectangles ---\n");
    int lignes = 4, colonnes = 6; // Utilisation de 4
    for (int l = 1; l <= lignes; l++) {
        for (int c = 1; c <= colonnes; c++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // ==========================================
    // Exercice 1 : Carré
    // ==========================================
    printf("--- Exercice 1 : Carré ---\n");
    int taille_carre = 5;
    for (int i = 0; i < taille_carre; i++) {
        for (int j = 0; j < taille_carre; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    // ==========================================
    // Exercice 2 : Rectangle personnalisé
    // ==========================================
    printf("--- Exercice 2 : Rectangle ---\n");
    int rect_l = 4, rect_c = 2; // Utilisation de 4 et 2
    for (int i = 0; i < rect_l; i++) {
        for (int j = 0; j < rect_c; j++) {
            printf("# ");
        }
        printf("\n");
    }
    printf("\n");

    // ==========================================
    // Exercice 3 : Triangle
    // ==========================================
    printf("--- Exercice 3 : Triangle ---\n");
    int h_tri = 5;
    for (int i = 1; i <= h_tri; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // ==========================================
    // Exercice 4 : Triangle inversé
    // ==========================================
    printf("--- Exercice 4 : Triangle inversé ---\n");
    for (int i = h_tri; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // ==========================================
    // Exercice 5 : Pyramide
    // ==========================================
    printf("--- Exercice 5 : Pyramide ---\n");
    int n_pyr = 4; // Utilisation de 4
    for (int i = 1; i <= n_pyr; i++) {
        // Espaces
        for (int j = 1; j <= n_pyr - i; j++) {
            printf(" ");
        }
        // Étoiles
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // ==========================================
    // Exercice 6 : Tableau de multiplication
    // ==========================================
    printf("--- Exercice 6 : Tableau de multiplication ---\n");
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 5; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }
    printf("\n");

    // ==========================================
    // Exercice 7 : Damier
    // ==========================================
    printf("--- Exercice 7 : Damier ---\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            if ((i + j) % 2 == 0) {
                printf("X");
            } else {
                printf("O");
            }
        }
        printf("\n");
    }
    printf("\n");

    // ==========================================
    // Exercice 8 : Coordonnées
    // ==========================================
    printf("--- Exercice 8 : Coordonnées ---\n");
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            printf("(%d,%d) ", i, j);
        }
        printf("\n");
    }
    printf("\n");

    // ==========================================
    // Exercice 9 : Table complète
    // ==========================================
    printf("--- Exercice 9 : Tables de multiplication ---\n");
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 5; j++) {
            printf("%dx%d=%2d  ", i, j, i * j);
        }
        printf("\n");
    }
    printf("\n");

    // ==========================================
    // Exercice 10 : Cadre
    // ==========================================
    printf("--- Exercice 10 : Cadre ---\n");
    int c_l = 4, c_c = 6;
    for (int i = 0; i < c_l; i++) {
        for (int j = 0; j < c_c; j++) {
            if (i == 0 || i == c_l - 1 || j == 0 || j == c_c - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");

    // ==========================================
    // Défi : Générateur de motifs (Taille 8)
    // ==========================================
    printf("--- Défi : Générateur de motifs (Taille 8) ---\n");
    int taille_defi = 8;
    for (int i = 0; i < taille_defi; i++) {
        for (int j = 0; j < taille_defi; j++) {
            printf("* ");
        }
        printf("\n");
    }
    printf("-----------------------------------\n");

    return 0;
}