// Escreva um programa em C que armazene as notas de quatro bimestres para cinco alunos em uma matriz 5x5, onde cada linha representa um aluno 
// e as quatro primeiras colunas representam as notas bimestrais. O programa deve solicitar ao usuário que insira as notas dos alunos 
// e, em seguida, calcular a média das quatro notas de cada aluno. Exiba as notas de cada aluno, calcule a média 
// e indique se o aluno foi aprovado ou reprovado com base em uma média mínima de 60 pontos.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[5][5]; // declara a matriz
    float media[5];

    // inserir valores

    for(int l = 0; l < 5; l++){
            media[l] = 0;
        for(int c = 0; c < 4; c++){
            printf("Insira valores nas notas dos bimestres do aluno %d: ", l);
            scanf("%d", &mat[l][c]);
            media[l] += mat[l][c];
        }
        media[l] = media[l] / 4;
        printf("\n");
    }

    for(int lin = 0; lin < 5; lin++){
            printf("Notas do aluno %d: ", lin);
        for(int col = 0; col < 4; col++){
            printf("[ %d ]", mat[lin][col]);
        }
         if(media[lin] >= 60){
            printf("\tMedia %.2f Passou", media[lin]);
        }else if(media[lin] < 60){
            printf("\tMedia %.2f Reprovado", media[lin]);
        }
        printf("\n");
}

    return 0;
}
