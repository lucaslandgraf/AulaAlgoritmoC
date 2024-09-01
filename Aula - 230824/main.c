#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num1, res1, res2;
    int x = 2;
    int y = 3;


    printf("Digite um numero: ");
    scanf("%d", &num1);


    res1 = pow(num1, x);
    res2 = pow(num1, y);

    printf("O quadrado desse numero eh: %d \n", res1);
    printf("O cubo desse numero eh: %d \n", res2);

    return 0;
}