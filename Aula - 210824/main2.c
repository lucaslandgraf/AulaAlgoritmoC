#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int valor;
    double raiz;

    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &valor);
    printf("O valor digitado eh: %d \n", valor);
    raiz = sqrt(valor);
    printf("O valor da raiz de %d eh %0.2lf \n", valor, raiz);

    return 0;
}
