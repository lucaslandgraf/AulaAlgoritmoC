#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0, num_digitado = 1, soma = 0;
    float media;

    while(num_digitado != 0){
        printf("Digite um numero, ou digite 0 para sair: ");
        scanf("%d", &num_digitado);
        soma = soma + num_digitado;
        //ou soma += num_digitado;
        if(num_digitado != 0){
            i++;
        }
    }

    media = soma/i;

    printf("Voce digitou %d numeros. \nA media dos valores eh %0.2f", i, media);

    return 0;
}

