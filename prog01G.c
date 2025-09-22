/*Fazer um algoritmo para ler 3 números quaisquer e imprimir o maior deles. Se iguais, imprimir
qualquer um.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, num3;
    
    printf("Insira o primeiro número: ");
    scanf("%f", &num1);
    
    printf("Insira o segundo número: ");
    scanf("%f", &num2);
    
    printf("Insira o terceiro número: ");
    scanf("%f", &num3);
    
    if (num1 == num2 && num1 == num3) {
        printf("Você inseriu números iguais, foi digitado o número (%.2f). ", num1);
    }
    
    else if (num1 >= num2 && num1 >= num3) {
        printf("Maior: (%.2f)\n", num1);
    }
    
    else if (num2 >= num1 && num2 >= num3) {
        printf("Maior: (%.2f)\n", num2);
    }
    
    else {
        printf("Maior: (%.2f)\n", num3);
    }
    
    return 0;
}
