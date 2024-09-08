#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 1, soma = 0, num, media;


    while(i <= 10){
        printf("Digite um numero: ");
        scanf("%d", &num);
        soma = soma + num;
        media = soma / num;
        i++;
    }

    printf("O resultado da media dos numeros informados eh %d", media);

    return 0;
}
