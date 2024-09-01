#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3, num4, cont1, cont2;


    printf("Para descobrir quantos litros de combustivel voce vai comprar informe os seguintes valores \n");

    printf("Diga 1 numero: ");
    scanf("%d", &num1);
    printf("Diga outro numero: ");
    scanf("%d", &num2);
    printf("Diga outro numero: ");
    scanf("%d", &num3);
    printf("Diga outro numero: ");
    scanf("%d", &num4);

    cont1 = num1 * num2;;
    cont2 = num2 + num4;

    printf("O resultado da multiplicacao entre  %d e %d eh: %d \n", num1, num2, cont1);
    printf("O resultado da soma entre %d e %d eh: %d", num2, num4, cont2);

    return 0;
}
