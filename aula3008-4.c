#include <stdio.h>
#include <stdlib.h>

int main()
{
    float qtdeHoras, valorHora, percentInss, salLiquido;

    printf("Qual a quantidade de horas trabalhadas? ");
    scanf("%f", &qtdeHoras);

    printf("Qual o valor da hora em R$? ");
    scanf("%f", &valorHora);

    printf("Qual o percentual do INSS? ");
    scanf("%f", &percentInss);

    salLiquido = (qtdeHoras * valorHora) - ((qtdeHoras * valorHora) * percentInss / 100);

    printf("O sal\240rio do professor \202 de R$ %.2f", salLiquido);

    return 0;
}
