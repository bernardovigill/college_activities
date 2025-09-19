/*Escreva um algoritmo que verifique a validade de uma senha fornecida pelo usuário. A senha válida
é o número 1234. Deve ser impresso as seguintes mensagens:
ACESSO PERMITIDO caso a senha seja válida.
ACESSO NEGADO caso a senha seja inválida.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int senha = 1234;
    
    printf("Digite sua senha: ");
    scanf("%d", &senha);
    
    if (senha == 1234) {
        printf("\n\tACESSO PERMITIDO");
    }
    
    else {
        printf("\n\tACESSO NEGADO");
    }
    
    return 0;
}
