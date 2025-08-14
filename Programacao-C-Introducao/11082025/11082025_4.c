#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída, necessária para printf, scanf, fgets, etc.
#include <string.h> // Inclui a biblioteca para manipulação de strings, usada para funções como strcspn.

int main() { // Início da execução do programa

    // Declaração das variáveis da primeira carta
    char estado1[3]; // Guarda a sigla do estado (2 caracteres + terminador nulo)
    char codigo1[5]; // Guarda o código da carta (até 4 caracteres + terminador nulo)
    char cidade1[50]; // Guarda o nome da cidade
    unsigned long int populacao1; // Guarda a população da cidade
    float area1; // Guarda a área da cidade em km²
    float pib1; // Guarda o PIB da cidade em bilhões de reais
    int pontosturisticos1; // Guarda o número de pontos turísticos
    float densidade1; // Guarda a densidade populacional
    float pibPerCapita1; // Guarda o PIB per capita

    // Declaração das variáveis da segunda carta
    char estado2[3]; // Guarda a sigla do estado da segunda carta
    char codigo2[5]; // Guarda o código da segunda carta
    char cidade2[50]; // Guarda o nome da cidade da segunda carta
    unsigned long int populacao2; // Guarda a população da segunda carta
    float area2; // Guarda a área da segunda carta
    float pib2; // Guarda o PIB da segunda carta
    int pontosturisticos2; // Guarda o número de pontos turísticos da segunda carta
    float densidade2; // Guarda a densidade populacional da segunda carta
    float pibPerCapita2; // Guarda o PIB per capita da segunda carta



    // Cadastro dos dados da primeira carta
    printf("-----Cadastro da Primeira Carta-----\n"); // Exibe mensagem de início do cadastro

    printf("Digite o estado da primeira carta (ex: SP): "); // Solicita a sigla do estado
    scanf("%2s", estado1); // Lê até 2 caracteres para o estado
    printf("Digite o código da primeira carta (ex: SP01): "); // Solicita o código da carta
    scanf("%4s", codigo1); // Lê até 4 caracteres para o código
    printf("Digite a população da primeira carta: "); // Solicita a população
    scanf("%lu", &populacao1); // Lê a população como unsigned long int
    printf("Digite a área da primeira carta (km²): "); // Solicita a área
    scanf("%f", &area1); // Lê a área como float
    printf("Digite o PIB da primeira carta: "); // Solicita o PIB
    scanf("%f", &pib1); // Lê o PIB como float
    printf("Digite o número de pontos turísticos da primeira carta: "); // Solicita o número de pontos turísticos
    scanf("%d", &pontosturisticos1); // Lê o número de pontos turísticos como int
    getchar(); // Consome o '\n' deixado pelo último scanf
    printf("Digite o nome da cidade da primeira carta: "); // Solicita o nome da cidade
    fgets(cidade1, sizeof(cidade1), stdin); // Lê o nome da cidade (permite espaços)
    cidade1[strcspn(cidade1, "\n")] = '\0'; // Remove o '\n' do final da string



    // Calcula a densidade populacional da primeira carta
    if (area1 != 0) // Se a área for diferente de zero
        densidade1 = (float)populacao1 / area1; // Calcula densidade como população dividido pela área
    else
        densidade1 = 0.0f; // Se área for zero, define densidade como 0

    // Calcula o PIB per capita da primeira carta
    if (populacao1 != 0) // Se a população for diferente de zero
        pibPerCapita1 = (pib1 * 1000000000.0f) / (float)populacao1; // Calcula PIB per capita (converte PIB para reais)
    else
        pibPerCapita1 = 0.0f; // Se população for zero, define PIB per capita como 0



    // Cadastro dos dados da segunda carta
    printf("-----Cadastro da Segunda Carta-----\n"); // Exibe mensagem de início do cadastro da segunda carta

    printf("Digite o estado da segunda carta (ex: RJ): "); // Solicita a sigla do estado
    scanf("%2s", estado2); // Lê até 2 caracteres para o estado
    printf("Digite o código da segunda carta (ex: RJ02): "); // Solicita o código da carta
    scanf("%4s", codigo2); // Lê até 4 caracteres para o código
    printf("Digite a população da segunda carta: "); // Solicita a população
    scanf("%lu", &populacao2); // Lê a população como unsigned long int
    printf("Digite a área da segunda carta (km²): "); // Solicita a área
    scanf("%f", &area2); // Lê a área como float
    printf("Digite o PIB da segunda carta: "); // Solicita o PIB
    scanf("%f", &pib2); // Lê o PIB como float
    printf("Digite o número de pontos turísticos da segunda carta: "); // Solicita o número de pontos turísticos
    scanf("%d", &pontosturisticos2); // Lê o número de pontos turísticos como int
    getchar(); // Consome o '\n' deixado pelo último scanf
    printf("Digite o nome da cidade da segunda carta: "); // Solicita o nome da cidade
    fgets(cidade2, sizeof(cidade2), stdin); // Lê o nome da cidade (permite espaços)
    cidade2[strcspn(cidade2, "\n")] = '\0'; // Remove o '\n' do final da string



    // Calcula a densidade populacional da segunda carta
    if (area2 != 0) // Se a área for diferente de zero
        densidade2 = (float)populacao2 / area2; // Calcula densidade como população dividido pela área
    else
        densidade2 = 0.0f; // Se área for zero, define densidade como 0

    // Calcula o PIB per capita da segunda carta
    if (populacao2 != 0) // Se a população for diferente de zero
        pibPerCapita2 = (pib2 * 1000000000.0f) / (float)populacao2; // Calcula PIB per capita (converte PIB para reais)
    else
        pibPerCapita2 = 0.0f; // Se população for zero, define PIB per capita como 0


    // Exibe todos os dados cadastrados das cartas
    printf("-----Exibir Dados Cadastrados-----\n"); // Exibe mensagem de exibição dos dados

    // Exibe os dados da primeira carta
    printf("-----Primeira Carta-----\n"); // Título para a primeira carta
    printf("Estado: %s\n", estado1); // Exibe a sigla do estado
    printf("Código: %s\n", codigo1); // Exibe o código da carta
    printf("Cidade: %s\n", cidade1); // Exibe o nome da cidade
    printf("População: %lu\n", populacao1); // Exibe a população
    printf("Área: %.2f km²\n", area1); // Exibe a área
    printf("PIB: %.2f bilhões de reais\n", pib1); // Exibe o PIB
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1); // Exibe o número de pontos turísticos
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1); // Exibe a densidade
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1); // Exibe o PIB per capita

    // Exibe os dados da segunda carta
    printf("-----Segunda Carta-----\n"); // Título para a segunda carta
    printf("Estado: %s\n", estado2); // Exibe a sigla do estado
    printf("Código: %s\n", codigo2); // Exibe o código da carta
    printf("Cidade: %s\n", cidade2); // Exibe o nome da cidade
    printf("População: %lu\n", populacao2); // Exibe a população
    printf("Área: %.2f km²\n", area2); // Exibe a área
    printf("PIB: %.2f bilhões de reais\n", pib2); // Exibe o PIB
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2); // Exibe o número de pontos turísticos
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2); // Exibe a densidade
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2); // Exibe o PIB per capita

    printf("-----Fim do Cadastro-----\n"); // Mensagem final do cadastro


    // Menu dinâmico para escolha de dois atributos diferentes
    int opcao1 = 0, opcao2 = 0, valido = 0; // Variáveis para as opções dos atributos e validação
    float valor1_c1 = 0, valor1_c2 = 0, valor2_c1 = 0, valor2_c2 = 0; // Valores dos atributos para cada carta
    char nomeAtributo1[40], nomeAtributo2[40]; // Nomes dos atributos escolhidos

    // Escolha do primeiro atributo
    do {
        printf("\n===== MENU DE COMPARAÇÃO =====\n"); // Exibe o menu
        printf("Escolha o PRIMEIRO atributo para comparar:\n"); // Instrução
        printf("1 - População\n"); // Opção 1
        printf("2 - Área\n"); // Opção 2
        printf("3 - PIB\n"); // Opção 3
        printf("4 - Pontos Turísticos\n"); // Opção 4
        printf("5 - Densidade Populacional (menor vence)\n"); // Opção 5
        printf("6 - PIB per Capita\n"); // Opção 6
        printf("Digite o número da opção desejada: "); // Solicita a opção
        scanf("%d", &opcao1); // Lê a opção
        valido = (opcao1 >= 1 && opcao1 <= 6) ? 1 : 0; // Valida a opção
        if (!valido) printf("Opção inválida!\n"); // Mensagem de erro
    } while (!valido); // Repete até ser válido

    // Escolha do segundo atributo (não pode ser igual ao primeiro)
    do {
        printf("\n===== MENU DE COMPARAÇÃO =====\n"); // Exibe o menu
        printf("Escolha o SEGUNDO atributo para comparar (diferente do primeiro):\n"); // Instrução
        for (int i = 1; i <= 6; i++) { // Percorre as opções
            if (i == opcao1) continue; // Não mostra a opção já escolhida
            switch(i) {
                case 1: printf("1 - População\n"); break; // Opção 1
                case 2: printf("2 - Área\n"); break; // Opção 2
                case 3: printf("3 - PIB\n"); break; // Opção 3
                case 4: printf("4 - Pontos Turísticos\n"); break; // Opção 4
                case 5: printf("5 - Densidade Populacional (menor vence)\n"); break; // Opção 5
                case 6: printf("6 - PIB per Capita\n"); break; // Opção 6
            }
        }
        printf("Digite o número da opção desejada: "); // Solicita a opção
        scanf("%d", &opcao2); // Lê a opção
        valido = (opcao2 >= 1 && opcao2 <= 6 && opcao2 != opcao1) ? 1 : 0; // Valida a opção
        if (!valido) printf("Opção inválida!\n"); // Mensagem de erro
    } while (!valido); // Repete até ser válido

    // Atribuição dos valores e nomes dos atributos escolhidos
    switch(opcao1) { // Para o primeiro atributo
        case 1: valor1_c1 = (float)populacao1; valor1_c2 = (float)populacao2; strcpy(nomeAtributo1, "População"); break; // População
        case 2: valor1_c1 = area1; valor1_c2 = area2; strcpy(nomeAtributo1, "Área"); break; // Área
        case 3: valor1_c1 = pib1; valor1_c2 = pib2; strcpy(nomeAtributo1, "PIB"); break; // PIB
        case 4: valor1_c1 = (float)pontosturisticos1; valor1_c2 = (float)pontosturisticos2; strcpy(nomeAtributo1, "Pontos Turísticos"); break; // Pontos Turísticos
        case 5: valor1_c1 = densidade1; valor1_c2 = densidade2; strcpy(nomeAtributo1, "Densidade Populacional"); break; // Densidade
        case 6: valor1_c1 = pibPerCapita1; valor1_c2 = pibPerCapita2; strcpy(nomeAtributo1, "PIB per Capita"); break; // PIB per Capita
        default: break;
    }
    switch(opcao2) { // Para o segundo atributo
        case 1: valor2_c1 = (float)populacao1; valor2_c2 = (float)populacao2; strcpy(nomeAtributo2, "População"); break; // População
        case 2: valor2_c1 = area1; valor2_c2 = area2; strcpy(nomeAtributo2, "Área"); break; // Área
        case 3: valor2_c1 = pib1; valor2_c2 = pib2; strcpy(nomeAtributo2, "PIB"); break; // PIB
        case 4: valor2_c1 = (float)pontosturisticos1; valor2_c2 = (float)pontosturisticos2; strcpy(nomeAtributo2, "Pontos Turísticos"); break; // Pontos Turísticos
        case 5: valor2_c1 = densidade1; valor2_c2 = densidade2; strcpy(nomeAtributo2, "Densidade Populacional"); break; // Densidade
        case 6: valor2_c1 = pibPerCapita1; valor2_c2 = pibPerCapita2; strcpy(nomeAtributo2, "PIB per Capita"); break; // PIB per Capita
        default: break;
    }

    // Exibe a comparação dos dois atributos
    printf("\n===== Comparação de Cartas =====\n"); // Título
    printf("Atributos escolhidos: %s e %s\n", nomeAtributo1, nomeAtributo2); // Exibe os atributos escolhidos
    printf("\n%s (%s):\n", cidade1, estado1); // Exibe nome e estado da carta 1
    printf("  %s: %.2f\n  %s: %.2f\n", nomeAtributo1, valor1_c1, nomeAtributo2, valor2_c1); // Exibe valores carta 1
    printf("%s (%s):\n", cidade2, estado2); // Exibe nome e estado da carta 2
    printf("  %s: %.2f\n  %s: %.2f\n", nomeAtributo1, valor1_c2, nomeAtributo2, valor2_c2); // Exibe valores carta 2

    // Comparação individual dos atributos
    printf("\nResultados individuais:\n"); // Título
    int v1 = 0, v2 = 0; // Variáveis para resultado individual
    if (opcao1 == 5) { // Se densidade, menor vence
        v1 = (valor1_c1 < valor1_c2) ? 1 : (valor1_c2 < valor1_c1 ? 2 : 0); // 1: carta1, 2: carta2, 0: empate
    } else {
        v1 = (valor1_c1 > valor1_c2) ? 1 : (valor1_c2 > valor1_c1 ? 2 : 0); // Maior vence
    }
    if (opcao2 == 5) { // Se densidade, menor vence
        v2 = (valor2_c1 < valor2_c2) ? 1 : (valor2_c2 < valor2_c1 ? 2 : 0); // 1: carta1, 2: carta2, 0: empate
    } else {
        v2 = (valor2_c1 > valor2_c2) ? 1 : (valor2_c2 > valor2_c1 ? 2 : 0); // Maior vence
    }
    printf("%s: %s\n", nomeAtributo1, v1 == 1 ? cidade1 : (v1 == 2 ? cidade2 : "Empate")); // Exibe resultado atributo 1
    printf("%s: %s\n", nomeAtributo2, v2 == 1 ? cidade1 : (v2 == 2 ? cidade2 : "Empate")); // Exibe resultado atributo 2

    // Soma dos atributos (para densidade, inverte o sinal para que menor vença)
    float soma1 = (opcao1 == 5 ? -valor1_c1 : valor1_c1) + (opcao2 == 5 ? -valor2_c1 : valor2_c1); // Soma carta 1
    float soma2 = (opcao1 == 5 ? -valor1_c2 : valor1_c2) + (opcao2 == 5 ? -valor2_c2 : valor2_c2); // Soma carta 2

    printf("\nSoma dos atributos:\n"); // Título
    printf("%s (%s): %.2f\n", cidade1, estado1, soma1); // Exibe soma carta 1
    printf("%s (%s): %.2f\n", cidade2, estado2, soma2); // Exibe soma carta 2

    // Resultado final
    if (soma1 > soma2) // Se soma1 maior
        printf("\nResultado final: %s venceu!\n", cidade1); // Carta 1 vence
    else if (soma2 > soma1) // Se soma2 maior
        printf("\nResultado final: %s venceu!\n", cidade2); // Carta 2 vence
    else
        printf("\nResultado final: Empate!\n"); // Empate

    return 0; // Retorna 0 para indicar que o programa terminou corretamente
}