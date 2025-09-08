/* Escreva um algoritmo para ler um valor e escrever se é positivo ou negativo. Considere o valor zero
como positivo. */

#include <stdio.h>
#include <stdlib.h>

int main()

{
    int numero;
    
    printf("Insira um número:\n");
    scanf("%d", &numero);
    
    if (numero <0) 
        printf("O valor %d é negativo.\n");
    else 
        printf("O valor %d é positivo.\n");
    
    
    return 0;
}
