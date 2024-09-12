#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0, num_digitado = 1, soma = 0;
    float media;

    do{
        printf("Digite um numero, ou digite 0 para sair: ");
        scanf("%d", &num_digitado);
        soma += num_digitado;
        if(num_digitado != 0){
            i++;
        }
    }while(num_digitado != 0);
    media = soma/i;

    printf("Voce digitou %d numeros, a media eh %0.2f", i, media);
    return 0;
}

