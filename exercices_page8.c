#include <stdio.h>

int main() {
// --- Exercice 1 : Calcul d'une somme ---
printf("=== Exercice 1 ===\n");
int a = 10, b = 20;
int somme = a + b;
printf("Somme : %d\n\n", somme);

// --- Exercice 2 : Calculatrice simple ---
printf("=== Exercice 2 ===\n");
float num1 = 12.0, num2 = 4.0;
printf("Addition : %.2f\n", num1 + num2);
printf("Soustraction : %.2f\n", num1 - num2);
printf("Multiplication : %.2f\n", num1 * num2);
printf("Division : %.2f\n\n", num1 / num2);

// --- Exercice 3 : Température ---
printf("=== Exercice 3 ===\n");
float temp_celsius = 21.5;
printf("Temperature : %.1f C\n\n", temp_celsius);

// --- Exercice 4 : Aire d'un rectangle ---
printf("=== Exercice 4 ===\n");
float longueur = 8.5, largeur = 4.0;
float aire = longueur * largeur;
printf("Aire du rectangle : %.2f\n\n", aire);

// --- Exercice 5 : Périmètre ---
printf("=== Exercice 5 ===\n");
float perimetre = 2 * (longueur + largeur);
printf("Perimetre du rectangle : %.2f\n\n", perimetre);

// --- Exercice 6 : Moyenne ---
printf("=== Exercice 6 ===\n");
float note1 = 14.0, note2 = 16.0, note3 = 12.0;
float moyenne = (note1 + note2 + note3) / 3.0;
printf("Moyenne des notes : %.2f\n\n", moyenne);

// --- Exercice 7 : TVA ---
printf("=== Exercice 7 ===\n");
float prixHTVA = 100.0;
float tauxTVA = 0.21; // 21%
float prixTVAC = prixHTVA * (1 + tauxTVA);
printf("Prix TVAC : %.2f EUR\n\n", prixTVAC);

// --- Exercice 8 : Salaire ---
printf("=== Exercice 8 ===\n");
float salaireMensuel = 2500.0;
float salaireAnnuel = salaireMensuel * 12;
printf("Salaire annuel : %.2f EUR\n\n", salaireAnnuel);

// --- Exercice 9 : Conversion ---
printf("=== Exercice 9 ===\n");
float km = 5.0;
float metres = km * 1000;
int heures = 2;
int minutes = heures * 60;
printf("%.1f km = %.0f metres\n", km, metres);
printf("%d heures = %d minutes\n\n", heures, minutes);

// --- DEFI : BULLETIN ---
printf("********* BULLETIN *********\n\n");
float math = 15.0;
float francais = 17.0;
float sciences = 18.0;
float moy_bulletin = (math + francais + sciences) / 3.0;

printf("Math : %.0f\n", math);
printf("Francais : %.0f\n", francais);
printf("Sciences : %.0f\n\n", sciences);
printf("Moyenne : %.2f\n", moy_bulletin);
printf("****************************\n");

return 0;
}
