// Escreva um algoritmo que receba uma String do usuário e imprima as letras das posições ímpares.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char palavra[20];
    int tam;

    printf("Escreva uma palavra de ate 20 letras!\n");
    scanf("%s", palavra);

    tam = strlen(palavra);

    for(int i = 0; i < tam; i++){
        if(i%2 != 0){
            printf("resultado: %c\n", palavra[i]);
        }
    }

    return 0;
}
