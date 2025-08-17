#include <stdio.h> // Biblioteca padrão de entrada e saída.

int main() {
    printf("--- DESAFIO DE XADREZ - MATECHECK (CÓDIGO UNIFICADO) ---\n\n");

    // ==================================================
    //               INÍCIO DO NÍVEL NOVATO
    // ==================================================
    printf("================== NÍVEL NOVATO ==================\n");

    // --- Definição de Constantes para o Nível Novato ---
    const int MOVIMENTOS_BISPO = 5;
    const int MOVIMENTOS_TORRE = 5;
    const int MOVIMENTOS_RAINHA = 8;

    // --- Movimentação do Bispo (usando o loop 'for') ---
    printf("--- Movimento do Bispo (5 casas na diagonal superior direita) ---\n");
    for (int i = 0; i < MOVIMENTOS_BISPO; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("\n");

    // --- Movimentação da Torre (usando o loop 'while') ---
    printf("--- Movimento da Torre (5 casas para a direita) ---\n");
    int contador_torre = 0;
    while (contador_torre < MOVIMENTOS_TORRE) {
        printf("Direita\n");
        contador_torre++;
    }
    printf("\n");

    // --- Movimentação da Rainha (usando o loop 'do-while') ---
    printf("--- Movimento da Rainha (8 casas para a esquerda) ---\n");
    int contador_rainha = 0;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < MOVIMENTOS_RAINHA);
    printf("\n");


    // ==================================================
    //             INÍCIO DO NÍVEL AVENTUREIRO
    // ==================================================
    printf("================ NÍVEL AVENTUREIRO ===============\n");
    
    // --- Definição de Constantes para o Nível Aventureiro ---
    const int CAVALO_PASSOS_VERTICAIS = 2;
    const int CAVALO_PASSOS_HORIZONTAIS = 1;

    // --- Movimentação do Cavalo (em 'L': para baixo e para a esquerda) ---
    printf("--- Movimento do Cavalo (em 'L': para baixo e para a esquerda) ---\n");
    
    // Parte 1: Mover 2 casas para baixo (usando o loop 'for').
    for (int i = 0; i < CAVALO_PASSOS_VERTICAIS; i++) {
        printf("Baixo\n");
    }

    // Parte 2: Mover 1 casa para a esquerda (usando o loop 'while').
    int contador_cavalo = 0;
    while (contador_cavalo < CAVALO_PASSOS_HORIZONTAIS) {
        printf("Esquerda\n");
        contador_cavalo++;
    }
    printf("\n");

    printf("==================================================\n");
    printf("Desafio concluído com sucesso!\n");
    
    return 0; // Indica que o programa terminou com sucesso.
}