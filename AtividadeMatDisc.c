#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p, q, result1, result2, result3, result4, result5;

    printf("Digite p: ");
    scanf("%d", &p);
    printf("Digite q: ");
    scanf("%d", &q);

    result1 = p && q;
    result2 = p || q;
    result3 = p ^ q;
    result4 = (!p) || q;
    result5 = (p || (!q)) && ((!p) || q);

    printf("P e Q: %d\n", result1);
    printf("P ou Q: %d\n", result2);
    printf("ou P ou Q: %d\n", result3);
    printf("se P entao Q: %d\n", result4);
    printf("se e somente se P entao Q: %d", result5);

    return 0;
}
