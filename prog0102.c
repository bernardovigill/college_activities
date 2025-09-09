/*Escreva um algoritmo para ler um valor numérico inteiro positivo ou negativo e apresentar o valor
lido como sendo um valor positivo, ou seja, se o valor lido for menor ou igual a zero, ele deve ser
multiplicado por -1.*/

#include <stdio.h>

int main()

{
    int numero = 0;
    int negativo = -1;
    
    printf("Digite um número inteiro:\n ");
    scanf("%d", &numero);
    
    int positivo = numero * negativo;    
        
    
    if (numero <= 0); 
    printf("O número %d é positivo\n", positivo);
        
 
        
    return 0;    
}
