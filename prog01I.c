/*Faça um programa que leia idade e peso de um atleta e imprima a sua categoria, de acordo com a
seguinte tabela:
Idade Peso Categoria
até 12 anos - Infantil
13 a 16 anos
até 40 kg Juvenil leve
acima de 40 kg Juvenil pesado
17 a 24 anos
até 45 kg Senior leve
de 45,001 a 60 kg Senior médio
acima de 60 kg Senior pesado
acima de 24 anos - Veterano*/

#include <stdio.h>

int main()
{
    int idade;
    float peso;
    
    printf("\tOlá atleta! Vamos descobrir sua categoria.\n\n\n");
    printf("\nInsira sua idade: ");
    scanf("%d", &idade);
    printf("\nInsira seu peso: ");
    scanf("%f", &peso);
    
    printf("\n=======================================================");
    
    printf("\n\tCATEGORIA");
    
    if (idade <= 12) {
    printf("\n\n\tInfantil");    
    }
    
    else if (idade >=13 && idade <=16) {
        if (peso <= 40) {
            printf("\n\n\tJuvenil leve"); 
        }
        
        else {
        printf("\n\n\tJuvenil pesado");
        } 
        
    }
    
    else if (idade >=17 && idade <=24) {
        if (peso <= 45) {
            printf("\n\n\tSenior leve"); 
        } 
        
        else if (peso >45 && peso <=60) {
            printf("\n\n\tSenior médio"); 
        } 
        
        else {
        printf("\n\n\tSenior pesado"); 
        }
    
        
    }
    
    if (idade > 24) {
        printf("\n\n\tVeterano");
    }
    
    printf("\n=======================================================");
    
    return 0;
}
