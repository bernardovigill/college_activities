/*Faça um algoritmo para ler dois números e imprimir o maior e o menor número lido, acompanhados
da mensagem Menor ou Maior, conforme o caso. Se iguais, imprimir os dois números
acompanhados da mensagem São iguais.*/

#include <stdio.h>

int main()
{
    float num1, num2;
    
    printf("Insira o primeiro valor: ");
    scanf("%f", &num1);
    
    printf("Insira o segundo valor: ");
    scanf("%f", &num2);
    
    if (num1 > num2) {
        printf("Maior: %.2f\n", num1);
        printf("Menor: %.2f\n", num2);
    }
    
    else if (num2 > num1) {
        printf("Maior: %.2f\n", num2);
        printf("Menor: %.2f\n", num1);
    }
    
    else {
        printf("Os números (%.2f) e (%.2f) são iguais.\n", num1, num2);
    }
    
    return 0;
}
