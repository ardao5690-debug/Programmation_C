#include <stdio.h>

int main(void) {
    // ==========================================
    // Activité 1 : Première condition (Âge)
    // ==========================================
    int age = 17; // Ton âge
    printf("--- Activité 1 : Première condition ---\n");
    printf("Quel est ton âge ?\n> %d\n", age);
    if (age >= 18) {
        printf("Tu es majeur.\n\n");
    } else {
        printf("Tu es mineur.\n\n"); // C'est ton cas (17 ans)
    }

    // ==========================================
    // Exercice 1 : Nombre positif ou négatif
    // ==========================================
    float nombre_ex1 = 4.0f; // Utilisation de 4
    printf("--- Exercice 1 : Positif, négatif ou zéro ---\n");
    printf("Entrez un nombre :\n> %.1f\n", nombre_ex1);
    if (nombre_ex1 > 0) {
        printf("Positif\n\n");
    } else if (nombre_ex1 < 0) {
        printf("Négatif\n\n");
    } else {
        printf("Ou Zéro.\n\n");
    }

    // ==========================================
    // Exercice 2 : Pair ou impair
    // ==========================================
    int entier_ex2 = 4; // Utilisation de 4
    printf("--- Exercice 2 : Pair ou impair ---\n");
    printf("Entrez un entier :\n> %d\n", entier_ex2);
    if (entier_ex2 % 2 == 0) {
        printf("Nombre pair.\n\n");
    } else {
        printf("Nombre impair.\n\n");
    }

    // ==========================================
    // Exercice 3 : Le plus grand nombre
    // ==========================================
    int nbr1_ex3 = 4, nbr2_ex3 = 2; // Utilisation de 4 et 2
    printf("--- Exercice 3 : Le plus grand nombre ---\n");
    printf("Entrez le premier nombre :\n> %d\n", nbr1_ex3);
    printf("Entrez le deuxième nombre :\n> %d\n", nbr2_ex3);
    if (nbr1_ex3 > nbr2_ex3) {
        printf("Le plus grand est : %d\n\n", nbr1_ex3);
    } else if (nbr2_ex3 > nbr1_ex3) {
        printf("Le plus grand est : %d\n\n", nbr2_ex3);
    } else {
        printf("Les deux nombres sont égaux.\n\n");
    }

    // ==========================================
    // Exercice 4 : Calcul d'une remise
    // ==========================================
    float montant_ex4 = 96432.0f; // Ton montant habituel
    float total_final;
    printf("--- Exercice 4 : Calcul d'une remise ---\n");
    printf("Entrez le montant d'un achat :\n> %.2f\n", montant_ex4);
    if (montant_ex4 > 100.0f) {
        total_final = montant_ex4 * 0.90f; // Remise de 10%
        printf("Remise de 10%% appliquée !\n");
    } else {
        total_final = montant_ex4;
        printf("Aucune remise.\n");
    }
    printf("Le montant final est : %.2f €\n\n", total_final);

    // ==========================================
    // Exercice 5 : Bulletin (Notes)
    // ==========================================
    float note_ex5 = 14.5f; // Une note d'exemple
    printf("--- Exercice 5 : Bulletin ---\n");
    printf("Entrez une note (sur 20) :\n> %.1f\n", note_ex5);
    if (note_ex5 < 10.0f) {
        printf("Échec\n\n");
    } else if (note_ex5 < 12.0f) {
        printf("Suffisant\n\n");
    } else if (note_ex5 < 16.0f) {
        printf("Bien\n\n");
    } else {
        printf("Très bien\n\n");
    }

    // ==========================================
    // Exercice 6 : Tarif cinéma
    // ==========================================
    int age_cinema = 17; // Ton âge
    printf("--- Exercice 6 : Tarif cinéma ---\n");
    printf("Entrez l'âge :\n> %d\n", age_cinema);
    if (age_cinema < 12) {
        printf("Tarif : Enfant\n\n");
    } else if (age_cinema < 18) {
        printf("Tarif : Adolescent\n\n"); // Ton cas
    } else if (age_cinema < 65) {
        printf("Tarif : Adulte\n\n");
    } else {
        printf("Tarif : Senior\n\n");
    }

    // ==========================================
    // Exercice 7 : Mot de passe
    // ==========================================
    int mdp_saisi = 1234;
    int mdp_correct = 1234;
    printf("--- Exercice 7 : Mot de passe ---\n");
    printf("Entrez un code numérique :\n> %d\n", mdp_saisi);
    if (mdp_saisi == mdp_correct) {
        printf("Accès autorisé.\n\n");
    } else {
        printf("Accès refusé.\n\n");
    }

    // ==========================================
    // Exercice 8 : Calculatrice intelligente
    // ==========================================
    int calc1 = 4, calc2 = 2; // 4 et 2
    printf("--- Exercice 8 : Calculatrice intelligente ---\n");
    printf("Entrez deux nombres : %d et %d\n", calc1, calc2);
    if (calc1 > calc2) {
        printf("Le plus grand est : %d\n", calc1);
    } else if (calc2 > calc1) {
        printf("Le plus grand est : %d\n", calc2);
    } else {
        printf("Ils sont égaux.\n");
    }
    printf("Leur différence est : %d\n\n", calc1 - calc2);

    // ==========================================
    // Exercice 9 : Maximum de trois nombres
    // ==========================================
    int n1 = 4, n2 = 2, n3 = 6; // Utilisation de 4, 2 et 6 (pour le troisième)
    printf("--- Exercice 9 : Maximum de trois nombres ---\n");
    printf("Entrez trois nombres : %d, %d, %d\n", n1, n2, n3);
    int max = n1;
    if (n2 > max) {
        max = n2;
    }
    if (n3 > max) {
        max = n3;
    }
    printf("Le plus grand est : %d\n\n", max);

    // ==========================================
    // Exercice 10 : IMC avec interprétation
    // ==========================================
    float poids = 110.0f, taille = 1.85f; // Tes mesures
    float imc = poids / (taille * taille);
    printf("--- Exercice 10 : IMC et Interprétation ---\n");
    printf("Poids : %.1f kg | Taille : %.2f m\n", poids, taille);
    printf("Votre IMC est : %.2f\n", imc);
    if (imc < 18.5f) {
        printf("Interprétation : Insuffisance pondérale\n\n");
    } else if (imc < 25.0f) {
        printf("Interprétation : Corpulence normale\n\n");
    } else if (imc < 30.0f) {
        printf("Interprétation : Surpoids\n\n");
    } else {
        printf("Interprétation : Obésité\n\n"); // Ton cas (IMC ~32.14)
    }

    // ==========================================
    // Défi : Assistant d'orientation
    // ==========================================
    float moyenne_defi = 13.5f;
    int absences_defi = 2;
    printf("--- Défi : Assistant d'orientation ---\n");
    printf("Entrez la moyenne : %.1f\n", moyenne_defi);
    printf("Entrez le nombre d'absences : %d\n", absences_defi);
    
    printf("Décision : ");
    if (absences_defi > 10) {
        printf("Convocation des parents\n");
    } else if (moyenne_defi >= 12.0f) {
        printf("Réussite\n");
    } else if (moyenne_defi >= 10.0f) {
        printf("Réussite avec encouragement\n");
    } else {
        printf("Échec\n");
    }
    printf("-----------------------------------\n");

    return 0;
}