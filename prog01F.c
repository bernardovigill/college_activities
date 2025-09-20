/*Fazer um algoritmo para ler 3 números quaisquer e imprimir o maior deles. Se iguais, imprimir
qualquer um.*/

#include <stdio.h>

int main ()
{
    float num1, num2, num3;
    
    printf("Insira o primeiro valor: ");
    scanf("%f", &num1);
    
    printf("\nInsira o segundo valor: ");
    scanf("%f", &num2);
    
    printf("\nInsira o terceiro valor: ");
    scanf("%f", &num3);
    
    if (num1 >= num2 && num1 >= num3) {
        printf("Maior: (%.2f)", num1);
    }
    
    else if (num2 >= num1 && num2 >= num3) {
        printf("Maior: (%.2f)", num2);
    }
    
    else {
        printf("Maior: (%.2f)", num3);
    }
    
    return 0;
}
