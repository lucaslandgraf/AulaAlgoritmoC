#include <stdio.h>
#include <stdlib.h>

int main()
{
    int raio;
    float conta;
    float pi = 3.14;

    printf("Diga o raio de um circulo para saber a area total: ");
    scanf("%d", &raio);

    conta = pi * (raio * raio);

    printf("A area total do circulo eh de %0.2f \n", conta);

    return 0;
}
