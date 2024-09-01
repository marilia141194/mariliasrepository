#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, menores;
    double soma, media, percent;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    char nomes[n][50];
    int idades[n];
    double alturas[n];

    for (int i=0; i<n; i++)
    {
        printf("Dados da %da pessoa: \n", i+1);
        printf("Nome: ");
        fseek(stdin, 0, SEEK_END); //para limpar o "enter" que deu no nome.
        gets(nomes[i]); //sempre que for ler char precisa ser gets
        printf("Idade: ");
        scanf("%d", &idades[i]);
        printf("Altura: ");
        scanf("%lf", &alturas[i]);
    }

    soma = 0;
    for (int i=0; i<n; i++){
        soma = soma + alturas[i];
    }
    media = soma / n;
    printf("\nAltura media: %.2lf\n", media);

    menores = 0;
    for (int i=0; i<n; i++){
        if (idades[i]<16){
            menores++;
        }
    }
    percent = menores * 100.00 / n;
    printf("Pessoas com menos de 16 anos: %.1lf%%\n", percent);

    for (int i=0; i<n; i++){
        if (idades[i]<16){
            printf("%s\n", nomes[i]);
        }
    }

    return 0;
}
