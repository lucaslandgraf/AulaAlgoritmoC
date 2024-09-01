#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num1);
    printf("Digite outro numero inteiro: ");
    scanf("%d", &num2);

    if (num1 % 2 == 0 && num2 % 2 == 0){
        printf("Ambos os numeros sao pares");
    }else if(num1 % 2 == 0){
        printf("O %d e par", num1);
        }else if(num2 % 2 == 0){
            printf("O %d e par", num2);
        } else {
            printf("Os dois valores sao impares");
        }

    return 0;
}
