#include <stdio.h>
#include <stdlib.h>

int main()
{
    char temp;
    double C, F;

    printf("Voce vai digitar a temperatura em qual escala (C/F)? ");
    scanf("%c", &temp);

    if (temp == 'C')
    {
        printf("Digite a temperatura em Celsius: ");
        scanf("%lf", &C);

        F = (double) 9 / 5 * C + 32;
        printf("A temperatura em Fahrenheit \202: %.0lf", F);

    }
    else if (temp == 'F')
    {

        printf("Digite a temperatura em Fahrenheit: ");
        scanf("%lf", &F);

        C = (double) 5 / 9 * (F - 32) ;
        printf("A temperatura em Celsius \202: %.0lf", C);

    }
    else
    {

        printf("Escala inválida.\n");
    }

    return 0;
}
