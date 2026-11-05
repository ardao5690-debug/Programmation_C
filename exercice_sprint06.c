#include <stdio.h>

int main(void) {
    // ==========================================
    // Activité 1 : Compter jusqu'à 10
    // ==========================================
    printf("--- Activité 1 : Compter jusqu'à 10 ---\n");
    int compteur = 1;
    while (compteur <= 10) {
        printf("%d ", compteur);
        compteur++;
    }
    printf("\n\n");

    // ==========================================
    // Exercice 1 : Compteur (1 à 20)
    // ==========================================
    printf("--- Exercice 1 : Compteur de 1 à 20 ---\n");
    int i1 = 1;
    while (i1 <= 20) {
        printf("%d ", i1);
        i1++;
    }
    printf("\n\n");

    // ==========================================
    // Exercice 2 : Compte à rebours
    // ==========================================
    printf("--- Exercice 2 : Compte à rebours ---\n");
    int i2 = 10;
    while (i2 >= 1) {
        printf("%d\n", i2);
        i2--;
    }
    printf("Décollage !\n\n");

    // ==========================================
    // Exercice 3 : Les nombres pairs (2 à 50)
    // ==========================================
    printf("--- Exercice 3 : Nombres pairs de 2 à 50 ---\n");
    int i3 = 2;
    while (i3 <= 50) {
        printf("%d ", i3);
        i3 += 2;
    }
    printf("\n\n");

    // ==========================================
    // Exercice 4 : Les multiples de 5 (jusqu'à 100)
    // ==========================================
    printf("--- Exercice 4 : Multiples de 5 ---\n");
    int i4 = 5;
    while (i4 <= 100) {
        printf("%d ", i4);
        i4 += 5;
    }
    printf("\n\n");

    // ==========================================
    // Exercice 5 : Somme des nombres de 1 à 100
    // ==========================================
    printf("--- Exercice 5 : Somme (1 à 100) ---\n");
    int somme = 0;
    int i5 = 1;
    while (i5 <= 100) {
        somme += i5;
        i5++;
    }
    printf("La somme totale est : %d\n\n", somme);

    // ==========================================
    // Exercice 6 : Table de multiplication (pour 4)
    // ==========================================
    printf("--- Exercice 6 : Table de multiplication de 4 ---\n");
    int base = 4; // Utilisation de ton nombre 4
    int i6 = 1;
    while (i6 <= 10) {
        printf("%d x %d = %d\n", base, i6, base * i6);
        i6++;
    }
    printf("\n");

    // ==========================================
    // Exercice 7 : Mot de passe (Simulation)
    // ==========================================
    printf("--- Exercice 7 : Mot de passe ---\n");
    int mdp_saisi = 1234; // Simulation du code correct
    int essais = 1;
    while (mdp_saisi != 1234) {
        printf("Code incorrect (tentative %d).\n", essais);
        essais++;
        // Dans un vrai test interactif, on mettrait un scanf ici.
        mdp_saisi = 1234; 
    }
    printf("Accès autorisé.\n\n");

    // ==========================================
    // Exercice 8 : Calculatrice répétitive
    // ==========================================
    printf("--- Exercice 8 : Calculatrice répétitive ---\n");
    int continuer = 1;
    int nbr1 = 4, nbr2 = 2; // Utilisation de 4 et 2
    while (continuer == 1) {
        printf("Calcul avec %d et %d :\n", nbr1, nbr2);
        printf("Somme = %d\n", nbr1 + nbr2);
        printf("Voulez-vous recommencer ? (1: Oui, 0: Non) : 0\n");
        continuer = 0; // On arrête la boucle après un test
    }
    printf("Fin de la calculatrice.\n\n");

    // ==========================================
    // Exercice 9 : Moyenne de plusieurs notes
    // ==========================================
    printf("--- Exercice 9 : Moyenne de notes ---\n");
    float note = 0;
    float somme_notes = 0;
    int nb_notes = 0;
    
    // Simulation de saisie de notes (termine par -1)
    float notes_simulees[3] = {14.0f, 16.0f, -1.0f};
    int index = 0;
    
    note = notes_simulees[index];
    while (note != -1.0f) {
        somme_notes += note;
        nb_notes++;
        index++;
        note = notes_simulees[index];
    }
    if (nb_notes > 0) {
        printf("Moyenne calculée sur %d notes : %.2f\n\n", nb_notes, somme_notes / nb_notes);
    }

    // ==========================================
    // Exercice 10 : Deviner un nombre
    // ==========================================
    printf("--- Exercice 10 : Deviner un nombre ---\n");
    int secret = 4; // Ton nombre 4
    int proposition = 2; // Ton nombre 2
    
    while (proposition != secret) {
        printf("Proposition : %d -> ", proposition);
        if (proposition < secret) {
            printf("Trop petit.\n");
            proposition = 4; // Trouvé au tour suivant
        } else {
            printf("Trop grand.\n");
        }
    }
    printf("Proposition : %d -> Bravo !\n\n", proposition);

    // ==========================================
    // Défi : Mini distributeur automatique
    // ==========================================
    printf("--- Défi : Mini distributeur automatique ---\n");
    int choix_distrib = 0;
    int tour = 1;
    
    while (tour <= 2) { // Simulation de deux tours de menu
        printf("---------------------------\n");
        printf("        distributeur       \n");
        printf("---------------------------\n");
        printf("1. Café\n");
        printf("2. Thé\n");
        printf("3. Chocolat chaud\n");
        printf("0. Quitter\n");
        
        if (tour == 1) {
            choix_distrib = 1; // Choisit Café
            printf("Votre choix : %d -> Un café servi !\n", choix_distrib);
        } else {
            choix_distrib = 0; // Quitte
            printf("Votre choix : %d -> Au revoir !\n", choix_distrib);
        }
        tour++;
    }
    printf("---------------------------\n");

    return 0;
}