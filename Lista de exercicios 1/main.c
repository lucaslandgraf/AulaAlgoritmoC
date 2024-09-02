#include <stdio.h>
#include <stdlib.h>

int main()
{

    double raio, area, perimetro;
    double pi = 3.14159;

    printf("Digite o valor do raio: ");
    scanf("%lf", &raio);

    area = pi * raio * raio;
    perimetro = 2 * pi * raio;


    printf("O valor da area do circulo eh de: %0.2lf \n", area);
    printf("O perimetro do circulo eh de: %0.2lf \n", perimetro);
    return 0;
}