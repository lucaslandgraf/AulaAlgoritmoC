// Escreva um programa em C que crie uma matriz de 5 linhas e 4 colunas para armazenar as notas de quatro bimestres para cinco alunos. 
// O programa deve solicitar ao usuário as notas de cada aluno em cada bimestre e armazená-las na matriz. 
// Em seguida, exiba as notas de cada aluno, calcule a média das quatro notas 
// e informe se o aluno foi aprovado ou reprovado com base em uma média mínima de 6,0 pontos.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int mat[5][4]; // Declara uma matriz 5x4 para armazenar notas dos alunos em 4 bimestres

    // Inserir valores nas notas
    for (int l = 0; l < 5; l++) {
        printf("Insira valores (inteiros) nas notas dos bimestres do aluno %d:\n", l);
        for (int c = 0; c < 4; c++) {
            printf("Nota %d: ", c + 1);
            scanf("%d", &mat[l][c]);
        }
        printf("\n");
    }

    // Exibir as notas e verificar a média de cada aluno
    for (int lin = 0; lin < 5; lin++) {
        printf("Notas do aluno %d: ", lin);
        int soma = 0;
        
        for (int col = 0; col < 4; col++) {
            printf("[ %d ] ", mat[lin][col]);
            soma += mat[lin][col]; // Acumula as notas para calcular a média
        }
        
        float media = soma / 4.0; // Calcula a média como número decimal
        printf(" - Media: %.2f - ", media);

        // Verifica a média
        if (media >= 60) {
            printf("Aluno %d Passou\n", lin);
        } else {
            printf("Aluno %d Reprovado\n", lin);
        }
    }

    return 0;
}