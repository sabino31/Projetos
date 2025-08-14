#include <stdio.h>

int main() {
    char dia;
    char repetir;
    do {
        printf("Digite um valor para dia (a, b, c, d, e, f, g): ");
        scanf(" %c", &dia);

        switch (dia) {
            case 'a':
                printf("Domingo\n");
                break;
            case 'b':
                printf("Segunda-feira\n");
                break;
            case 'c':
                printf("Terça-feira\n");
                break;
            case 'd':
                printf("Quarta-feira\n");
                break;
            case 'e':
                printf("Quinta-feira\n");
                break;
            case 'f':
                printf("Sexta-feira\n");
                break;
            case 'g':
                printf("Sábado\n");
                break;
            default:
                printf("Valor inválido para dia\n");
        }
        printf("Deseja repetir? (s/n): ");
        scanf(" %c", &repetir);
    } while (repetir == 's' || repetir == 'S');
    return 0;
}