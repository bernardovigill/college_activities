/* Escreva um algoritmo para ler as notas das duas avaliações de um aluno no semestre, calcular e
escrever a média semestral. Se a média for maior que 6.0 imprimir a mensagem “APROVADO”. Se
a média for menor que 6.0 e maior que 3.0, imprimir a mensagem “EXAME”, se a média for menor
que 3.0 imprimir a mensagem “REPROVADO”. */

#include <stdio.h>

int main()

{
    int avaliacao1;
    int avaliacao2;
    int media_semestre;
    
    printf("Olá aluno, vamos calcular sua média semestral!\n\n");
    printf("Por gentileza, digite a nota da sua primeira avaliação\n" "Nota: ");
    scanf("%d", &avaliacao1);
    
    printf("Ok! Agora digite sua nota da segunda avaliação\n" "Nota: ");
    scanf("%d", &avaliacao2);
    
    media_semestre = (avaliacao1 + avaliacao2) / 2;
    
    if (media_semestre >=6) {
    printf("Nota semestre: %d\n" "PARABÉNS! Você foi aprovado", media_semestre);
    
    } else if (media_semestre >=3) {
        printf("Nota semestre: %d\n" "EXAME", media_semestre);
        
    } else {
        printf("Nota semestre: %d\n" "REPROVADO", media_semestre);
    }
    
    return 0;
}
