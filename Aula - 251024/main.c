// Escreva um programa em C que leia uma palavra ou frase de até 20 caracteres digitada pelo usuário, incluindo espaços. 
// O programa deve exibir a palavra ou frase digitada e calcular o número total de caracteres

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char string[20];

    printf("Digite uma palavra para ler os caracteres: ");
    scanf(" %[^\n]s", string); // Lê a string incluindo espaços até a nova linha

    printf("Palavra digitada: %s \n", string);

    int tamanho = strlen(string); // Calcula o tamanho da palavra
    printf("O tamanho da palavra eh %d", tamanho);

    return 0;
}