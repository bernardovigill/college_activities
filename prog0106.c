/* Ler um valor numérico que esteja na faixa de valores de 1 até 9. O programa deve apresentar a
mensagem “O valor está na faixa permitida”, caso o valor informado esteja entre 1 e 9. Se o valor
estiver fora dessa faixa, o programa deve apresentar a mensagem “O valor está fora da faixa
permitida”. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    
    printf("Digite um número de [1 à 9]:\n");
    scanf("%d", &numero);
    
    switch (numero)
    {
        case 1:     printf("Um\n");
                    break;
                    
        case 2:     printf("Dois\n");
                    break;
                    
        case 3:     printf("Três\n");
                    break;            
                    
        case 4:     printf("Quatro\n");
                    break;            
                    
        case 5:     printf("Cinco\n");
                    break;            
                    
        case 6:     printf("Seis\n");
                    break;            
                    
        case 7:     printf("Sete\n");
                    break;            
                    
        case 8:     printf("Oito\n");
                    break;            
                    
        case 9:     printf("Nove\n");
                    break;      
                    
        default:    printf("O valor está fora da faixa permitida\n");            
    }
    
    return 0;
}
