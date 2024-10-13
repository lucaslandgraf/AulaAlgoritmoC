// Escreva um algoritmo em C que cria um vetor de 10 posições,
// preenche o mesmo com os números pares a partir do 2 
// e depois imprime o conteúdo do vetor.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[10], var = 2;

    for(int i = 0; i < 10; i++){
            vetor[i] = var;
            var = var + 2;
            printf("%d - ", vetor[i]);
    }

    return 0;
}
