// Desenvolva um algoritmo em C que cria um vetor de 10 posições. 
// O programa deve solicitar ao usuário que insira um valor inteiro para cada posição do vetor, 
// preenchendo-o com esses valores. Em seguida, exiba na tela o conteúdo completo do vetor.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10]; //declara o vetor

    for(int i = 0; i < 10; i++){
        printf("Digite um valor para a posicao %d do vetor \n", i);
        scanf("%d", &vetor[i]);
    }

    for(int j=0; j < 10; j++){ // imprimindo vetor
        printf("[%d]", vetor[j]);
    }
    return 0;
}
