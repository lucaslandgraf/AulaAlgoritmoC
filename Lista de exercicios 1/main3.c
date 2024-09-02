#include <stdio.h>
#include <stdlib.h>

int main()
{

    double num, conta;

    printf("Digite um numero: ");
    scanf("%lf", &num);

    conta = num * 0.04;

    printf("4 por cento do seu numero eh: %0.2lf \n", conta);
    return 0;
}