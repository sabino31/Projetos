// Inclui a biblioteca de entrada e saída padrão, que é necessária para usar a função printf.
#include <stdio.h>

// A função main é o ponto de entrada de qualquer programa em C.
int main() {

    // Inicia o primeiro laço (loop) 'for'. Este laço será responsável pelo número da tabuada (de 1 a 10).
    // A variável 'i' começa em 1, o laço continua enquanto 'i' for menor ou igual a 10, e 'i' é incrementado em 1 a cada iteração.
    for (int i = 1; i <= 10; i++) {

        // Adiciona uma linha em branco para separar as tabuadas, melhorando a legibilidade.
        printf("\n--- Tabuada do %d ---\n", i);

        // Inicia o segundo laço 'for', que fica aninhado dentro do primeiro.
        // Este laço será responsável pelo multiplicador (de 1 a 10) para o número 'i' atual.
        // A variável 'j' começa em 1, o laço continua enquanto 'j' for menor ou igual a 10, e 'j' é incrementado a cada iteração.
        for(int j = 1; j <= 10; j++)
        {
            // Imprime a linha da tabuada.
            // Ex: "1 x 1 = 1", "1 x 2 = 2", etc.
            // %d é um marcador para um número inteiro. Os valores de i, j, e (i * j) são inseridos nesses marcadores.
            // \n no final significa "nova linha", para que cada resultado apareça em sua própria linha.
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }

    // Retorna 0 para o sistema operacional, indicando que o programa foi executado com sucesso.
    return 0;
}
