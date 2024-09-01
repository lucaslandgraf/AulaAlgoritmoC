#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num1, num2, res1, res2;

    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite outro numero: ");
    scanf("%d", &num2);


    res1 = num1 * num2;
    res2 = sqrt(res1);

    printf("A multiplicacao dos numeros eh: %d \n", res1);
    printf("A raiz de %d eh: %d \n", res1, res2);

    return 0;
}
