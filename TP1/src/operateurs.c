// operateurs.c
// gcc -o operateurs.out operateurs.c && ./operateurs.out
// Écrivez un programme nommé opérateurs.c dans la fonction main() qui utilise deux variables a et b
//

#include <stdio.h>

void main() {
    int a = 16;
    int b = 3;

    printf("Addition: %d\n", a + b);
    printf("Soustraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);
    printf("Modulo: %d\n", a % b);
    printf("A est supérieur: %s\n", a > b ? "true" : "false");
}
