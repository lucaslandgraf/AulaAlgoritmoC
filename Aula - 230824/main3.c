#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, primeiro, n, razao;

    printf("escreva o valor de primeiro: ");
    scanf("%d", &primeiro);
    printf("escreva o valor de n: ");
    scanf("%d", &n);
    printf("escreva o valor da razao: ");
    scanf("%d", &razao);

    a = primeiro + (n - 1) * razao;

    printf("O resultado da progressao eh %d", a);

    return 0;
}
