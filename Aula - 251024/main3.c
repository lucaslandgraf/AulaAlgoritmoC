// Elabore um programa em C que leia duas palavras ou frases de até 20 caracteres digitadas pelo usuário. 
// O programa deve copiar a primeira palavra digitada para uma nova variável e exibir essa cópia na tela

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char string1[20], string2[20], copia[20];

    printf("Digite uma palavra comparativa: ");
    gets(string1);

    printf("Digite outra palavra comparativa: ");
    gets(string2);

    strcpy(copia, string1); // Copia o primeiro valor digitado para 'copia'
    printf("Copia do primeiro valor digitado eh: %s\n", copia);

    return 0;
}
