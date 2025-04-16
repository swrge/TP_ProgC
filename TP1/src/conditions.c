// conditions.c
// gcc conditions.c -o conditions.out && ./conditions.out
//
// Conditions et boucles avec divisibilité


#include <stdio.h>

int main() {
    int somme = 0;
    int i;

    for (i = 1; i <= 1000; i++) {
        if (i % 11 == 0) {
            continue;
        }

        if (i % 5 == 0 || i % 7 == 0) {
            somme += i;
        }

        if (somme > 5000) {
            break;
        }
    }

    printf("La somme finale est : %d\n", somme);
    return 0;
}
