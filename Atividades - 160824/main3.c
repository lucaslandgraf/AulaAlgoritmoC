#include <stdio.h>
#include <stdlib.h>

int main()
{
    int raio;
    int altura;
    float conta;
    float pi = 3.14;

    printf("Para se saber o volume de um cilindro informe os seguintes valores: \n");

    printf("Informe seu raio: ");
    scanf("%d", &raio);
    printf("Informe sua altura: ");
    scanf("%d", &altura);

    conta = pi * (raio * raio) * altura;

    printf("O volume do cilindro eh de %0.2f \n", conta);

    return 0;
}
