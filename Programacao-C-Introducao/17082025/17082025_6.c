#include <stdio.h>

// Protótipos das funções
void nivel_novato();
void nivel_aventureiro();
void nivel_mestre();

// Variáveis globais para as movimentações
#define BISPO_MOVIMENTOS 5
#define TORRE_MOVIMENTOS 5
#define RAINHA_MOVIMENTOS 8
#define CAVALO_HORIZONTAL 2
#define CAVALO_VERTICAL 1

// --- Funções Recursivas para o Nível Mestre ---

// Função recursiva para a movimentação da Rainha
void mover_rainha_recursiva(int passos) {
    if (passos > 0) {
        printf("Esquerda\n");
        mover_rainha_recursiva(passos - 1);
    }
}

// Função recursiva para a movimentação da Torre
void mover_torre_recursiva(int passos) {
    if (passos > 0) {
        printf("Direita\n");
        mover_torre_recursiva(passos - 1);
    }
}

// --- Nível Novato ---

void nivel_novato() {
    printf("========================\n");
    printf("   🏅 Nível Novato 🏅\n");
    printf("========================\n\n");

    // Movimentação do Bispo (loop for)
    printf("--- Movimento do Bispo (5 casas na diagonal superior direita) ---\n");
    for (int i = 0; i < BISPO_MOVIMENTOS; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    printf("\n");

    // Movimentação da Torre (loop while)
    printf("--- Movimento da Torre (5 casas para a direita) ---\n");
    int j = 0;
    while (j < TORRE_MOVIMENTOS) {
        printf("Direita\n");
        j++;
    }

    printf("\n");

    // Movimentação da Rainha (loop do-while)
    printf("--- Movimento da Rainha (8 casas para a esquerda) ---\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < RAINHA_MOVIMENTOS);
    
    printf("\n");
}

// --- Nível Aventureiro ---

void nivel_aventureiro() {
    printf("==========================\n");
    printf("   🏅 Nível Aventureiro 🏅\n");
    printf("==========================\n\n");

    printf("--- Movimento do Cavalo (em L, para baixo e para a esquerda) ---\n");
    
    // Loop 'for' para a parte vertical do movimento (2x para baixo)
    for (int i = 0; i < CAVALO_HORIZONTAL; i++) { // Usa CAVALO_HORIZONTAL que é 2
        printf("Baixo\n");
    }

    // Loop 'while' para a parte horizontal do movimento (1x para a esquerda)
    int j = 0;
    while (j < CAVALO_VERTICAL) { // Usa CAVALO_VERTICAL que é 1
        printf("Esquerda\n");
        j++;
    }
    printf("\n");
}

// --- Nível Mestre ---

void nivel_mestre() {
    printf("=======================\n");
    printf("   🥇 Nível Mestre 🥇\n");
    printf("=======================\n\n");

    // Movimentação do Bispo (loops aninhados)
    printf("--- Movimento do Bispo (5 casas na diagonal direita para cima) ---\n");
    for (int i = 0; i < BISPO_MOVIMENTOS; i++) {
        // Loop aninhado para simular o movimento diagonal
        for (int j = 0; j < 1; j++) {
            printf("Cima\n");
            printf("Direita\n");
        }
    }
    printf("\n");

    // Movimentação da Torre (recursiva)
    printf("--- Movimento da Torre (5 casas para a direita - Recursivo) ---\n");
    mover_torre_recursiva(TORRE_MOVIMENTOS);
    printf("\n");

    // Movimentação da Rainha (recursiva)
    printf("--- Movimento da Rainha (8 casas para a esquerda - Recursivo) ---\n");
    mover_rainha_recursiva(RAINHA_MOVIMENTOS);
    printf("\n");

    // Movimentação do Cavalo (loops com break e continue)
    // Movimento correto do cavalo: 2 para cima, 1 para a direita
    printf("--- Movimento do Cavalo (1 vez em L para cima à direita - Corrigido) ---\n");
    for (int i = 0; i < 3; i++) { // Loop para 3 movimentos totais (2 Cima + 1 Direita)
        if (i < 2) {
            printf("Cima\n");
            continue; // Continua para a próxima iteração
        }
        if (i == 2) {
            printf("Direita\n");
            break; // Sai do loop após o último movimento
        }
    }
    printf("\n");
}

// --- Função Principal ---

int main() {
    printf("Bem-vindo ao Desafio de Xadrez da MateCheck!\n\n");
    
    nivel_novato();
    
    printf("--- Fim do Nível Novato ---\n\n");
    
    nivel_aventureiro();
    
    printf("--- Fim do Nível Aventureiro ---\n\n");
    
    nivel_mestre();

    printf("--- Fim do Desafio! ---\n\n");

    return 0;
}