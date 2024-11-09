#include <stdio.h>
#include <stdlib.h>

struct aluno{

    char nome[50];
    int RA;
    int numCurso;

};

int main()
{
    struct aluno a1;

    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]", a1.nome);
    printf("Digite o Registro do aluno(RA): ");
    scanf("%d", &a1.RA);
    printf("Digite o numCurso do aluno: ");
    scanf("%d", &a1.numCurso);

    printf("Aluno: %s \nRA: %d\nCurso: %d", a1.nome, a1.RA, a1.numCurso);

    return 0;
}
