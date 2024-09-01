#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, n, tabuada;

    printf("Deseja a tabuada para qual valor? ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++) {
        tabuada = n * i;
        printf("%d x %d = %d\n", n, i, tabuada);
        }

    return 0;
}
