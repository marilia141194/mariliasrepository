#include <stdio.h>
#include <stdlib.h>

int main()
{
    double L1, L2, L3, P1, P2, D1, D2, media;

    printf("L1 - Lista de exerc\241cios 01: ");
    scanf("%lf", &L1);
    printf("L2 - Lista de exerc\241cios 02: ");
    scanf("%lf", &L2);
    printf("P1 - Primeira Avalia\207\306o: ");
    scanf("%lf", &P1);
    printf("D1 - Exerc\241cio Desafio 01: " );
    scanf("%lf", &D1);
    printf("L3 - Lista de exerc\241cios 03: ");
    scanf("%lf", &L3);
    printf("P2 - Segunda Avalia\207\306o: ");
    scanf("%lf", &P2);
    printf("D2 - Exerc\241cio Desafio 02: " );
    scanf("%lf", &D2);

    media = ((((L1 * 0.1) + (L2 * 0.1) + (P1 * 0.8) + D1) + ((L3 * 0.2) + (P2 * 0.8) + D2)) / 2);
    printf("\n");
    printf("M\202dia final do aluno: %.1lf", media);

    return 0;
}
