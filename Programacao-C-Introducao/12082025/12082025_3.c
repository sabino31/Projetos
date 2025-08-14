#include <stdio.h> 

int main () {

    int i = 1;

    do {

        printf("Valor de i: %d\n", i); 
        i++; 
        
    } while (i <= 5);

    printf("O ultimo valor de i é: %d\n", i); 
    return 0;
}