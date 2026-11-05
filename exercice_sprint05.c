#include <stdio.h>

int main(void) {
    // ==========================================
    // Activité 1 : Premier menu
    // ==========================================
    int choix_activite = 1; 
    printf("--- Activité 1 : Premier menu ---\n");
    printf("=== MENU ===\n");
    printf("1. Dire bonjour\n");
    printf("2. Dire au revoir\n");
    printf("3. Quitter\n");
    printf("Votre choix : %d\n", choix_activite);
    
    switch (choix_activite) {
        case 1:
            printf("Bonjour !\n\n");
            break;
        case 2:
            printf("Au revoir !\n\n");
            break;
        case 3:
            printf("Fin du programme.\n\n");
            break;
        default:
            printf("Choix invalide.\n\n");
    }

    // ==========================================
    // Exercice 2 : Calculatrice interactive
    // ==========================================
    int choix_calc = 1; // 1 pour l'addition
    float nbr1 = 4.0f, nbr2 = 2.0f; // Utilisation de 4 et 2
    printf("--- Exercice 2 : Calculatrice ---\n");
    printf("1. Addition\n2. Soustraction\n3. Multiplication\n4. Division\n");
    printf("Votre choix : %d\n", choix_calc);
    printf("Nombres utilisés : %.1f et %.1f\n", nbr1, nbr2);

    switch (choix_calc) {
        case 1:
            printf("Résultat (Addition) : %.2f\n\n", nbr1 + nbr2);
            break;
        case 2:
            printf("Résultat (Soustraction) : %.2f\n\n", nbr1 - nbr2);
            break;
        case 3:
            printf("Résultat (Multiplication) : %.2f\n\n", nbr1 * nbr2);
            break;
        case 4:
            if (nbr2 != 0)
                printf("Résultat (Division) : %.2f\n\n", nbr1 / nbr2);
            else
                printf("Division par zéro impossible.\n\n");
            break;
        default:
            printf("Opération invalide.\n\n");
    }

    // ==========================================
    // Exercice 4 : Calcul de TVA (Montant 96432)
    // ==========================================
    int choix_tva = 3; // 3 pour TVA 21%
    float montant = 96432.0f; // Ton montant standard
    printf("--- Exercice 4 : Calcul de TVA ---\n");
    printf("1. TVA 6%%\n2. TVA 12%%\n3. TVA 21%%\n");
    printf("Votre choix : %d\n", choix_tva);
    printf("Montant initial : %.2f €\n", montant);

    switch (choix_tva) {
        case 1:
            printf("Prix TVAC (6%%) : %.2f €\n\n", montant * 1.06f);
            break;
        case 2:
            printf("Prix TVAC (12%%) : %.2f €\n\n", montant * 1.12f);
            break;
        case 3:
            printf("Prix TVAC (21%%) : %.2f €\n\n", montant * 1.21f);
            break;
        default:
            printf("Taux inconnu.\n\n");
    }

    // ==========================================
    // Défi : Mini borne interactive
    // ==========================================
    int choix_borne = 4; // 4 pour voir les informations du profil
    printf("--- Défi : Mini borne interactive ---\n");
    printf("-----------------------------------\n");
    printf("          BORNE MULTISERVICE       \n");
    printf("-----------------------------------\n");
    printf("1. Calculatrice\n");
    printf("2. Conversion\n");
    printf("3. Bulletin\n");
    printf("4. Informations (Profil)\n");
    printf("5. Quitter\n");
    printf("Votre choix : %d\n", choix_borne);

    switch (choix_borne) {
        case 1:
            printf("Service Calculatrice : 4 + 2 = 6\n\n");
            break;
        case 2:
            printf("Service Conversion : 4 km = 4000 mètres\n\n");
            break;
        case 3:
            printf("Service Bulletin : Note 14.5 (Bien)\n\n");
            break;
        case 4:
            printf("Service Informations (Fiche personnelle) :\n");
            printf("- Âge    : 17 ans\n");
            printf("- Taille : 1.85 m\n");
            printf("- Poids  : 110 kg\n\n");
            break;
        case 5:
            printf("Au revoir !\n\n");
            break;
        default:
            printf("Service invalide.\n\n");
    }

    printf("Fin du programme Sprint 05.\n");
    return 0;
}