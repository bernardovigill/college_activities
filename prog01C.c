/* Tendo como entrada a altura (h) e o sexo (codificado da seguinte forma: 1:feminino 2:masculino) de
uma pessoa, construa um algoritmo que calcule e imprima seu peso ideal, utilizando as seguintes
fórmulas: 
para homens: (72.7 * h) - 58
para mulheres: (62.1* h) - 44.7 */

#include <stdio.h>
#include <stdlib.h>

int main ()
{
    float h, peso_homem, peso_mulher;
    int sexo;
    
    printf("Insira sua altura: ");
    scanf("%f", &h);
    
    printf("\nInsira seu gênero utilizando 1 para (masculino) ou 2 para (feminino): ");
    scanf("%d", &sexo);
    
    peso_homem = (72.7 * h) - 58;
    peso_mulher = (62.1* h) - 44.7;
    
    if (sexo == 1) {
        printf("Seu peso ideial é %.1fKg", peso_homem);
    } 
    
    else {
        printf("Seu peso ideial é %.1fKg", peso_mulher);
    }
    
    return 0;
    
}
