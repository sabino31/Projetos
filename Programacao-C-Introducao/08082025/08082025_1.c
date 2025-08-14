#include <stdio.h>

int main() {
    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    printf("Entre com a temperatura: \n");
    scanf("%f", &temperatura);
    printf("Entre com a umidade: \n");
    scanf("%f", &umidade);
    printf("Entre com o estoque: \n");
    scanf("%u", &estoque);

    temperatura > 30.0f ? printf("Temperatura está alta.\n") : printf("Temperatura está dentro dos parâmetros.\n");
    umidade > 50.0f ? printf("Umidade está alta.\n") : printf("Umidade está dentro dos parâmetros.\n");
    estoque < estoqueMinimo ? printf("Estoque abaixo do mínimo.\n") : printf("Estoque está dentro dos parâmetros.\n");
    

}
