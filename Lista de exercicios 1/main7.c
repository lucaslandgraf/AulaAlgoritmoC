#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
double x1, x2, y1, y2, cont;
printf("Escreva dois pontos (x1, x2): ");
scanf("%lf %lf", &x1, &x2);
printf("Escreva dois pontos (y1, y2): ");
scanf("%lf %lf", &y1, &y2);
cont = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
printf("A distancia entre os pontos eh: %lf", cont);
return 0;
}