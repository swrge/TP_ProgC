// calculs.c
// gcc calculs.c -o calculs.out && ./calculs.out
// Utilisation de l'opérateur switch pour des opérations mathématiques

// Écrivez un programme nommé calculs.c dans la fonction main() qui utilise trois variables :
//
//     num1 (entier)
//     num2 (entier)
//     op (un caractère)
//
// La variable op contient l'un des différents opérateurs mathématiques ou de bits suivants : '+', '-', '*', '/', '%', '&', '|', '~'.

#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    printf("Entrez l'opérateur (+, -, *, /, %%, &, |, ~): ");
    scanf(" %c", &op);
    switch (op) {
        case '+':
            break;
        case '-':
            break;
        case '*':
            break;
        case '/':
            break;
        case '%':
            break;
        case '&':
            break;
        case '|':
            break;
        case '~':
            break;
        default:
            printf("Opérateur invalide\n");
            return 1;
    }

    // Saisie des valeurs
    printf("Entrez le premier nombre: ");
    scanf("%d", &num1);

    // L'opérateur ~ est unaire, donc on ne demande pas num2 dans ce cas
    if (op != '~') {
        printf("Entrez le second nombre: ");
        scanf("%d", &num2);
    }

    // Utilisation de switch pour effectuer l'opération appropriée
    switch (op) {
    case '+':
        printf("%d + %d = %d\n", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%d - %d = %d\n", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%d * %d = %d\n", num1, num2, num1 * num2);
        break;
    case '/':
        if (num2 == 0) {
            printf("Erreur: Division par zéro\n");
        } else {
            printf("%d / %d = %d\n", num1, num2, num1 / num2);
        }
        break;
    case '%':
        if (num2 == 0) {
            printf("Erreur: Modulo par zéro\n");
        } else {
            printf("%d %% %d = %d\n", num1, num2, num1 % num2);
        }
        break;
    case '&':
        printf("%d & %d = %d\n", num1, num2, num1 & num2);
        break;
    case '|':
        printf("%d | %d = %d\n", num1, num2, num1 | num2);
        break;
    case '~':
        printf("~%d = %d\n", num1, ~num1);
        break;
    default:
        printf("Opérateur non reconnu\n");
    }

    return 0;
}
