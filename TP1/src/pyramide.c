// pyramide.c
// gcc -o pyramide.out pyramide.c && ./pyramide.out
//
// Exercice 1.6
// Affichage d'un triangle rectangle avec des boucles
//
// Écrivez un programme nommé boucles.c dans la fonction main() qui
// utilise des boucles for pour afficher un triangle rectangle.
// La taille du triangle sera déterminée par la valeur de la variable compteur,
// qui doit être strictement inférieure à 10.
//
// TODO: écrivez une nouvelle version du code en utilisant soit une boucle while ou do..while. Vous pouvez utiliser des branchements conditionnels (if) et inconditionnels (break ou continue)
// output pour compteur = 5 :
// *
// * *
// * # *
// * # # *
// * * * * *
//

#include <stdio.h>

int main() {
    int compteur = 5;  // Définir la taille du triangle

    if (compteur >= 10) {
        printf("La valeur du compteur doit être strictement inférieure à 10.\n");
        return 1;
    }

    for (int i = 0; i < compteur; i++) {
        for (int j = 0; j <= i; j++) {
            if ((i >= 2) && (i != compteur -1) && (j >= 1) && (j < i)) {
                printf("# ");
            } else {
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}
