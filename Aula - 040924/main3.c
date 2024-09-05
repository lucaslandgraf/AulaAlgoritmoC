#include <stdio.h>
#include <stdlib.h>

int main()
{
    char conceito;

    printf("Digite de A a D e descubra seu conceito: ");
    scanf("%c", &conceito);

    switch(conceito){
case 'A':
    printf("Excelente");
    break;
case 'B':
    printf("Bom");
    break;
case 'C':
    printf("Regular");
    break;
case 'D':
    printf("Reprovado");
    break;
default:
    printf("Digite um valor valido \nDigite um valor entre A e D (maiusculo)");
    break;
    }

    return 0;
}
