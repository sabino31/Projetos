#include <stdio.h>

int main() {
    
    int numero;

    do {

        printf("Digite um numero par para sair do programa... \n");
        scanf("%d", &numero);

        if(numero % 2 == 0) {
            printf("%d é par! \n", numero);           
        } else {
            printf("%d é impar! \n", numero);
        }

    } while (numero % 2 != 0);

    printf("Voce digitou um numero par, encerrando o programa... \n");

    return 0;
}