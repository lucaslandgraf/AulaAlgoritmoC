// Vamos escrever um algoritmo em C que cria um vetor de 10 posições, 
// preenche todas as posições com zero e depois imprime o conteúdo do vetor.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10]; //declara o vetor

    for(int i = 0; i < 10; i++){
        vetor[i] = 0;
        printf("Valor 0 na posicao %d do vetor\n", i);
    }

    for(int j=0; j < 10; j++){ // imprimindo vetor
        printf("[%d]", vetor[j]);
    }
    return 0;
}
