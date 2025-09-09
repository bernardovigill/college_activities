/* Escreva um algoritmo para ler as notas das duas avaliações de um aluno no semestre, calcular e
escrever a média semestral e a seguinte mensagem: ‘PARABÉNS! Você foi aprovado’ somente se
o aluno foi aprovado (considere 6.0 a nota mínima para aprovação). Acrescente ao exercício acima a mensagem ‘Você foi REPROVADO! Estude mais’ caso a média
calculada seja menor que 6,0.*/

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
    
    if (media_semestre < 6) {
    printf("Nota semestre: %d\n" "Você foi REPROVADO! Estude mais", media_semestre);
    
    } else {
        printf("Nota semestre: %d\n" "PARABÉNS! Você foi aprovado", media_semestre);
    }
    
    return 0;
}
