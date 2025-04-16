#include <stdio.h>

void afficher_binaire(int nombre) {
    // Un int a généralement 32 bits sur les systèmes modernes
    int taille_bits = sizeof(int) * 8;
    int i;
    int bit_trouve = 0; // Pour éviter d'afficher les zéros non significatifs

    // On parcourt les bits de gauche à droite
    for (i = taille_bits - 1; i >= 0; i--) {
        // Extraction du bit à la position i
        int bit = (nombre >> i) & 1;

        // Si on a déjà trouvé un 1 ou si c'est le bit actuel, on commence à afficher
        if (bit == 1) {
            bit_trouve = 1;
        }

        if (bit_trouve || i == 0) { // On affiche toujours au moins le dernier bit
            printf("%d", bit);

            // Pour une meilleure lisibilité, on ajoute un espace tous les 4 bits
            if (i > 0 && i % 4 == 0 && bit_trouve) {
                printf(" ");
            }
        }
    }
    printf("\n");
}

int main() {
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(nombres) / sizeof(nombres[0]);

    for (int i = 0; i < taille; i++) {
        printf("Nombre %d en binaire : ", nombres[i]);
        afficher_binaire(nombres[i]);
    }

    return 0;
}
