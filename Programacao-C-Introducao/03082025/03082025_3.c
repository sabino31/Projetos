#include <stdio.h> // Inclui a biblioteca padrão de entrada/saída

int main() {
    int numero1 = 10, numero2, resultado; // Declara três variáveis inteiras

    resultado = 10; // Inicializa 'resultado' com o valor 10
    printf("%d\n", resultado); // Exibe o valor atual de 'resultado'

    resultado += 20; // Soma 20 ao valor de 'resultado'
    printf("%d\n", resultado); // Exibe o novo valor de 'resultado'

    resultado -= numero1; // Subtrai o valor de 'numero1' de 'resultado'
    printf("%d\n", resultado); // Exibe o novo valor de 'resultado'

    resultado *= 5; // Multiplica o valor de 'resultado' por 5
    printf("%d\n", resultado); // Exibe o novo valor de 'resultado'

    resultado /= 2; // Divide o valor de 'resultado' por 2
    printf("%d\n", resultado); // Exibe o novo valor de 'resultado'
    
}