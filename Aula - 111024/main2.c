// Escrever um algoritmo que recebe como entrada 10 números inteiros informados pelo usuário e os armazena em um vetor. 
// Logo após o seu algoritmo deverá imprimir os valores armazenados.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10];

    for(int i = 0; i < 10; i++){
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
    }

    for(int j = 0; j < 10; j++){
        printf("Valores: [%d] \n", vetor[j]);
    }

    return 0;
}
