#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3, arm;

    printf("Escreva um numero: ");
    scanf("%d", &num1);
    printf("Escreva outro numero: ");
    scanf("%d", &num2);
    printf("Escreva outro numero: ");
    scanf("%d", &num3);

    if(num1 > num2 ){
        arm = num1;
        num1 = num2;
        num2 = arm;
    }if(num1 > num3){
        arm = num1;
        num1 = num3;
        num3 = arm;
    }if(num2 > num3){
        arm = num2;
        num2 = num3;
        num3 = arm;
    }

    printf("Os numeros em ordem crescente ficam: %d %d %d", num1, num2, num3);


    return 0;
}
