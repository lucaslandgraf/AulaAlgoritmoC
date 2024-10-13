// Escreva um algoritmo em C que recebe como entrada 10 números inteiros informados pelo usuário e os armazena-os em um vetor.
// Depois, o seu algoritmo deve calcular a soma e a média dos números armazenados. 
// Ao final, o seu algoritmo deve imprimir o vetor, a soma e a média de seus elementos.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10], soma = 0, media;

    for(int i = 0; i < 10; i++){
        printf("Digite um valor inteiro para a posicao %d: ", i);
        scanf("%d", &vetor[i]);
        soma += vetor[i];

    }

    media = soma / 10;


    for(int e = 0; e < 10; e++){
        printf("Na posicao %d vale: %d \n", e, vetor[e]);
    }

    printf("Soma eh %d\n", soma);
    printf("media eh %d\n", media);

    return 0;
}


