/* ==========================================================
 * SPRINT C1 : Les fonctions - Calculatrice modulaire
 * Objectif : Découper le programme en plusieurs fonctions
 * ========================================================== */

#include <stdio.h>

// --- Déclaration des fonctions ---
void afficherMenu(void);
float addition(float a, float b);
float soustraction(float a, float b);
float multiplication(float a, float b);
int division(float a, float b, float *resultat);

int main(void) {
    int choix = 0;
    float n1, n2, resultat;

    // Boucle de répétition du menu
    while (choix != 5) {
        afficherMenu(); // Appel de la fonction d'affichage du menu
        
        printf("Votre choix (1-5) : ");
        if (scanf("%d", &choix) != 1) {
            printf("Erreur de saisie.\n");
            break;
        }

        if (choix == 5) {
            printf("\nFermeture de la calculatrice modulaire. Au revoir !\n");
            break;
        }

        if (choix >= 1 && choix <= 4) {
            printf("Entrez le premier nombre (ex: 4) : ");
            if (scanf("%f", &n1) != 1) break;
            
            printf("Entrez le deuxième nombre (ex: 2) : ");
            if (scanf("%f", &n2) != 1) break;

            printf("-----------------------------------\n");

            // Traitement via les fonctions spécifiques
            switch (choix) {
                case 1:
                    resultat = addition(n1, n2);
                    printf("Résultat : %.2f + %.2f = %.2f\n", n1, n2, resultat);
                    break;
                case 2:
                    resultat = soustraction(n1, n2);
                    printf("Résultat : %.2f - %.2f = %.2f\n", n1, n2, resultat);
                    break;
                case 3:
                    resultat = multiplication(n1, n2);
                    printf("Résultat : %.2f * %.2f = %.2f\n", n1, n2, resultat);
                    break;
                case 4:
                    // Appel de la fonction division avec gestion de l'erreur par pointeur/statut
                    if (division(n1, n2, &resultat)) {
                        printf("Résultat : %.2f / %.2f = %.2f\n", n1, n2, resultat);
                    } else {
                        printf("Erreur : Division par zéro impossible !\n");
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

// --- Définition des fonctions ---

// Affiche le menu principal (fonction void sans retour)
void afficherMenu(void) {
    printf("\n===================================\n");
    printf("     CALCULATRICE MODULAIRE (C1)   \n");
    printf("===================================\n");
    printf("1. Addition (+)\n");
    printf("2. Soustraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Quitter\n");
    printf("-----------------------------------\n");
}

// Fonction pour l'addition
float addition(float a, float b) {
    return a + b;
}

// Fonction pour la soustraction
float soustraction(float a, float b) {
    return a - b;
}

// Fonction pour la multiplication
float multiplication(float a, float b) {
    return a * b;
}

// Fonction pour la division avec sécurité (renvoie 0 en cas d'erreur, 1 si OK)
int division(float a, float b, float *resultat) {
    if (b == 0.0f) {
        return 0; // Échec (division par zéro)
    }
    *resultat = a / b;
    return 1; // Succès
}