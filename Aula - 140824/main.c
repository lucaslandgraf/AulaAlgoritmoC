#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num1;
   int num2;
   int soma;

   printf("Informe um numero: ");
   scanf("%d", &num1);
   printf("Informe outro numero: ");
   scanf("%d", &num2);
   soma = num1 + num2;
   printf("A soma dos dois numeros eh %d\n", soma);
    return 0;
}
