#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i= 1,num, soma = 0;


    while(i <= 5){
        printf("Digite um numero: ");
        scanf("%d", &num);
        soma = soma + num;
        //forma 2:soma+=num;
        i++;
    }

    printf("O resultado da soma eh %d", soma);

    return 0;
}
