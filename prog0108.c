/* Escreva um algoritmo para ler o ano de nascimento de uma pessoa e escrever uma mensagem que
diga se ela poderá ou não votar este ano (não é necessário considerar o mês em que ela nasceu). */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int ano_nascimento;
    int ano_atual = 2025;
    int idade;
    
    printf("Digite o ano em que você nasceu:\n");
    scanf("%d", &ano_nascimento);
    
    idade = ano_atual - ano_nascimento;
    
    if (idade >= 16) {
        printf("Você já poderá votar esse ano!\n");
    }   
    
    else {
        printf("Você ainda não possui idade suficiente para votar.\n");
    }
    
    return 0;
}
