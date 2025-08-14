#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main() {
    int escolhaJogador, escolhaComputador;
    srand(time(0));

    printf("Bem-vindo ao Jokenpo!\n");
    printf("Escolha uma opcao:\n");
    printf("1 - Pedra\n"); 
    printf("2 - Papel\n");
    printf("3 - Tesoura\n");
    printf("Digite sua escolha (1, 2 ou 3): ");
    scanf("%d", &escolhaJogador);

    escolhaComputador = rand() % 3 + 1;

    switch (escolhaJogador)
    {
    case 1:
        printf("Jogador: Pedra - \n");
        break;
    case 2:
        printf("Jogador: Papel - \n");
        break;
    case 3:
        printf("Jogador: Tesoura - \n");
        break;
    default:
        printf("Escolha invalida! \n");
    break;

    }
    switch (escolhaComputador)
    {
        case 1:
            printf("Computador: Pedra\n");
            break;
        case 2:
            printf("Computador: Papel\n");
            break;
        case 3:
            printf("Computador: Tesoura\n");
            break;
    }

if (escolhaComputador == escolhaJogador) {
    printf("Empate!\n");
} else if ((escolhaJogador == 1 && escolhaComputador == 3) || 
           (escolhaJogador == 2 && escolhaComputador == 1) || 
           (escolhaJogador == 3 && escolhaComputador == 2)) {
    printf("Jogador venceu!\n");
} else if ((escolhaComputador == 1 && escolhaJogador == 3) || 
           (escolhaComputador == 2 && escolhaJogador == 1) || 
           (escolhaComputador == 3 && escolhaJogador == 2)) {
    printf("Computador venceu!\n");
} else

return 0;
}