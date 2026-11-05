#include <stdio.h>

int main(void) {
    int choix = -1;

    while (choix != 0) {
        printf("\n===================================\n");
        printf("   DEFIS DU SPRINT 09 - MENU       \n");
        printf("===================================\n");
        printf("1. Defi 1 : Calculatrice complete\n");
        printf("2. Defi 2 : Bulletin scolaire\n");
        printf("3. Defi 3 : Distributeur automatique\n");
        printf("4. Defi 4 : Jeu de devinette\n");
        printf("0. Quitter\n");
        printf("-----------------------------------\n");
        printf("Votre choix : ");
        
        if (scanf("%d", &choix) != 1) {
            printf("Erreur de saisie.\n");
            break;
        }

        switch (choix) {
            case 1: {
                // ==========================================
                // Défi 1 : Calculatrice complète
                // ==========================================
                printf("\n--- Defi 1 : Calculatrice Complete ---\n");
                float n1 = 4.0f, n2 = 2.0f; // Utilisation de 4 et 2
                int calc_op;
                printf("Nombres par defaut : %.1f et %.1f\n", n1, n2);
                printf("1. Addition (+)\n");
                printf("2. Soustraction (-)\n");
                printf("3. Multiplication (*)\n");
                printf("4. Division (/)\n");
                printf("Choisissez l'operation (1-4) : ");
                if (scanf("%d", &calc_op) == 1) {
                    switch(calc_op) {
                        case 1: printf("Resultat : %.2f + %.2f = %.2f\n", n1, n2, n1 + n2); break;
                        case 2: printf("Resultat : %.2f - %.2f = %.2f\n", n1, n2, n1 - n2); break;
                        case 3: printf("Resultat : %.2f * %.2f = %.2f\n", n1, n2, n1 * n2); break;
                        case 4: 
                            if (n2 != 0) printf("Resultat : %.2f / %.2f = %.2f\n", n1, n2, n1 / n2);
                            else printf("Division par zero impossible.\n");
                            break;
                        default: printf("Operation invalide.\n");
                    }
                }
                break;
            }
            case 2: {
                // ==========================================
                // Défi 2 : Bulletin scolaire
                // ==========================================
                printf("\n--- Defi 2 : Bulletin Scolaire ---\n");
                float notes[3] = {14.0f, 16.0f, 12.0f}; // Notes d'exemple
                float somme = 0;
                for(int i = 0; i < 3; i++) {
                    somme += notes[i];
                    printf("Note %d : %.1f\n", i+1, notes[i]);
                }
                float moyenne = somme / 3.0f;
                printf("Moyenne generale : %.2f\n", moyenne);
                
                if (moyenne < 10.0f) printf("Appreciation : Echec\n");
                else if (moyenne < 12.0f) printf("Appreciation : Suffisant\n");
                else if (moyenne < 16.0f) printf("Appreciation : Bien\n");
                else printf("Appreciation : Tres bien\n");
                break;
            }
            case 3: {
                // ==========================================
                // Défi 3 : Distributeur automatique
                // ==========================================
                printf("\n--- Defi 3 : Distributeur Automatique ---\n");
                int choix_boisson = 1; // Simulation d'un choix (ex: 1. Café)
                printf("DISTRIBUTEUR\n");
                printf("1. Cafe (2.00 EUR)\n");
                printf("2. The (1.50 EUR)\n");
                printf("3. Chocolat chaud (2.50 EUR)\n");
                printf("Votre choix : %d\n", choix_boisson);
                
                switch(choix_boisson) {
                    case 1: printf("Un cafe servi. Total a payer : 2.00 EUR\n"); break;
                    case 2: printf("Un the servi. Total a payer : 1.50 EUR\n"); break;
                    case 3: printf("Un chocolat chaud servi. Total a payer : 2.50 EUR\n"); break;
                    default: printf("Choix invalide.\n");
                }
                break;
            }
            case 4: {
                // ==========================================
                // Défi 4 : Jeu de devinette
                // ==========================================
                printf("\n--- Defi 4 : Jeu de Devinette ---\n");
                int secret = 6; // Utilisation de 6 (troisième élément)
                int proposition = 4; // Utilisation de 4
                
                printf("Nombre secret entre 1 et 10.\n");
                while (proposition != secret) {
                    printf("Proposition : %d -> ", proposition);
                    if (proposition < secret) {
                        printf("Trop petit.\n");
                        proposition = 6; // Trouvé au tour suivant
                    } else {
                        printf("Trop grand.\n");
                    }
                }
                printf("Proposition : %d -> Bravo ! Vous avez trouve le nombre secret.\n", proposition);
                break;
            }
            case 0:
                printf("\nFermeture du programme. Au revoir !\n");
                break;
            default:
                printf("\nChoix invalide, veuillez reessayer.\n");
        }
    }

    return 0;
}