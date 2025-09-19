/* As maçãs custam R$ 0,30 se forem compradas menos do que uma dúzia, e R$ 0,25 se forem
compradas pelo menos doze. Escreva um algoritmo que leia o número de maçãs compradas,
calcule e escreva o valor total da compra. */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float preco1 = 0.30;
    float preco2 = 0.25;
    int quantidade;
    float total;
    
    printf("\v\tSeja bem-vindo a Fruteira da Esquina!\n");
    printf("\t=====================================\n\n\n");
    printf("\tEstamos com oferta nas maçãs!\n\n");
    printf("\tNa compra de uma dúzia ou mais, \n\ta unidade sai por apenas R$0.25 \n\n\t\tAproveite!\n\n\n");
    printf("Insira quantas unidades deseja comprar: ");
    scanf("%d", &quantidade);
    
    if (quantidade <= 0) {
    printf("\n\nQuantidade inválida! Digite um número positivo.\n");
    return 1;
    }


    if (quantidade < 12) {
    total = quantidade * preco1;
    } 
    
    else {
    total = quantidade * preco2;
    }
    
    printf("\n\nSua compra custa R$%.2f", total);

    
    return 0;
    
}
