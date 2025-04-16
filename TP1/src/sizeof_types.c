// sizeof_types.c
// gcc sizeof_types.c -o sizeof_types.out && ./sizeof_types.out
//
// - Exercice 1.3
// Écrivez un programme nommé *sizeof_types.c* dans la fonction `main()` qui affiche
// la taille en octets des différents types de base. Assurez-vous d'inclure à la fois
// les versions signées (`signed`) et non-signées (`unsigned`) lorsque cela est pertinent.

#include <stdio.h>

int main() {
    printf("sizeof(char) = %zu\n", sizeof(char));
    printf("sizeof(short) = %zu\n", sizeof(short));
    printf("sizeof(int) = %zu\n", sizeof(int));
    printf("sizeof(long int) = %zu\n", sizeof(long int));
    printf("sizeof(long long int) = %zu\n", sizeof(long long int));
    printf("sizeof(float) = %zu\n", sizeof(float));
    printf("sizeof(double) = %zu\n", sizeof(double));
    printf("sizeof(long double) = %zu\n", sizeof(long double));
    return 0;
}
