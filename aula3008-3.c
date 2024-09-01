#include <stdio.h>
#include <stdlib.h>

int main()
{
    double valorConta, gorjeta, valorTotal;

    printf("Digite o valor da conta: \n");
    scanf("%lf", &valorConta);

     gorjeta = valorConta * 10 / 100;
     valorTotal = valorConta + gorjeta;

    printf("O valor da conta foi de R$ %.2lf\n", valorConta);
    printf("O valor da gorjeta foi de R$ %.2lf\n", gorjeta);
    printf("Totalizando o valor total de R$ %.2lf\n", valorTotal);

    return 0;
}
