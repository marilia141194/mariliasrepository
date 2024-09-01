#include <stdio.h>
#include <stdlib.h>

int main()
{
    double valorProduto, percentDesconto, valorFinal;

    printf("Digite o valor do produto: \n");
    scanf("%lf", &valorProduto);

    printf("Digite a porcentagem do desconto: \n");
    scanf("%lf", &percentDesconto);

    valorFinal = valorProduto - (valorProduto * percentDesconto / 100);

    printf("O valor do produto com desconto \202 de R$ %.2lf", valorFinal);

    return 0;
}
