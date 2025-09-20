/* Escreva um algoritmo para ler um número inteiro (considere que serão lidos apenas valores
positivos e inteiros) e escrever se é par ou ímpar. */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int numero;
    
    printf("Inisira um número inteiro e positivo: ");
    scanf("%d", &numero); 
    
    if (numero <= 0) {
        printf("ERRO: Por favor, digite apenas números positivos\n");
        return 1;
    }
    
    if(numero % 2 == 0) {
        printf("O número (%d) é um inteiro e positivo par.\n ", numero);
    }
    
    else {
        printf("O número (%d) é um inteiro e positivo ímpar.\n", numero);
    }
    
    return 0;
}
