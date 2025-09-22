/*Uma loja de eletrodomésticos estabeleceu as seguintes modalidades de pagamento para a venda
de suas mercadorias:
À vista ................................ desconto de 2,5% sobre o preço de tabela;
De 2 até 5 vezes ................ preço de tabela, sem desconto ou acréscimo;
De 6 até 10 vezes .............. juros de 6% sobre o preço de tabela;
De 11 até 15 vezes ............ juros de 13% sobre o preço de tabela.
Exemplo: preço de tabela = R$ 100,00, para pagamento em 8 vezes;
preço total = 100,00 + 6,00 (6% de 100,00) = 106,00;
cada parcela = 106,00 / 8 = R$ 13,25.
O programa deve ler o preço de tabela e o número de vezes em que o pagamento será feito, e
calcular o valor de cada parcela e o preço total da compra.
Exibir, na tela, como segue:
PREÇO DE TABELA: R$ XXXXXXXXX
NUM. DE VEZES: XX
VALOR DE CADA PARCELA: R$ XXXXXXXXX
PREÇO TOTAL: R$ XXXXXXXXX*/

#include <stdio.h>

int main()
{
    float preco_tabela, preco_total, valor_parcela;
    int num_vezes;
    
    printf("Insira o preço de tabela do item que você quer comprar: ");
    scanf("%f", &preco_tabela);
    
    printf("Insira o número das parcelas: ");
    scanf("%d", &num_vezes);
    
    if (num_vezes == 1) {
        preco_total = preco_tabela * 0.975;
    }
    
    else if (num_vezes >= 2 && num_vezes <= 5) {
        preco_total = preco_tabela; 
    }
    
    else if (num_vezes >= 6 && num_vezes <= 10) {
        preco_total = preco_tabela * 1.06;
    }
    
    else if (num_vezes >= 11 && num_vezes <= 15) {
        preco_total = preco_tabela * 1.13;
    }
    
    else {
        printf("Número de parcelas inválido! Insira um número de 1 até 15. ");
    }
    
    valor_parcela = preco_total / num_vezes;
    
    printf("\n");
    printf("PREÇO DE TABELA: R$%.2f\n", preco_tabela);
    printf("NUM. DE VEZES: %d\n", num_vezes);
    printf("VALOR DE CADA PARCELA: R$%.2f\n", valor_parcela);
    printf("PREÇO TOTAL: R$%.2f\n ", preco_total);
    
    return 0;
}

