#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, troca;

    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);

    if(n1 > n2){
        troca = n1;
        n1 = n2;
        n2 = troca;
    }

    printf("%d -> %d", n1, n2);

    return 0;
}
