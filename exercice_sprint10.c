/* ==========================================================
 * SPRINT 10 : Mini-projet - Calculatrice évoluée
 * Cahier des charges : Menu, 4 opérations, répétition,
 * gestion de la division par zéro.
 * ========================================================== */

#include <stdio.h>

int main(void) {
    int choix = 0;
    float n1, n2, resultat;

    // Boucle de répétition pour que le programme continue tant qu'on ne quitte pas
    while (choix != 5) {
        printf("\n===================================\n");
        printf("       CALCULATRICE EVOLUEE        \n");
        printf("===================================\n");
        printf("1. Addition (+)\n");
        printf("2. Soustraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Quitter\n");
        printf("-----------------------------------\n");
        printf("Votre choix (1-5) : ");
        
        if (scanf("%d", &choix) != 1) {
            printf("Erreur de saisie.\n");
            break;
        }

        // Si l'utilisateur choisit de quitter
        if (choix == 5) {
            printf("\nFermeture de la calculatrice. Au revoir !\n");
            break;
        }

        // Si le choix est valide, on demande les deux nombres
        if (choix >= 1 && choix <= 4) {
            printf("Entrez le premier nombre (ex: 4) : ");
            if (scanf("%f", &n1) != 1) break;
            
            printf("Entrez le deuxième nombre (ex: 2) : ");
            if (scanf("%f", &n2) != 1) break;

            printf("-----------------------------------\n");

            // Traitement avec le switch selon l'opération choisie
            switch (choix) {
                case 1:
                    resultat = n1 + n2;
                    printf("Résultat : %.2f + %.2f = %.2f\n", n1, n2, resultat);
                    break;
                case 2:
                    resultat = n1 - n2;
                    printf("Résultat : %.2f - %.2f = %.2f\n", n1, n2, resultat);
                    break;
                case 3:
                    resultat = n1 * n2;
                    printf("Résultat : %.2f * %.2f = %.2f\n", n1, n2, resultat);
                    break;
                case 4:
                    // Gestion de la division par zéro exigée par le cahier des charges
                    if (n2 == 0.0f) {
                        printf("Erreur : Division par zéro impossible !\n");
                    } else {
                        resultat = n1 / n2;
                        printf("Résultat : %.2f / %.2f = %.2f\n", n1, n2, resultat);
                    }
                    break;
                default:
                    printf("Option invalide.\n");
            }
        } else {
            printf("Choix invalide ! Veuillez choisir entre 1 et 5.\n");
        }
    }

    return 0;
}