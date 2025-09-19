/* Escreva um algoritmo para ler 2 valores (considere que não serão lidos valores iguais) e escreve-los
em ordem crescente. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int valor1;
    int valor2;
    
    do {
    
    printf("Insira o primeiro valor: ");
    scanf("%d", &valor1);
    
    printf("Insira o segundo valor: ");
    scanf("%d", &valor2);
    
    if (valor1 == valor2) {
        printf("Valor inválido. Digite um número diferente.\n\n");
    
    }    
        
    } while (valor1 == valor2);
    
    
    if (valor1 > valor2) {
        printf("A ordem crescente dos números que você digitou é (%d) e (%d)", valor1, valor2);
    } else {
        printf("A ordem crescente dos números que você digitou é (%d) e (%d)", valor2, valor1);
    }
    
    return 0;
}
