#include <stdio.h>
#include <stdlib.h>

struct pessoa {
    char nome[50];
    float altura;
    int idade;
};

int main() {
    struct pessoa p[10];  // Declaração de 10 elementos para o array

    // Coleta de dados
    for(int i = 0; i < 10; i++) {
        printf("Informe o nome, altura e idade da pessoa: ");
        scanf(" %[^\n]", p[i].nome);  // Lê o nome até a quebra de linha
        scanf("%f", &p[i].altura);
        scanf("%d", &p[i].idade);
    }

    // Ordenação para que a pessoa mais velha fique no índice 0
    for(int i = 1; i < 10; i++) {
        if(p[0].idade < p[i].idade) {
            struct pessoa temp = p[0];
            p[0] = p[i];
            p[i] = temp;
        }
    }

    // Exibição dos dados
    printf("Pessoa mais velha:\n");
    printf("Nome: %s\n", p[0].nome);
    printf("Altura: %.2f\n", p[0].altura);
    printf("Idade: %d\n", p[0].idade);

    return 0;
}
