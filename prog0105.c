/* Escreva um algoritmo para ler 2 valores (considere que não serão informados valores iguais) e
escrever o maior deles. */

#include <stdio.h>

int main()

{
    int valor1, valor2;
    
    printf("Insira o primeiro valor:\n");
    scanf("%d", &valor1);

    do {
        printf("Insira o segundo diferente do primeiro:\n");
        scanf("%d", &valor2);
    
    if (valor1 == valor2) {
        printf("Erro: números iguais não são permitidos.\n\n Tente novamente\n");
    } 
    
    } while (valor1 == valor2);
    
    if (valor1 > valor2) {
        printf("O primeiro valor (%d) é maior que o segundo valor (%d)\n", valor1, valor2);
    } else {
        printf("O segundo valor (%d) é maior que o primeiro valor (%d)\n", valor2, valor1);
    }
    
    return 0;
}
