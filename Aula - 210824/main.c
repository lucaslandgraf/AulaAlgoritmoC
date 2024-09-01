#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    double angulo, seno, cosseno, tangente;

    printf("Digite o angulo em graus: ");
    scanf("%lf", &angulo);
    printf("O angulo digitado e %0.2lf \n", angulo);
    angulo = angulo * (3.14 / 180.0);
    seno = sin(angulo);
    cosseno = cos(angulo);
    tangente = tan(angulo);
    printf("O valor de seno e %lf \n", seno);
    printf("O valor de cosseno e %lf \n", cosseno);
    printf("O valor de tangente e %lf \n", tangente);

    return 0;
}
