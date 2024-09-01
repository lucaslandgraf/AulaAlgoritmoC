#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    int calc;

    printf("Os valores a seguir serao colocados no calculo: 2 * ((a - c)/8) - b * 5 \n");

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("O valor de a eh %d.\n", a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    printf("O valor de b eh %d. \n", b);
    printf("Digite o valor de C: ");
    scanf("%d", &c);
    printf("O valor de c eh %d.\n", c);

    calc = 2 * ((a - c)/8) - b * 5;
    printf("A equacao 2 * (( %d -  %d )/8) - %d * 5 \n",a,b,c);
    printf("O valor do calculo eh: %d", calc);

    return 0;
}

