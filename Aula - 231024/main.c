// Escreva um programa em C que crie uma matriz 2x2, armazene valores calculados com base nas posições de linha e coluna, 
// e exiba esses valores na forma de uma matriz. O valor de cada posição na matriz deve ser o produto dos índices da linha 
// e coluna correspondentes.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[2][2]; // declara a matriz

    printf("O ultimo valor da matriz eh: ", mat[1][1]);

    // inserir valores

    for(int linha = 0; linha < 2; linha++){
        for(int col = 0; col < 2; col++){
            mat[linha][col] = linha * col;
        }
    }

    // imprimir valores(matriz)

    for(int l = 0; l < 2; l++){
        for(int c = 0; c < 2; c++){
            printf("[ %d ]", mat[l][c]);
        }
        printf("\n");
    }

    return 0;
}
