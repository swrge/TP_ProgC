// cercle.c
// gcc cercle.c -lm -o cercle.out && ./cercle.out
//
// - Exercice 1.2
// À l'intérieur du fichier cercle.c, écrivez un programme en C qui calcule
// à la fois l'aire et le périmètre d'un cercle. Utilisez une variable rayon
// de type float ou double pour stocker le rayon du cercle.
//
// - Note
// L'option -lm est utilisée pour lier la bibliothèque mathématique standard (<math.h>).


#include <stdio.h>
#include <math.h>

int main() {
    const double rayon = 2.2;
    double aire = M_PI * rayon * rayon;
    double perimetre = 2 * M_PI * rayon;

    printf("Aire: %.2f\n", aire);
    printf("Perimetre: %.2f\n", perimetre);

    return 0;
}
