/*O programa recebe um caracter e imprime por extenso o estado civil.
C – Casado(a)
S- Soteiro(a)
D – Divorciado(a)
V- Viúvo(a)
*/

#include <stdio.h>

int main()
{
    char estado_civil;
    int caractere_valido;
    
    do {
        caractere_valido = 1;
        
        printf("Atualize o estado civil em seu cadastro.\n");
        printf("Selecione a seguir, o respectivo caractere para seu atual estado civil\n\n");
        printf("C – Casado(a)\nS- Solteiro(a)\nD – Divorciado(a)\nV- Viúvo(a)\n\nDigite o caractere: ");
        scanf(" %c", &estado_civil);
        
        printf("Estado civil: ");
        
        switch(estado_civil) {
            case 'C':
            case 'c':
                printf("Casado(a)");
                break;
            case 'S':
            case 's':
                printf("Solteiro(a)");
                break;
            case 'D':
            case 'd':
                printf("Divorciado(a)");
                break;
            case 'V':
            case 'v':
                printf("Viúvo(a)");
                break;
            default:
                printf("ERRO: Caractere inválido, digite novamente.\n\n");
                caractere_valido = 0;
        } 
    
    } while (!caractere_valido); 
    
    printf("\nCadastro atualizado com sucesso!\n");
    return 0;
}
