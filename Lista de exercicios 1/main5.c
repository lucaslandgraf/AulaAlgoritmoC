#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, cont;

    printf("Escreva um numero inteiro de 3 digitos (ex: 123): ");
    scanf("%d", &num);

    cont = (num / 10) % 10;

    printf("O numero do meio eh: %d", cont);

    return 0;
}