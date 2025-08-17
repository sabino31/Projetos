// Inclusão da biblioteca padrão de entrada e saída, necessária para a função printf.
#include <stdio.h>

// --- Documentação das Constantes ---
// Usamos constantes para definir o número de casas que cada peça vai mover.
// Isso torna o código mais legível e fácil de manter. Se quisermos alterar
// o número de movimentos no futuro, só precisamos de mudar o valor aqui.
#define MOVIMENTOS_TORRE 5
#define MOVIMENTOS_BISPO 5
#define MOVIMENTOS_RAINHA 8

/*
 * Função principal do programa.
 * A execução começa aqui.
 */
int main() {

    // --- Movimentando a Torre ---
    // Objetivo: Mover a torre 5 casas para a direita.
    // Estrutura utilizada: loop 'for'.
    // O 'for' é ideal aqui porque sabemos exatamente quantas vezes queremos repetir a ação.
    printf("--- Movimentando a Torre (%d casas) ---\n", MOVIMENTOS_TORRE);
    for (int i = 0; i < MOVIMENTOS_TORRE; i++) {
        // A cada iteração do loop, imprimimos a direção do movimento.
        printf("Direita\n");
    }

    // --- Movimentando o Bispo ---
    // Objetivo: Mover o bispo 5 casas na diagonal superior direita.
    // Estrutura utilizada: loop 'while'.
    // O 'while' também serve para repetições contadas, mas requer que o contador
    // seja inicializado antes do loop e incrementado dentro dele.
    printf("\n--- Movimentando o Bispo (%d casas) ---\n", MOVIMENTOS_BISPO);
    int contador_bispo = 0; // Inicializa a variável de controle
    while (contador_bispo < MOVIMENTOS_BISPO) {
        // Para simular o movimento na diagonal, combinamos duas direções.
        printf("Cima, Direita\n");
        contador_bispo++; // Incrementa o contador para evitar um loop infinito.
    }

    // --- Movimentando a Rainha ---
    // Objetivo: Mover a rainha 8 casas para a esquerda.
    // Estrutura utilizada: loop 'do-while'.
    // O 'do-while' é semelhante ao 'while', mas garante que o bloco de código
    // seja executado pelo menos uma vez antes de verificar a condição.
    printf("\n--- Movimentando a Rainha (%d casas) ---\n", MOVIMENTOS_RAINHA);
    int contador_rainha = 0; // Inicializa a variável de controle
    do {
        // Imprime o movimento para a esquerda.
        printf("Esquerda\n");
        contador_rainha++; // Incrementa o contador.
    } while (contador_rainha < MOVIMENTOS_RAINHA); // A condição é verificada no final.

    // Retorna 0 para indicar que o programa foi executado com sucesso.
    return 0;
}