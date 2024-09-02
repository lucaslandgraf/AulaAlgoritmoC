#include <stdio.h>
#include <stdlib.h>

int main()
{

    double km, tempo, conta;

    printf("Quantos quilometros voce andou: ");
    scanf("%lf", &km);
    printf("Quanto tempo durou a sua viagem (em horas): ");
    scanf("%lf", &tempo);


    conta = km / tempo;

    printf("A velocidade media da sua viagem foi de: %0.2lf km/h \n", conta);
    return 0;
}