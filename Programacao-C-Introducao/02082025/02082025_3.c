#include <stdio.h>

int main(){
    int idade;
    float altura;
    char opcao;
    char nome [20];

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("A idade é: %d\n", idade);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);
    printf("A altura é: %.2f\n", altura);

    getchar(); // Limpa o buffer do teclado antes de ler a string
    printf("Digite seu nome completo: ");
    fgets(nome, 20, stdin);
    printf("Nome completo digitado: %s", nome);

    printf("Digite a opcao: ");
    scanf(" %c", &opcao);
    printf("A sua opção é: %c\n", opcao);


}